#include <applstdef_emC.h>
#ifdef DEF_INSPC_REMOTEACCESS

#include "Proxy2Target_Inspc.h"
#include <emC/HAL/Serial_HALemC.h>

#include <stdio.h> //printf
#include <emC/OSAL/os_time.h>


#ifndef DEF_REFLECTION_NO
#include "genRefl/Proxy2Target_Inspc.crefl"
#else

#endif



Proxy2Target_Inspc* ctor_Proxy2Target_Inspc(ObjectJc* thizo, ThCxt* _thCxt) {
  STACKTRC_TENTRY("ctor_Proxy2Target_Inspc");
  checkInit_ObjectJc(thizo, sizeof(Proxy2Target_Inspc), &refl_Proxy2Target_Inspc, 0);
  Proxy2Target_Inspc* thiz = (Proxy2Target_Inspc*) thizo;
  thiz->channelTarget = 7;  //COM7
  //open_Serial_HALemC(thiz->channelTarget, toReadWrite_Serial_HALemC, 115200, ParityNoStop1_Serial_HALemC);
  STACKTRC_RETURN thiz;
}


static char const* cmdTxt[] =
{ "0"
, "getRootAddr"  // 1
, "getRootType"  // 2
, "getType    "  // 3
, "getSizeOffs"  // 4
, "getLenArray"  // 5
, "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"
, "getByte    "  // 0x10
, "getInt16   "  // 0x11
, "getInt32   "  // 0x12
, "getInt64   "  // 0x13
, "getFloat   "  // 0x14
, "getDouble  "  // 0x15
, "getRef     "  // 0x16
, "getBitfild "  // 0x17
, "setByte    "  // 0x18
, "setInt16   "  // 0x19
, "setInt32   "  // 0x1a
, "setInt64   "  // 0x1b
, "setFloat   "  // 0x1c
, "setDouble  "  // 0x1d
, "setRef     "  // 0x1e
, "setBitfild "  // 0x1f

};


//This operation will be called from inner of the inspector access.
//If the address is in a target.
int32 get_Proxy2Target_Inspc(Proxy2Target_Inspc* thiz, Cmd_InspcTargetProxy_e cmd, uint32 address, int32 input) {

  int32 ret = -1;
  TelgProxy2Target_Inspc_s* txTelg = thiz->proxy2target;
  int16 nrofBytesTx = (int16)sizeof(*txTelg);
  txTelg->address = address;
  txTelg->value = input;
  //at last set new seqnr and cmd
  thiz->seqnrTxTarget = (thiz->seqnrTxTarget +1) & 0xff;
  setCmdSeqnr_TelgProxy2Target_Inspc(txTelg, cmd, thiz->seqnrTxTarget);
  //The target will be read this information in about the next few micro to milliseconds.
  //No: It is a poor polling. 
  //applies the send data in a specific way
  prepareRx_Serial_HALemC(thiz->channelTarget, (MemUnit*)thiz->target2proxy, sizeof(*thiz->target2proxy), 0);

  tx_Serial_HALemC(thiz->channelTarget, C_CAST(MemUnit const*,txTelg), 0, nrofBytesTx);
  int seqnrtarget = -1;
  bool hasReceived = false;
  TelgTarget2Proxy_Inspc_s const* rxTelg = thiz->target2proxy;
  int timeout = 1000;  //seconds
  do {
    os_delayThread(1);
    int zRx = hasRxChars_Serial_HALemC(thiz->channelTarget);
    if(zRx >=sizeof((*rxTelg))) {
      seqnrtarget = getSeqnr_TelgTarget2Proxy_Inspc(rxTelg);
      hasReceived = seqnrtarget == thiz->seqnrTxTarget; 
      if (timeout <= 100) {
        timeout +=0;   //debug break
      }
    }
  } while(!hasReceived && --timeout >=0);
  int32 value;
  if(timeout < 0){
    value = -1;
    printf("Timeout target seqtx=%2.2X seqrx=%2.2X\n", thiz->seqnrTxTarget, seqnrtarget);
  } else { 
    value = rxTelg->retValue; 
    int32 milliseconds = thiz->ms_LastTimeCommunication;
    thiz->ms_LastTimeCommunication = os_getMilliTime();
    int32 timediff = thiz->ms_LastTimeCommunication - milliseconds;
    if(timediff > 1000){
      printf("\n");
    }
    printf("%8.8x %s-@%8.8x x=%8.8x ret=%8.8x\n", (int)cmd, cmdTxt[((int)cmd) & 0x1f], address, input, value);
  }
  return value; 

}

#endif //DEF_INSPC_REMOTEACCESS

