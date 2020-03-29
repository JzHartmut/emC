#include <emC/Inspc/FB/DataStruct_Inspc.h>
#include <emC/Inspc/FB/Access_DataStruct_Inspc.h>
#include <emC/Inspc/FB/DataStructBase_Inspc.h>
#include <emC/Base/DefPortTypes_emC.h>
#include <emC/Base/Handle_ptr64_emC.h> //Support 64-bit-pointer

#include <emC/Inspc/CheckPwd_Inspc.h>
#include <emC/Jc/FileIoJc.h>
#include <emC/Jc/StringJc.h>
#include <emC/J1c/StringFunctionsJc.h>
#include <emC/J1c/StringPartScanJc.h>

#include <emC/OSAL/os_mem.h>
#include <string.h>
#include <stdarg.h>

#include "emC/Inspc/FB/genRefl/DataStruct_Inspc.crefl"
#ifdef __SIMULINK_SFN__  
  //only for Sfn where Access_DataStruct_Inspc.c is not member of project, but reflections are need:
  #include "emC/Inspc/FB/genRefl/Access_DataStruct_Inspc.crefl"
#endif


//NOTE: This source is only compiled for PC inside the Sfunction. 
//The target does not need this sources, instead the generated source from this Sfunction. 
//See operation













char const* genSource_DataStructMng_Inspc(DataStructMng_Inspc* thiz, StringJc dirGenSrc)
{ char const* error = null;
  FileDescription_OSAL dir = { 0 };
  int zDirFile = 0;
  char const* sDirFile = getCharsAndLength_StringJc(&dirGenSrc, &zDirFile);
  if(zDirFile == 0) { 
    thiz->stateGen = 1; return "no file"; //no file path given.
  }
  init_FileDescription_OSAL(&dir, 0, sDirFile, zDirFile);
  refresh_FileDescription_OSAL(&dir);
  if(!exists_FileDescription_OSAL(&dir)) { thiz->stateGen = 0xd; error = "directory faulty"; }
  else { //directory exists
    int zName = strnlen_emC(thiz->clazz.name, sizeof(thiz->clazz.name));
    char buffer[40]; 
    int zpos = strncpy_emC(buffer, thiz->clazz.name, sizeof(thiz->clazz.name));
    zpos += strcpy_emC(buffer + zpos, ".h", sizeof(buffer)-zpos);
    initDir_FileDescription_OSAL(&thiz->filegen, 0, &dir, buffer, zpos);
  }
  return error;
}




char const* definePortType_DataStructMng_Inspc(DefPortTypes_emC* fbInfo, EDefPortTypes_emC cause
  , char const inputDefinition[500]
  , int inherit_param, int chain_param
) {
  int zEntries = MIN_emC(32, fbInfo->zEntries); //the number of entries from the SfH-Wrapper
  fbInfo->ixInputStep = 0;
  fbInfo->ixInputStep2 = 0;
  fbInfo->ixInputUpd = 0;
  zEntries = analyzeVariableDef(z_StringJc(inputDefinition), null, zEntries, fbInfo, 0, false, cause);
  fbInfo->mInputInit |= fbInfo->mInputVargInit;
  fbInfo->mInputUpd |= fbInfo->mInputVargStep;
  fbInfo->nrofInputs = zEntries;
  fbInfo->ixInputInit = zEntries; //start of the non-varg inputs.
                                  //
                                  //NOTE: determine the nrof and ix of ports any time. On Run too.
  if (inherit_param) {
    if (cause == kSetFromArg_EPropagatePortTypes_emC) {
      set_DefPortTypes_emC(fbInfo, zEntries, 'H', "subTypeMng", &reflection_DataStructMng_Inspc, "DataStructMng_Inspc", 0, mInputInit_Entry_DefPortType_emC);  //step( ... DataStructMng_Inspc* subTypeMng
      Entry_DefPortType_emC* port = &fbInfo->entries[zEntries];
      port->newDefined_Tstep_Tinit |= newDefined_Entry_DefPortType_emC;
    }
    int32 mBit = 1 << zEntries;
    fbInfo->mInputInit |= mBit;
    fbInfo->mInputVargInit |= mBit;
    fbInfo->nrofInputs = ++zEntries;
  }
  if (chain_param) {
    if (cause == kSetFromArg_EPropagatePortTypes_emC) {
      set_DefPortTypes_emC(fbInfo, zEntries, 'H', "prevChain", &reflection_DataStruct_Inspc, "DataStruct_Inspc_t", 0, mInputInit_Entry_DefPortType_emC);  //step( ... DataStruct_Inspc_t* prevChain
      Entry_DefPortType_emC* port = &fbInfo->entries[zEntries];
      port->newDefined_Tstep_Tinit |= newDefined_Entry_DefPortType_emC;
    }
    int32 mBit = 1 << zEntries;
    fbInfo->mInputInit |= mBit;
    fbInfo->mInputVargInit |= mBit;
    fbInfo->nrofInputs = ++zEntries;
  }
  fbInfo->ixOutputStep = zEntries;
  fbInfo->ixOutputStep2 = zEntries;
  fbInfo->ixOutputInit = zEntries;
  //output ports:
  set_DefPortTypes_emC(fbInfo, zEntries, 'H', "data_y", &reflection_UserHead_DataStructMng_Inspc, "UserHead_DataStructMng_Inspc", 0, mOutputInit_Entry_DefPortType_emC);  //step( ... UserHead_DataStructMng_Inspc* data_y
  set_DefPortTypes_emC(fbInfo, zEntries+1, 'H', "thiz", &reflection_DataStructMng_Inspc, "DataStructMng_Inspc", 0, mOutputInit_Entry_DefPortType_emC);  //step( ... UserHead_DataStructMng_Inspc* data_y
  return null;
}


//it is similar definePortType_DataStructMng_Inspc but without inherit_param and without Outport 1.
//
char const* definePortType_DataStruct_Inspc(DefPortTypes_emC* fbInfo, EDefPortTypes_emC cause
  , char const inputDefinition[500]
) {
  //VariableParam_DataStruct_Inspc_s inputDefEntries[32] = {0};
  int zEntries = MIN_emC(32, fbInfo->zEntries); //the number of entries from the SfH-Wrapper
  fbInfo->ixInputStep = 0;
  fbInfo->ixInputStep2 = 0;
  fbInfo->ixInputUpd = 0;
  zEntries = analyzeVariableDef(z_StringJc(inputDefinition), null, zEntries, fbInfo, 0, false, cause);
  fbInfo->mInputInit |= fbInfo->mInputVargInit;
  fbInfo->mInputUpd |= fbInfo->mInputVargStep;
  fbInfo->nrofInputs = zEntries;
  fbInfo->ixInputInit = zEntries; //start of the non-varg inputs.
  //
  //NOTE: determine the nrof and ix of ports any time. On Run too.
  if (true) { //chain_param) {
    if (cause == kSetFromArg_EPropagatePortTypes_emC) {
      set_DefPortTypes_emC(fbInfo, zEntries, 'H', "prevChain", &reflection_DataStruct_Inspc, "DataStruct_Inspc_t", 0, mInputInit_Entry_DefPortType_emC);  //step( ... DataStruct_Inspc_t* prevChain
      Entry_DefPortType_emC* port = &fbInfo->entries[zEntries];
      port->newDefined_Tstep_Tinit |= newDefined_Entry_DefPortType_emC;
    }
    fbInfo->mInputInit |= 1 << zEntries;
    fbInfo->nrofInputs = ++zEntries;
  }
  fbInfo->ixOutputStep = zEntries;
  fbInfo->ixOutputStep2 = zEntries;
  fbInfo->ixOutputInit = zEntries;
  ASSERT(fbInfo->ixOutputThizInit == -1);
  //output ports:
  set_DefPortTypes_emC(fbInfo, zEntries, 'H', "thiz", &reflection_DataStructMng_Inspc, "DataStructMng_Inspc", 0, mOutputInit_Entry_DefPortType_emC);  //step( ... UserHead_DataStructMng_Inspc* data_y
  return null;
}



static void ctor_DataStructCommon_Inspc(DataStruct_Inspc* thiz, DefPortTypes_emC* fbInfo
  , char const* inputDefinition
  , int inherit_param, int chain_param
) {
  STACKTRC_ENTRY("ctor_DataStruct_Inspc");
  DataStructBase_Inspc_s* thizd = &thiz->base.super;
  int zVarParams = fbInfo->nrofInputs;
  if(inherit_param){ zVarParams -=1; } //one input for inherit
  if(chain_param){ zVarParams -=1; } //one input for chain
  ctor_DataStructBase_Inspc(&thiz->base.super, fbInfo, fbInfo->ixInputVarg, zVarParams, inputDefinition);
  //
  uint32 mBit = 0x80000000;
  if (chain_param) {
    while(mBit !=0 && (thizd->fBlockInfo->mInputInit & mBit) == 0){ mBit >>=1; }  //logic shift
    thiz->mBitChainInput = mBit; //should be the highest bit, in error case 0.
    mBit >>=1;  //start for inherit_param
  }
  if (inherit_param) {
    //mBit is either 0x80000000 or it is the super bit itself after chain bit.
    while(mBit !=0 && (thizd->fBlockInfo->mInputInit & mBit) == 0){ mBit >>=1; }  //logic shift
    thiz->mBitInheritInput = mBit; //should be the highest bit, in error case 0.
  }
  STACKTRC_RETURN;
}





void ctor_DataStructMng_Inspc(DataStructMng_Inspc* thiz, DefPortTypes_emC* fBlockInfo
, char const inputDefinition[500]
, int inherit_param, int chain_param
) {
  STACKTRC_ENTRY("ctor_DataStructMng_Inspc");
  //ctor of base;
  CALLINE; initReflection_ObjectJc(&thiz->base.object, thiz, sizeof(*thiz), &reflection_DataStructMng_Inspc, 0);
  CALLINE; ctor_DataStructCommon_Inspc(&thiz->base.super, fBlockInfo, inputDefinition, inherit_param, chain_param);
  thiz->ctInit = 5;  //at least 5 steps for sub Manager to work.
  STACKTRC_RETURN;
}



void checkAndCast_DataStructMng_Inspc(UserHead_DataStructMng_Inspc* in, StringJc typeData_param, StringJc header_param, UserHead_DataStructMng_Inspc** out_y) {
  if (in == null) {
    *out_y = null;
    return;
  }
  STACKTRC_ENTRY("checkAndCast_DataStructMng_Inspc");
  if (instanceof_s_ObjectJc(&in->base.object, PTR_StringJc(typeData_param))) {
    *out_y = in;
  }
  else {
    THROW_s0(IllegalStateException, "faulty Type", (int)(intptr_t)in, 0);
    *out_y = null;
  }
  STACKTRC_RETURN;
}




/*
void init_CheckAndCast_DataStruct_Inspc(CheckAndCast_DataStruct_Inspc* thiz, ObjectJc* in, StringJc typeData_param, ObjectJc** out_y) {
  STACKTRC_ENTRY("init_CheckAndCast_DataStruct_Inspc");
  if (instanceof_s_ObjectJc(in, PTR_StringJc(typeData_param))) {
    thiz->data = in;
    *out_y = in;
  }
  else {
    THROW_s0(IllegalStateException, "faulty Type", (int)(intptr_t)in, 0);
    *out_y = 0;
  }
  STACKTRC_RETURN;
}
*/


void dtor_DataStructMng_Inspc(DataStructMng_Inspc* thiz) {
  STACKTRC_ENTRY("dtor_DataStructMng_Inspc");
  dtor_DataStruct_Inspc(&thiz->base.super);
  if(thiz->fields !=null) {
    for (int ix = 0; ix < thiz->fields->head.length; ++ix) {  //Note: The last field is not dynamicall typed.
      FieldJc* field = &thiz->fields->data[ix];
      if (((intptr_t)field->type_) > kREFLECTION_afterlastPrimitive_ClassJc) { //it is a allocated ClassJc
        CALLINE; os_freeMem(field->type_);
      }
    }
    CALLINE; os_freeMem(thiz->fields);
  }
  clearHandle_Handle2Ptr(thiz->hUserDataBlock); //*addr_thiz;
  CALLINE; freeM_MemC(thiz->userDataBlock);
  STACKTRC_RETURN;
}


//Note: n1..n6: The memory is not persistent. Because they will be processed later, the content is copied to bufferNames. Compare with init_DataStructMng_Inspc
void ctor_DataStruct_Inspc(DataStruct_Inspc* thiz, DefPortTypes_emC* fbInfo
, StringJc subName_param
, char const inputDefinition[500]
) {
  STACKTRC_ENTRY("ctor_DataStruct_Inspc");
  initReflection_ObjectJc(&thiz->base.object, thiz, sizeof(*thiz), &reflection_DataStruct_Inspc, 0);
  ctor_DataStructCommon_Inspc(thiz, fbInfo, inputDefinition, 0, 1);
  copyToBuffer_StringJc(subName_param, 0, -1, thiz->subName, sizeof(thiz->subName)-1);
  STACKTRC_RETURN;
}







void dtor_DataStruct_Inspc(DataStruct_Inspc* thiz) {
  dtor_DataStructBase_Inspc(&thiz->base.super);
}







static void evalNamesCreateFields_DataStruct_Inspc(DataStruct_Inspc* thiz, DataStructMng_Inspc* master, ThCxt* _thCxt) { 
  int ixData = master->ixDataLast;
  int ixFieldStart = master->fields->head.length;
  //int ixDataStart = ixData + OFFSETinTYPE_MemUnit(UserData_DataStructMng_Inspc, val) / sizeof(int32);
  evalNamesCreateFields_DataStructBase_Inspc(&thiz->base.super, master->fields, ixFieldStart, _thCxt);
  for(int ix = ixFieldStart; ix < (ixFieldStart + thiz->base.super.zVariable); ++ix) {
    thiz->base.super.varParams[ix].ixInVal = ixData;
    master->fields->data[ix].offsFieldInStruct = (int16)(OFFSETinTYPE_MemUnit(UserData_DataStructMng_Inspc, val) + ixData * sizeof(int32));  
    ixData += (thiz->base.super.varParams[ix].nrofBytesValue +3) >>2;  //ixData as index to int32 array.
  }

  master->ixDataLast = ixData;
  master->fields->head.length = ixFieldStart + thiz->base.super.zVariable;
}









/**Writes init inputs. It is called from init_DataStruct_Inspc(...) and init_DataStructMng_Inspc(...)
 */
static bool initInputs_DataStruct_Inspc(DataStruct_Inspc* thiz, va_list varg, ThCxt* _thCxt) {
  STACKTRC_TENTRY("initTinit_DataStruct_Inspc");
  DataStructBase_Inspc_s* thizd = &thiz->base.super;
  bool bInit = true;  //set to false if a handle is 0 yet now.
  int32 mbit = 1;
  int32 mInit = thizd->fBlockInfo->mInputInit;
  for (int ix = 0; ix < thizd->zVariable; ++ix) {
    VariableParam_DataStruct_Inspc_s* varInfo = &thizd->varParams[ix];
    Entry_DefPortType_emC const* portInfo = &thizd->fBlockInfo->entries[ix];
    if(mInit & mbit){
      void const* addr = va_arg(varg, void const*);
      int dbg = *(int*)addr;  //only debug
      float dbgf = *(float*)addr;  //only debug
      FieldJc const* field = &thiz->clazz->attributes->data[varInfo->ixField];

      int nrofbytesInput = varInfo->nrofBytesValue;
      int ixInVal = varInfo->ixInVal;
      if (portInfo->type == 'H' || portInfo->type == 'U' && isHandleRef_FieldJc(field)) { //a typed handle
        //Note: The data stores the reference itself. It is not a handle in data. But the input in Simulink is a handle.
        uint32 handle = *(uint32*)addr;
        checkAddress_MemC(&thiz->userData, &thiz->userData.addr->val[ixInVal], sizeof(thiz->userData.addr->val[ixInVal]));
        if (handle == 0) { //handle is unknown
          bInit = false;  //wait for handle
        }
        else if (handle == (uint32(-1))) { //it is a delivered null-pointer
          thiz->userData.addr->val[ixInVal] = handle;  //it is ok, offer it forward.
        }
        else if (handle != (uint32)thiz->userData.addr->val[ixInVal]) { //handle value is changed, (do not check twice)
          thiz->userData.addr->val[ixInVal] = handle;  //store the changed value
          //now test the type of the referenced instance:
          ObjectJc* inPtr = (ObjectJc*)ptr_Handle2Ptr(handle);
          ClassJc const* clazzfield = getType_FieldJc(field);
          if (!instanceof_s_ObjectJc((ObjectJc*)(inPtr), clazzfield->name)) { //check via char-name because reflection may from different dll.
            bInit = 0;  //error in system
            thiz->errorPort |= 1 << ix;
            THROW_s0(IllegalArgumentException, "faulty type on port: ", ix+1, 0);  //show error because the type is faulty, this is the expected error on wiring faulties.
          }
        }
      }
      else { //any other, no handle:
        memcpy_MemC(&thiz->userData, &thiz->userData.addr->val[ixInVal], addr, nrofbytesInput);
        //memcpy(&thiz->userData[ixInVal], addr, nrofbytesInput);
      }
    }
    mbit <<=1;
  }
  STACKTRC_RETURN bInit;
}






bool init_DataStruct_Inspc(DataStruct_Inspc* thiz
  , DataStruct_Inspc** thizout_y
  , ...
) {
  va_list varg;
  va_list vargSub;
  va_start(varg, thizout_y);
  vargSub = varg;

  if (isInitialized_ObjectJc(&thiz->base.object) ) {
    *thizout_y = thiz;
    return true;  //initialized already.
  }
  STACKTRC_ENTRY("initTinit_DataStruct_Inspc");
  DataStructBase_Inspc_s* thizd = &thiz->base.super;
  DataStruct_Inspc* prevchain = null;
  if (thiz->mBitChainInput) {
    int mBit = 1;
    while(  mBit !=0 && (mBit & thiz->mBitChainInput)==0 ) { //super bit not found yet, abort after 32 bit 
      if(mBit & thizd->fBlockInfo->mInputInit) { //an init input
        void const* addrInput = va_arg(varg, void const*);  //skip over later used inputs.
      }
      mBit <<=1;
    }
    uint32 const* hAddrChainData = va_arg(varg, uint32 const*);
    uint32 hChainData = *hAddrChainData;
    if(hChainData ==0){ //not yet given, wait with initialization.
      *thizout_y = null; 
      STACKTRC_RETURN false;  //prevent initializing
    }
    else if(hChainData ==-1){ prevchain = null; }
    else { 
      prevchain = (DataStruct_Inspc*)ptr_Handle2Ptr(hChainData);
      if (!instanceof_s_ObjectJc(&prevchain->base.object, "DataStruct_Inspc")) { //check via char-name because reflection may from different dll.
        THROW_s0(IllegalArgumentException, "last Input should be a DataStruc_Inspc for chain, faulty type: ", 0, 0);  //show error because the type is faulty, this is the expected error on wiring faulties.
      } else {
        thiz->prevChain = prevchain; //The input address set here. Elsewhere it is null.
      }
    }
  }
  //
  //if comming here, thiz->prevChain is set or is really null.
  *thizout_y = thiz;  //set for chain to mng
  if( thiz->userData.addr != null) { //it is processed from master 
    if(initInputs_DataStruct_Inspc(thiz, varg, _thCxt)) {
      setInitialized_ObjectJc(&thiz->base.object);  //update can work
      STACKTRC_RETURN true; //all intialized
    } else {
      STACKTRC_RETURN false;
    }
  }
  else {
    *thizout_y = thiz;
    STACKTRC_RETURN false; //output is set for the chain, but mng-initialization is not done.
  }
}


bool init_DataStructMng_Inspc(DataStructMng_Inspc* thiz
  //, DataStructMng_Inspc* subTypeMng, struct DataStruct_Inspc_t* prevchain
  , StringJc dirGenSource_param
  , StringJc typeData_param
  //, void const* const vport_x[32]
  , UserHead_DataStructMng_Inspc** data_y
  , ...
  ) { 
  va_list varg;
  va_list vargSub;
  va_start(varg, data_y);
  vargSub = varg;
  STACKTRC_ENTRY("init_DataStructMng_Inspc");
  if (isInitialized_ObjectJc(&thiz->base.object)) {
    //should not be invoked in this state. All is done.
    if (data_y != null) { *data_y = &thiz->base.super.userData.addr->base.super;  }
    STACKTRC_RETURN true;
  }

  DataStructMng_Inspc* subTypeMng = thiz;
  int mBit = 1;
  if (thiz->base.super.mBitInheritInput) {
    CALLINE;
    while(  mBit !=0 && (mBit & thiz->base.super.mBitInheritInput)==0 ) { //super bit not found yet, abort after 32 bit 
      if(mBit & thiz->base.super.base.super.fBlockInfo->mInputInit) { //an init input
        void const* addrInput = va_arg(varg, void const*);  //skip over later used inputs.
      }
      mBit <<=1;
    }
    uint32 const* hAddrSubTypeMng = va_arg(varg, uint32 const*);
    mBit <<=1;  //because va_arg ware read.
    uint32 hSubTypeMng = *hAddrSubTypeMng;
    if(hSubTypeMng ==0){ subTypeMng = null; }  //not yet given, wait with initialization.
    else if(hSubTypeMng ==-1){ subTypeMng = thiz; }
    else { 
      subTypeMng = (DataStructMng_Inspc*)ptr_Handle2Ptr(hSubTypeMng);
      if (!instanceof_s_ObjectJc(&subTypeMng->base.object, "DataStructMng_Inspc")) { //check via char-name because reflection may from different dll.
        THROW_s0(IllegalArgumentException, "Input should be a DataStructMng_Inspc, faulty type: ", thiz->base.super.base.super.zVariable, 0);  //show error because the type is faulty, this is the expected error on wiring faulties.
      }
    }
  }
  DataStruct_Inspc* prevchain = &thiz->base.super;
  if (thiz->base.super.mBitChainInput) {
    CALLINE;
    //mBit: either it is the bit after mBitSuperInput, it is mBitChainInput, or it is 1 because no super input.
    while(  mBit !=0 && (mBit & thiz->base.super.mBitChainInput)==0 ) { //super bit not found yet, abort after 32 bit 
      if(mBit & thiz->base.super.base.super.fBlockInfo->mInputInit) { //an init input
        void const* addrInput = va_arg(varg, void const*);  //skip over later used inputs.
      }
      mBit <<=1;
    }
    uint32 const* hAddrChainData = va_arg(varg, uint32 const*);
    uint32 hChainData = *hAddrChainData;
    if(hChainData ==0){ prevchain = null; }  //not yet given, wait with initialization.
    else if(hChainData ==-1){ prevchain = &thiz->base.super; }
    else { 
      prevchain = (DataStruct_Inspc*)ptr_Handle2Ptr(hChainData);
      if (!instanceof_s_ObjectJc(&prevchain->base.object, "DataStruct_Inspc")) { //check via char-name because reflection may from different dll.
        THROW_s0(IllegalArgumentException, "last Input should be a DataStruc_Inspc for chain, faulty type: ", 0, 0);  //show error because the type is faulty, this is the expected error on wiring faulties.
      }
    }
  }
  //
  if (subTypeMng == null) { //not given yet, wait at least 5 times after tiven for initializing sub type
    thiz->ctInit = 5;
  }
  else {
    thiz->ctInit -= 1;
  }
  //thiz->subTypeMng = subTypeMng;            //store inputs independent whether null or given.
  //
  if (subTypeMng != null && subTypeMng !=thiz && (intptr_t)subTypeMng != -1) {
    //a valid sub type: store this supertype there.
    subTypeMng->superTypeMng = thiz; //store the back relation. The subType should know thiz superType.
    //Note: The last thiz->superTypeMng remains null.
    thiz->subTypeMng_dbg = subTypeMng;
  }
  //
  if (prevchain == null || subTypeMng == null) { 
    if (data_y != null) { *data_y = &thiz->base.super.userData.addr->base.super; }
    STACKTRC_RETURN false;
  }
  thiz->base.super.prevChain = (intptr_t)prevchain == -1 || prevchain == &thiz->base.super ? null: prevchain;  //last member: store null
  //
  bool bDoinit = thiz->ctInit < 0;
  //
  //quest of all base/super instances whether they are initialized. 
  //If one base instance is not ready, wait, set bDoinit = false.
  //
  if(bDoinit && thiz->fields == null) {
      //The fields are not initialized yet, do it.
    int nrofFields = 0;
    int nrofData = 0;
    bool bDoinit = true;
    CALLINE;
    DataStructMng_Inspc* superTypeMng = thiz;             //start with thiz as base mng
    while (  bDoinit 
          && superTypeMng->superTypeMng != null   //the last in queue then finish while.
      ) {
      superTypeMng = superTypeMng->superTypeMng;
      if (superTypeMng == null) {
        bDoinit = false;  //this instance has not a derived input, it is not initialized yet. Abort.
      }
      else if (superTypeMng->nrofDataSuperMng == 0) {   //is not initialized yet, abort. Should have at least one member. 
        bDoinit = false;
      }
      else {
        nrofData += superTypeMng->nrofDataSuperMng;  //data for super comes from here.
      }
    }//while
    //
    if (bDoinit) { //Initialize all fields
      CALLINE;
      thiz->ixDataLast = nrofData;   //>0 if superTypeMng exists. 
      //
      //count all fields and data bytes in the own chain.
      //all slaves in chain are known, elsewhere the input prevChain would be null. 
      //
      //Start with the own data, while to chained data.
      DataStruct_Inspc* dataStructMember = &thiz->base.super;
      do {
        nrofData += evalSizes_DataStructBase_Inspc(&dataStructMember->base.super);   //this->nrofFields = 0 by construction, 
        nrofFields += dataStructMember->base.super.zVariable;                      //this->nrofData is 0 or set from data of the super instances.
        dataStructMember = dataStructMember->prevChain;
      } while (dataStructMember != null && dataStructMember != &thiz->base.super);  //the last chain member has thiz as input
      //
      CALLINE;
      if (nrofFields < zFieldsInHead_FieldJc_Y) { nrofFields = zFieldsInHead_FieldJc_Y; }
      int fieldBytes = sizeof(FieldJc_Y) + (nrofFields - zFieldsInHead_FieldJc_Y) * sizeof(FieldJc);
      thiz->fields = (FieldJc_Y*)os_allocMem(fieldBytes);
      //
      //fill the local given superclass and class data.
      //
      init_immediate_ObjectArrayJc(&thiz->superclass.head, 1, sizeof(thiz->superclass.clazz), null, 0);
      ClassJc const* superClass;
      int32 superAccess = 0;
      if (thiz->superTypeMng != null) {          //set from the superTypeMng if it is given via the superTypeMng's subTypeMng input
        superClass = &thiz->superTypeMng->clazz; //the refer it.
        superAccess = 0;                         //free access to the super field.
      }
      else {
        superClass = &reflection_UserHead_DataStructMng_Inspc;
        superAccess = kDevlpAccess_CheckPwd_Inspc; //access to the internal data of the highest superMng only for developer. 
      }
      CALLINE;  //initialize the superclass: view to own data
      ctor_ClassOffset_idxMtblJc(&thiz->superclass.clazz, superClass, superAccess, 0);
      ctor_Fields_super_ClassJc(&thiz->clazz, typeData_param, sizeof(*thiz), &thiz->fields->head, &thiz->superclass.head);
      int posField = OFFSETinTYPE_MemUnit(UserData_DataStructMng_Inspc, val);  //UserData_DataStructMng_Inspc::val[]
      //
      //fill the fields
      //
      dataStructMember = &thiz->base.super;  //start with this data, process all chained.
      CALLINE;
      do {
        dataStructMember->clazz = &thiz->clazz;
        evalNamesCreateFields_DataStruct_Inspc(dataStructMember, thiz, _thCxt);
        dataStructMember = dataStructMember->prevChain;
      } while (dataStructMember != null && dataStructMember != &thiz->base.super);
      //
      //builds the instance:
      if (subTypeMng == thiz || (intptr_t)subTypeMng == -1) {
        //it is the highest derived, it builds the instance
        CALLINE;
        if (nrofData < zBaseVal_UserData_DataStructMng_Inspc) { nrofData = zBaseVal_UserData_DataStructMng_Inspc; }
        int userDataBytes = sizeof(UserData_DataStructMng_Inspc) + sizeof(int32) * (nrofData - zBaseVal_UserData_DataStructMng_Inspc);
        ALLOC_MemC(thiz->userDataBlock, userDataBytes);  //(UserData_DataStructMng_Inspc*)os_allocMem(userDataBytes);
        thiz->hUserDataBlock = registerPtr_Handle2Ptr(thiz->userDataBlock.addr, "UserDataStruct_Inspc");
        //set Userdata to all super
        DataStructMng_Inspc* mng1 = thiz;             //start with thiz as base mng
        do {
          dataStructMember = &mng1->base.super;
          //set userData to all superTypeMng and its slaves
          do {
            dataStructMember->userData = thiz->userDataBlock;
            dataStructMember = dataStructMember->prevChain;
          } while (dataStructMember != null && dataStructMember != &mng1->base.super);
          mng1 = mng1->superTypeMng == mng1 ? null : mng1->superTypeMng;  //abort on last in base queue
        } while (mng1 != null);
        //register this data in the parent node:
        CALLINE;
        initReflection_ObjectJc(&thiz->userDataBlock.addr->base.object, &thiz->userDataBlock.addr, userDataBytes, &thiz->clazz, 0);
        thiz->userDataBlock.addr->base.super.thiz1 = thiz;  //access to the mng data especially via reflection
        setInitialized_ObjectJc(&thiz->userDataBlock.addr->base.object);  //for the offered data
        if (data_y != null) { *data_y = &thiz->userDataBlock.addr->base.super; }
      }
      else {
        //thiz has another sub mng, it has count the data, allocate the ClassJc and FieldJc, proper to use for the master.
        thiz->nrofDataSuperMng = nrofData;
      }
    }//if super Types are initialized, now fields are initialized.
  }//if thiz->fields == null, core initialization.
    //
  //It is ready if the userData are set, either this is the instance building mng, or the master mng has set it.
  //
  if (thiz->base.super.userData.addr != null) {
    CALLINE;
    if (data_y != null) { *data_y = &thiz->base.super.userData.addr->base.super; }
    if(initInputs_DataStruct_Inspc(&thiz->base.super, vargSub, _thCxt)) {
      setInitialized_ObjectJc(&thiz->base.object);  //update can work
      if (genSource_DataStructMng_Inspc(thiz, dirGenSource_param) == null) {
        thiz->ctGenSrc = 100;
      }
      STACKTRC_RETURN true; //all intialized
    } else {
      STACKTRC_RETURN false;
    }
  }
  else {
    if (data_y != null) { *data_y = null; }
    STACKTRC_RETURN false; //not fully ready yet. But thiz->fields are processed and ready.
  }
}




static void updateInternal_DataStruct_Inspc(DataStruct_Inspc* thiz, va_list varg) //void const* const vport_x[32])
{

  if (thiz->userData.addr == null) return;
  int32* userData = &thiz->userData.addr->val[0];
  int32 mbit = 1;
  int32 mUpd = thiz->base.super.fBlockInfo->mInputUpd;
  VariableParam_DataStruct_Inspc_s* varParam = thiz->base.super.varParams;
  for (int ix = 0; ix < thiz->base.super.zVariable; ++ix) {
    if(mUpd & mbit){
      void const* addr = va_arg(varg, void const*); //vport_x[ix];
      int dbg = *(int*)addr;  //only debug
      float dbgf = *(float*)addr;  //only debug
      int nrofbytesInput = varParam->nrofBytesValue;
      int ixInVal = varParam->ixInVal;
      memcpy_MemC(&thiz->userData, &thiz->userData.addr->val[ixInVal], addr, nrofbytesInput);
      //memcpy(&userData[ixInVal], addr, nrofbytesInput);
    }
    mbit <<=1;
    varParam +=1;  //Pointer to next array element.
  }
}



void update_DataStruct_Inspc(DataStruct_Inspc* thiz
  //  , void const* const vport_x[32]
  , ...
) {
  va_list varg;
  va_start(varg, thiz);
  updateInternal_DataStruct_Inspc(thiz, varg );

}



void update_DataStructMng_Inspc(DataStructMng_Inspc* thiz
  //,  void const* const vport_x[32]
  , ...
  ) {
  va_list varg;
  va_start(varg, thiz);
  updateInternal_DataStruct_Inspc(&thiz->base.super, varg );
}


////



int defTlcParams_DataStructMng_Inspc(DefPortTypes_emC* portInfo_tlcParam
  , char const* keys_tlcParam[3], void const* values_tlcParam[3], char types_tlcParam[2]
  , char buffer_tlcParam[100], int zBuffer_tlcParam
  , char const typeData_param[40]
  , int inherit_param, int chain_param
) {
  int zChars = 0;
  int posBuffer = 0;

  if(chain_param) {
    int pinChain = portInfo_tlcParam->nrofInputs-1;
    keys_tlcParam[0] = "pinChain";
    types_tlcParam[0] = 'S';
    *(int16*)(buffer_tlcParam + posBuffer) = pinChain;
    values_tlcParam[0] = buffer_tlcParam + posBuffer;
    posBuffer += sizeof(int16);
  } else {
    keys_tlcParam[0] = "noChain";
    types_tlcParam[0] = 'S';
    values_tlcParam[0] = buffer_tlcParam + posBuffer;
    posBuffer += sizeof(int16);
  }

  if(inherit_param) {
    int pinSuper = portInfo_tlcParam->nrofInputs  - (chain_param == 0 ? 1 : 2);
    keys_tlcParam[1] = "pinInherit";
    types_tlcParam[1] = 'S';
    *(int16*)(buffer_tlcParam + posBuffer) = pinSuper;
    values_tlcParam[1] = buffer_tlcParam + posBuffer;
    posBuffer += sizeof(int16);
  } else {
    keys_tlcParam[1] = "noInherit";
    types_tlcParam[1] = 'S';
    values_tlcParam[1] = buffer_tlcParam + posBuffer;
    posBuffer += sizeof(int16);
  }

  if(typeData_param !=null) { //not for call from DataStruct_Inspc
    keys_tlcParam[2] = "typeData_param";
    values_tlcParam[2] = typeData_param;
  }
  return posBuffer;
}


int defTlcParams_DataStruct_Inspc(DefPortTypes_emC* portInfo_tlcParam
  , char const* keys_tlcParam[3], void const* values_tlcParam[3], char types_tlcParam[2]
  , char buffer_tlcParam[100], int zBuffer_tlcParam
  , char subName_param[10]
) {
  int zChars = 0;
  int posBuffer = 0;

  keys_tlcParam[2] = "subName_param";
  values_tlcParam[2] = subName_param;
  
  return defTlcParams_DataStructMng_Inspc(portInfo_tlcParam, keys_tlcParam, values_tlcParam, types_tlcParam
  , buffer_tlcParam, zBuffer_tlcParam
  , null, 0, 1);
}








static char const* cTypeFromChar(char type) {
  switch (type) {
  case 'D': return "double";
  case 'd': return "double_complex";
  case 'F': return "float";
  case 'f': return "float_complex";
  case 'I': return "int32";
  case 'i': return "int32_complex";
  case 'U': return "uint32";
  case 'S': return "int16";
  case 'W': return "uint16";
  case 'B': return "int8";
  case 'V': return "uint8";
  case 'Z': return "bool";
  case 'C': return "char";
  case 'H': return "uint32";
  case 'L': return "void*";
  default: return "ERROR";
  } //switch

}





static void writeStepDataStructRoutineHead(DataStructMng_Inspc* thiz, bool bInit, DataStruct_Inspc* slave, StringBuilderJc200 &line, OS_HandleFile fwr)
{
  char const* cline; int zline;
  if (bInit) {
    line += !line + "\n\nbool init_";
  }
  else {
    line += !line + "\n\nvoid step_";
  }
  zline = line + slave->subName + "_" + name_ClassJc(&thiz->clazz)
    + "(" + name_ClassJc(&thiz->clazz) + "_s* thiz" >>= &cline; os_fwrite(fwr, cline, zline);
  int bitCheck = bInit ? mInputInit_Entry_DefPortType_emC : mInputUpd_Entry_DefPortType_emC;
  for (int ix = 0; ix < slave->base.super.zVariable; ++ix) {
    if(slave->base.super.fBlockInfo->entries[ix].newDefined_Tstep_Tinit & bitCheck) {
      FieldJc const* field = &thiz->fields->data[slave->base.super.varParams[ix].ixField];
      zline = !line + ", " + cTypeFromChar(slave->base.super.fBlockInfo->entries[ix].type) + " const* " + name_FieldJc(field) >>= &cline; os_fwrite(fwr, cline, zline);
    }
  }

}



static void writeStepDataStructRoutine(DataStructMng_Inspc* thiz, bool bInit, DataStruct_Inspc* slave, StringBuilderJc200 &line, OS_HandleFile fwr)
{
  char const* cline; int zline;
  writeStepDataStructRoutineHead(thiz, bInit, slave, line, fwr);
  zline = !line + ") {\n" >>= &cline; os_fwrite(fwr, cline, zline);
  if (bInit) {
    zline = !line + "\n  bool bInit = true;" >>= &cline; os_fwrite(fwr, cline, zline);
  }
  int bitCheck = bInit ? mInputInit_Entry_DefPortType_emC : mInputUpd_Entry_DefPortType_emC;
  for (int ix = 0; ix < slave->base.super.zVariable; ++ix) {
    if(slave->base.super.fBlockInfo->entries[ix].newDefined_Tstep_Tinit & bitCheck) {
      FieldJc const* field = &thiz->fields->data[slave->base.super.varParams[ix].ixField];
      ClassJc const* type = getType_FieldJc(field);
      StringJc typeName = name_ClassJc(type);
      if (getStaticArraySize_FieldJc(field) > 1) {
        zline = !line + "\n  memcpy(thiz->" + name_FieldJc(field) + ", " + name_FieldJc(field) + ", sizeof(thiz->" + name_FieldJc(field) + "));"
          + "//" + typeName >>= &cline; os_fwrite(fwr, cline, zline);
      }
      else if (field->bitModifiers & (kReference_Modifier_reflectJc)) {
        if ((field->bitModifiers & mPrimitiv_Modifier_reflectJc) == kHandlePtr_Modifier_reflectJc) { //marked as handle because in the userData the handle is stored. Need to convert there.
          zline = !line + "\n  //In the simulink data a handle is stored, in the generated struct it is a really pointer. Convert it:" >>= &cline; os_fwrite(fwr, cline, zline);
          zline = !line + "\n  thiz->" + name_FieldJc(field) + " = PTR_Handle2Ptr( *" + name_FieldJc(field) + ", struct " + typeName + "_t);" >>= &cline; os_fwrite(fwr, cline, zline);
          if (bInit) {
            zline = !line + "\n  bInit &= (thiz->" + name_FieldJc(field) + " !=null);" >>= &cline; os_fwrite(fwr, cline, zline);
          }
        }
        else {
          zline = !line + "\n  XXXthiz->" + name_FieldJc(field) + " = (" + typeName + "_s*)(" + name_FieldJc(field) + ");" >>= &cline; os_fwrite(fwr, cline, zline);
        }
      }
      else {
        zline = !line + "\n  thiz->" + name_FieldJc(field) + " = *" + name_FieldJc(field) + ";" >>= &cline; os_fwrite(fwr, cline, zline);
      }
    }
  }
  if (bInit) {
    zline = !line + "\n  return bInit;" >>= &cline; os_fwrite(fwr, cline, zline);
  }
  zline = !line + "\n}\n\n" >>= &cline; os_fwrite(fwr, cline, zline);
}












static void writeGetDataStructRoutine(DataStructMng_Inspc* thiz, StringBuilderJc200 &line, OS_HandleFile fwr)
{
  char const* cline; int zline;
  for (int ix = 0; ix < thiz->fields->head.length; ++ix) { //without last field, it is "this$"

    FieldJc const* field = &thiz->fields->data[ix];
    StringJc fieldName = name_FieldJc(field);
    ClassJc const* type = getType_FieldJc(field);
    StringJc typeName = name_ClassJc(type);
    !line + "\ninline void get_" + fieldName + "_" + name_ClassJc(&thiz->clazz) + "(" + name_ClassJc(&thiz->clazz) + "_s* thiz, ";
    if (field->bitModifiers & mReference_Modifier_reflectJc) {
      if ((field->bitModifiers & mPrimitiv_Modifier_reflectJc) == kHandlePtr_Modifier_reflectJc) {  //marked as handle because in the userData the handle is stored. Need to convert there.
        line + "uint32* " + fieldName + ") {";   //it is a handle of type uint32 in simulink of type.
      }
      else {
        line + typeName + "_s* " + fieldName + ") {"; //that is never generated.
      }
    }
    else {
      line + typeName + "* " + fieldName + ") {";  //especially for primitive types.
    }
    zline = line >>= &cline; os_fwrite(fwr, cline, zline);
    //
    if (getStaticArraySize_FieldJc(field) > 1) {
      zline = !line + "\n  memcpy(" + name_FieldJc(field) + ", thiz->" + name_FieldJc(field) + ", sizeof(thiz->" + name_FieldJc(field) + "));"
        + "//" + typeName + "\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
    }
    else if (field->bitModifiers & (kReference_Modifier_reflectJc)) {
      if ((field->bitModifiers & mPrimitiv_Modifier_reflectJc) == kHandlePtr_Modifier_reflectJc) {
        zline = !line + "\n  //In the simulink data a handle is stored, in the generated struct it is a really pointer. Convert it:" >>= &cline; os_fwrite(fwr, cline, zline);
        zline = !line + "\n  *" + name_FieldJc(field) + " = HANDLE_Handle2Ptr(thiz->" + name_FieldJc(field) + ");\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
      }
      else {
        zline = !line + "\n  *" + name_FieldJc(field) + " = XXXthiz->" + name_FieldJc(field) + ";\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);  //never generated
      }
    }
    else {
      zline = !line + "\n  *" + name_FieldJc(field) + " = thiz->" + name_FieldJc(field) + ";\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);  //for primitive variables
    }
  }
}



static void writeSetDataStructRoutine(DataStructMng_Inspc* thiz, StringBuilderJc200 &line, OS_HandleFile fwr)
{
  char const* cline; int zline;  
  for (int ixOut = 0; ixOut < thiz->setData.zdata; ++ixOut) {
    Access_DataStruct_Inspc_s* data = thiz->setData.data[ixOut];
    FieldJc const* field = data->field;
    StringJc fieldName = name_FieldJc(field);
    ClassJc const* type = getType_FieldJc(field);
    StringJc typeName = name_ClassJc(type);
    //
    !line + "\ninline void set_" + fieldName + "_" + name_ClassJc(&thiz->clazz) + "(" + name_ClassJc(&thiz->clazz) + "_s* thiz, ";
    if (field->bitModifiers & mReference_Modifier_reflectJc) {
      if ((field->bitModifiers & mPrimitiv_Modifier_reflectJc) == kHandlePtr_Modifier_reflectJc) {
        line + "uint32* " + fieldName + ") {";
      }
      else {
        line + typeName + "_s* " + fieldName + ") {";
      }
    }
    else {
      line + typeName + "* " + fieldName + ") {";
    }
    zline = line >>= &cline; os_fwrite(fwr, cline, zline);
    //
    if (getStaticArraySize_FieldJc(field) > 1) {
      zline = !line + "\n  memcpy(thiz->" + name_FieldJc(field) + ", " + name_FieldJc(field) + ", sizeof(thiz->" + name_FieldJc(field) + "));"
        + "//" + typeName + "\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
    }
    else if (field->bitModifiers & (kReference_Modifier_reflectJc)) {
      if ((field->bitModifiers & mPrimitiv_Modifier_reflectJc) == kHandlePtr_Modifier_reflectJc) {
        zline = !line + "\n  thiz->" + name_FieldJc(field) + " = PTR_Handle2Ptr(*" + name_FieldJc(field) + ");\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
      }
      else {
        zline = !line + "\n  thiz->" + name_FieldJc(field) + " = *" + name_FieldJc(field) + ";\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
      }
    }
    else {
      zline = !line + "\n  thiz->" + name_FieldJc(field) + " = *" + name_FieldJc(field) + ";\n}\n" >>= &cline; os_fwrite(fwr, cline, zline);
    }

  } //for

}



void genSourceContent_DataStructMng_Inspc(DataStructMng_Inspc* thiz) {
  STACKTRC_ENTRY("genSourceContent_DataStructMng_Inspc");
  StringBuilderJc200 line;
  char const* cline; int zline;
  OS_HandleFile fwr = os_fopenToWrite(thiz->filegen.absPath, false);
  if (!fwr) { thiz->stateGen = 0xe; }
  else {
    struct { StringBuilderJc_s b; char _[200];} sb = { INIZ_addSize_StringBuilderJc(sb.b, 200), 0};
    zline = !line + "#ifndef __" + name_ClassJc(&thiz->clazz) + "_h__\n" >>= &cline; os_fwrite(fwr, cline, zline);
    zline = !line + "#define __" + name_ClassJc(&thiz->clazz) + "_h__\n" >>= &cline; os_fwrite(fwr, cline, zline);

    os_fwrite(fwr, "#include <applstdef_emC.h>\n", -999);
    if (thiz->superTypeMng != null /*&& thiz->superTypeMng != thiz*/) { //has a super class:
      zline = !line + "#include \"genSrcInspc/" + name_ClassJc(&thiz->superTypeMng->clazz) + ".h\"\n" >>= &cline; os_fwrite(fwr, cline, zline);
    }
    os_fwrite(fwr, "\n\n\n\n\n", -999);
    
    //StringJc structName = name_ClassJc(thiz->clazz);
    char structName[(sizeof(thiz->clazz.name) + 4) & ~3] = { 0 };  //[...] calculated in compiletime, at least 1 char more as field->name
    strncpy_emC(structName, thiz->clazz.name, sizeof(thiz->clazz.name)); //NOTE: type->name may not be 0-terminated. typename is.
    //
    //find out all references and declare struct forward:
    //
    for (int ix = 0; ix < thiz->fields->head.length; ++ix) { //without last field, it is "this$"
      FieldJc const* field = &thiz->fields->data[ix];
      if (field->bitModifiers & mReference_Modifier_reflectJc) {
        ClassJc const* type = getType_FieldJc(field);
        StringJc typeName = name_ClassJc(type);
        setLength_StringBuilderJc(&sb.b, 0, _thCxt);
        append_z_StringBuilderJc(&sb.b, "struct ", _thCxt);
        append_s_StringBuilderJc(&sb.b, typeName, _thCxt);
        append_z_StringBuilderJc(&sb.b, "_t;\n", _thCxt);   //a pointer
        os_fwrite(fwr, chars_StringBuilderJc(&sb.b), length_StringBuilderJc(&sb.b));
      }
    }
    //
    setLength_StringBuilderJc(&sb.b, 0, _thCxt);
    append_z_StringBuilderJc(&sb.b, "typedef struct ", _thCxt);
    append_z_StringBuilderJc(&sb.b, structName, _thCxt);
    append_z_StringBuilderJc(&sb.b, "_t {\n  union { ", _thCxt);
    if (thiz->superTypeMng != null /*&& thiz->superTypeMng !=thiz*/) { //has a super class:
      append_s_StringBuilderJc(&sb.b, name_ClassJc(&thiz->superTypeMng->clazz), _thCxt);
      append_z_StringBuilderJc(&sb.b, "_s super; ", _thCxt);
    }
    append_z_StringBuilderJc(&sb.b, "ObjectJc object; } base;\n", _thCxt);
    os_fwrite(fwr, chars_StringBuilderJc(&sb.b), length_StringBuilderJc(&sb.b));
    //
    //write fields (struct ... attributes)
    //
    for (int ix = 0; ix < thiz->fields->head.length; ++ix) { //without last field, it is "this$"
      FieldJc const* field = &thiz->fields->data[ix];
      StringJc fieldName = name_FieldJc(field);
      ClassJc const* type = getType_FieldJc(field);
      StringJc typeName = name_ClassJc(type);
      int32 modifierField = getModifiers_FieldJc(field);
      int accessLevel = (modifierField & mAccessLevel_Modifier_FieldJc) >> kBitAccessLevel_Modifier_FieldJc;
      int chgLevel = (modifierField & mChangeLevel_Modifier_FieldJc) >> kBitChangeLevel_Modifier_FieldJc;
      if(accessLevel >0 || chgLevel >0) {
        zline = !line + "\n  /**...Comment.\n   * @acclevel=" + accessLevel + chgLevel + ".\n   */" 
          >>= &cline; os_fwrite(fwr, cline, zline);
      }
      setLength_StringBuilderJc(&sb.b, 0, _thCxt);
      append_z_StringBuilderJc(&sb.b, "\n  ", _thCxt);
      if (field->bitModifiers & mReference_Modifier_reflectJc) {
        append_z_StringBuilderJc(&sb.b, "struct ", _thCxt);   //a pointer
      }
      append_s_StringBuilderJc(&sb.b, typeName, _thCxt);
      if (field->bitModifiers & mReference_Modifier_reflectJc) {
        append_z_StringBuilderJc(&sb.b, "_t *", _thCxt);   //a pointer
      }
      append_z_StringBuilderJc(&sb.b, " ", _thCxt);
      append_s_StringBuilderJc(&sb.b, fieldName, _thCxt);
      if (((field->bitModifiers & mPrimitiv_Modifier_reflectJc) != kBitfield_Modifier_reflectJc)
        && field->nrofArrayElementsOrBitfield_ > 1) {
        append_z_StringBuilderJc(&sb.b, "[", _thCxt);
        append_I_StringBuilderJc(&sb.b, field->nrofArrayElementsOrBitfield_, _thCxt);
        append_z_StringBuilderJc(&sb.b, "]", _thCxt);
      }
      append_z_StringBuilderJc(&sb.b, ";\n", _thCxt);
      os_fwrite(fwr, chars_StringBuilderJc(&sb.b), length_StringBuilderJc(&sb.b));
    }
    setLength_StringBuilderJc(&sb.b, 0, _thCxt);
    append_z_StringBuilderJc(&sb.b, "} ", _thCxt);
    append_z_StringBuilderJc(&sb.b, structName, _thCxt);
    append_z_StringBuilderJc(&sb.b, "_s;\n\n", _thCxt);
    os_fwrite(fwr, chars_StringBuilderJc(&sb.b), length_StringBuilderJc(&sb.b));
    //
    setLength_StringBuilderJc(&sb.b, 0, _thCxt);
    append_z_StringBuilderJc(&sb.b, "void ctor_", _thCxt);
    append_z_StringBuilderJc(&sb.b, structName, _thCxt);
    append_z_StringBuilderJc(&sb.b, "(", _thCxt);
    append_z_StringBuilderJc(&sb.b, structName, _thCxt);
    append_z_StringBuilderJc(&sb.b, "_s* thiz);\n\n", _thCxt);
    os_fwrite(fwr, chars_StringBuilderJc(&sb.b), length_StringBuilderJc(&sb.b));


    //
    //write prototypes of step routines for the whole structure
    //
    DataStruct_Inspc* slave = &thiz->base.super;
    do { //check all slaves in chain for there setter
      //
      //init_Type
      //
      zline = !line + "\n/**Write data to DataStruct. " 
                    + "\n * Note: The Simulink coder cannot decide whether it is a scalar, vector or pointer"
                    + "\n * Therefore all arguments are unique given as address (pointer) "
                    + "\n */"  >>= &cline; os_fwrite(fwr, cline, zline);
      writeStepDataStructRoutineHead(thiz, true, slave, line, fwr);
      zline = !line + ");\n" >>= &cline; os_fwrite(fwr, cline, zline);
      //
      writeStepDataStructRoutineHead(thiz, false, slave, line, fwr);
      zline = !line + ");\n\n" >>= &cline; os_fwrite(fwr, cline, zline);
    } while ((slave = slave->prevChain) != null && slave != &thiz->base.super);

    //
    //write inline of get and set operations
    //
    writeGetDataStructRoutine(thiz, line, fwr);
    //
    writeSetDataStructRoutine(thiz, line, fwr);
    //
    zline = !line + "#endif  //__" + name_ClassJc(&thiz->clazz) + "_h__\n" >>= &cline; os_fwrite(fwr, cline, zline);
    //
    thiz->stateGen = 2;
    os_fclose(fwr); //h-file
    //
    //C-File:
    //
    int zFilepath = strnlen_emC(thiz->filegen.absPath, sizeof(thiz->filegen.absPath));
    thiz->filegen.absPath[zFilepath-1] = 'c';  //.c instead .h
    OS_HandleFile fwr = os_fopenToWrite(thiz->filegen.absPath, false);
    if (!fwr) { 
      thiz->stateGen = 0xe; 
    } else {
      #ifndef __cplusplus
      #error needs C++
      #endif
      //cline = (!line + "#include <" + structName + ".h> \n").getCharsLen(&zline);;
      zline = !line + "//This file is generated by the Sfunction 'step_DataStructMng_Inspc_SfH' in Simulink Runtime. \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "//The source to generate it is programmed in 'emc/source/Inspc/DataStruct_Inspc.c' made by Hartmut Schorrig, Version 2018-11 \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "//The content is controlled by the parameter of the Sfunction in its Simulink environment of the calling model. \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "//Especially the name of the struct is the parameter 'Name Type' in this SFblock. \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "//Do not modify. \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "#include <genSrcInspc/" + structName + ".h> \n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "\n\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "#ifdef __USE_REFLECTION__\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "  #include <genSrcInspc/" + structName + ".crefl>\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "#endif\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "\n\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "void ctor_" + structName + "(" + structName + "_s* thiz) {\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "  STACKTRC_ENTRY(\"ctor_" + structName + "\");\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "    initReflection_ObjectJc(&thiz->base.object, thiz, sizeof(*thiz), &reflection_" + structName + ", 0);\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "  STACKTRC_RETURN;\n" >>= &cline; os_fwrite(fwr, cline, zline);
      zline = !line + "} //ctor_...\n" >>= &cline; os_fwrite(fwr, cline, zline);
      //
      //write step routines for the whole structure
      //
      DataStruct_Inspc* slave = &thiz->base.super;
      do { //check all slaves in chain. If they are not initialized, abort this initialization.
        writeStepDataStructRoutine(thiz, true, slave, line, fwr);
        writeStepDataStructRoutine(thiz, false, slave, line, fwr);
      } while ((slave = slave->prevChain) != null && slave != &thiz->base.super);
      //
      os_fclose(fwr);  //c-file
      //
    }
  }
  STACKTRC_RETURN;
}








