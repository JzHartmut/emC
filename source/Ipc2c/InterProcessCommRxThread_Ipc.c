/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "Ipc2c/InterProcessCommRxThread_Ipc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
  //reference-association: ExceptionJc
#include "Ipc/InterProcessComm.h"  //reference-association: InterProcessCommFactory_s
#include "Ipc2c/InterProcessCommRx_ifc_Ipc.h"  //reference-association: execRxDataMtbl
#include "Jc/AssertJc.h"  //reference-association: AssertJc_s
#include "Jc/PrintStreamJc.h"  //reference-association: out
#include "Jc/StringJc.h"  //embedded type in class data
#include "Jc/SystemJc.h"  //reference-association: SystemJc


/* J2C: Forward declaration of struct ***********************************************/


/* J2C: Method-table-references *********************************************************/
#ifndef InterProcessCommMTBDEF
  #define InterProcessCommMTBDEF
  typedef struct InterProcessCommMTB_t { struct Mtbl_InterProcessComm_t const* mtbl; struct InterProcessComm_t* ref; } InterProcessCommMTB;
#endif

#ifndef InterProcessCommFactoryMTBDEF
  #define InterProcessCommFactoryMTBDEF
  typedef struct InterProcessCommFactoryMTB_t { struct Mtbl_InterProcessCommFactory_t const* mtbl; struct InterProcessCommFactory_t* ref; } InterProcessCommFactoryMTB;
#endif

#ifndef InterProcessCommRx_ifc_IpcMTBDEF
  #define InterProcessCommRx_ifc_IpcMTBDEF
  typedef struct InterProcessCommRx_ifc_IpcMTB_t { struct Mtbl_InterProcessCommRx_ifc_Ipc_t const* mtbl; struct InterProcessCommRx_ifc_Ipc_t* ref; } InterProcessCommRx_ifc_IpcMTB;
#endif


/**This class provides a bundle with an InterProcessCommuniation and a receive thread.
On received telegrams it invokes the {@link InterProcessCommRx_ifc#execRxData(byte[], int, Address_InterProcessComm)}
which's instance should be given by construction.
<ul>
<li>Use the static method {@link #create(String, InterProcessCommRx_ifc)} or the constructor to create the instance
with the given receive port and the given callback on received data.
<li>Invoke {@link #start()} to open the communication and start the receive thread. It returns false on failures, true on success.
<li>Invoke {@link #shutdown()} to close and finish the receive thread. 
<li>Use {@link #createDstAddr(String)} to create a destination address for the given InterProcessComm for sending activities.
<li>Use {@link #send(byte[], int, Address_InterProcessComm)} to send.  
</ul>

@author Hartmut Schorrig



*/


const char sign_Mtbl_InterProcessCommRxThread_Ipc[] = "InterProcessCommRxThread_Ipc"; //to mark method tables of all implementations

typedef struct MtblDef_InterProcessCommRxThread_Ipc_t { Mtbl_InterProcessCommRxThread_Ipc mtbl; MtblHeadJc end; } MtblDef_InterProcessCommRxThread_Ipc;
 extern MtblDef_InterProcessCommRxThread_Ipc const mtblInterProcessCommRxThread_Ipc;
StringJc version_InterProcessCommRxThread_Ipc = CONST_z_StringJc("2015-06-13"); //J2C:static StringJc

/*Constructor */
struct InterProcessCommRxThread_Ipc_t* ctorO_InterProcessCommRxThread_Ipc(ObjectJc* othis, StringJc ownAddrIpc, struct InterProcessCommRx_ifc_Ipc_t* execRxData, ThCxt* _thCxt)
{ InterProcessCommRxThread_Ipc_s* thiz = (InterProcessCommRxThread_Ipc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_InterProcessCommRxThread_Ipc");
  checkConsistence_ObjectJc(othis, sizeof(InterProcessCommRxThread_Ipc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_InterProcessCommRxThread_Ipc, sizeof(InterProcessCommRxThread_Ipc_s));  
  //j2c: Initialize all class variables:
  {
    init0_MemC(build_MemC(&thiz->nrofBytesReceived, 1 * sizeof(int32))); //J2C: init the embedded simple array;
    init0_MemC(build_MemC(&thiz->data_rxBuffer, 1500 * sizeof(int8))); //J2C: init the embedded simple array;
    thiz->rxBuffer.ref = & thiz->data_rxBuffer[0]; thiz->rxBuffer.val = sizeof( thiz->data_rxBuffer) / sizeof(thiz->data_rxBuffer[0]);
    //J2C: constructor for embedded element-ObjectJc
      init_ObjectJc(&(thiz->threadRoutine.base.object), sizeof(thiz->threadRoutine), 0); 
      ctorO_C_threadRoutine_InterProcessCommRxThread_Ipc(thiz, &(thiz->threadRoutine.base.object), _thCxt);
  }
  { 
    ObjectJc *newObj2_1=null; /*J2C: temporary Objects for new operations
    */
    thiz->execRxData = execRxData;
    
    InterProcessCommFactoryMTB ipcFactory ; SETMTBJc(ipcFactory, getInstance_InterProcessCommFactory(), InterProcessCommFactory);
    
    if(ipcFactory.ref !=null) {
      InterProcessCommMTB ipcMtbl ; SETMTBJc(ipcMtbl, ipcFactory.mtbl->create( (ipcFactory.ref), ownAddrIpc, _thCxt), InterProcessComm);
      thiz->myAnswerAddress = ipcMtbl.mtbl->createAddressEmpty(&(( (ipcMtbl.ref))->base.object));/*empty address for receiving and send back*/
    
      thiz->thread = ctorO_Runnable_s_ThreadJc(/*J2C:static method call*/(newObj2_1 = alloc_ObjectJc(sizeof_ThreadJc_s, 0, _thCxt)), & ((thiz->threadRoutine).base.RunnableJc), s0_StringJc("IpcRx"), _thCxt);/*set it to class ref.*/
    
      thiz->ipc =  (ipcMtbl.ref);
      activateGC_ObjectJc(newObj2_1, null, _thCxt);
    }
    else {}//no factory.
  }
  STACKTRC_LEAVE;
  return thiz;
}



/**Static method to create invokes the constructor.*/
struct InterProcessCommRxThread_Ipc_t* create_InterProcessCommRxThread_Ipc(/*J2C:static method*/ StringJc ownAddrIpc, struct InterProcessCommRx_ifc_Ipc_t* execRxData, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("create_InterProcessCommRxThread_Ipc");
  
  { 
    ObjectJc *newObj2_1=null; /*J2C: temporary Objects for new operations
    */
    
    struct InterProcessCommRxThread_Ipc_t*  obj = ctorO_InterProcessCommRxThread_Ipc(/*J2C:static method call*/(newObj2_1 = alloc_ObjectJc(sizeof_InterProcessCommRxThread_Ipc_s, 0, _thCxt)), ownAddrIpc, execRxData, _thCxt);
    { STACKTRC_LEAVE;
      activateGC_ObjectJc(newObj2_1, obj, _thCxt);
      return obj;
    }
  }
  STACKTRC_LEAVE;
}


/**Create any destination address for the given InterprocessComm implementation. */
struct Address_InterProcessComm_t* createDstAddr_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, StringJc sAddr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("createDstAddr_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    InterProcessCommMTB mipc ; SETMTBJc(mipc, thiz->ipc, InterProcessComm);
    { STACKTRC_LEAVE;
      return mipc.mtbl->createAddress_s(&(( (mipc.ref))->base.object), sAddr);
    }
  }
  STACKTRC_LEAVE;
}

bool openComm_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, bool blocking, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("openComm_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    int32  ok;/*no initvalue*/
    if(thiz->ipc !=null) {
      InterProcessCommMTB ipcMtbl ; SETMTBJc(ipcMtbl, thiz->ipc, InterProcessComm);
    
      ok = ipcMtbl.mtbl->open(&(( (ipcMtbl.ref))->base.object), null, ((/*J2C:cast% from bool*/int32)(blocking)));
      thiz->state = (ok >= 0 ? 'o' : 'e');
      if(ok < 0 && !thiz->bEnablePrintfOnComm) 
      { 
      
      
        StringJc sError ; sError = z_StringJc(ipcMtbl.mtbl->translateErrorMsg(&(( (ipcMtbl.ref))->base.object), ok))/*J2C:non-persistent*/;
        format_z_PrintStreamJc(REFJc (out_SystemJc), "\nopen fails: error, %d = %s\n", "Is", ok & 0x7fffffff, sError, _thCxt);
      }
    } else {
      ok = -1;  //no communication.
    }
    if(thiz->bEnablePrintfOnComm) 
    { /*:only for debug:*/
      
      
      if(ok >= 0) 
      { 
        
        print_z_PrintStreamJc(REFJc (out_SystemJc), "\nopen RxThread-Communication ok\n", _thCxt);
      }
      else 
      { 
        
        format_z_PrintStreamJc(REFJc (out_SystemJc), "\nopen RxThread-Communication error: %d\n", "I", -ok, _thCxt);
      }
    }
    { STACKTRC_LEAVE;
      return ok >= 0;
    }/*true if InterProcessComm.open() successfully*/
    
  }
  STACKTRC_LEAVE;
}


/**Start opens the InterProcessComm and starts the receiver thread.*/
bool start_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("start_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    bool  bOk = openComm_InterProcessCommRxThread_Ipc(thiz, true, _thCxt);
    if(bOk) 
    { 
      
      start_ThreadJc(thiz->thread, -1, _thCxt);
    }
    { STACKTRC_LEAVE;
      return bOk;
    }
  }
  STACKTRC_LEAVE;
}


/**Send a telegram to the given dst. It delegates to {@link InterProcessComm#send(byte[], int, Address_InterProcessComm)}.*/
int32 send_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, PtrVal_int8 data, int32 nrofBytesToSend, struct Address_InterProcessComm_t* dstAddr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("send_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    InterProcessCommMTB mipc ; SETMTBJc(mipc, thiz->ipc, InterProcessComm);
    { STACKTRC_LEAVE;
      return mipc.mtbl->send(&(( (mipc.ref))->base.object), build_MemC(data.ref, data.val ), nrofBytesToSend, dstAddr);
    }
  }
  STACKTRC_LEAVE;
}

void runThread_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("runThread_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    while(thiz->state != 'x')
      { 
        
        if(thiz->state == 'o') 
        { 
          
          receiveAndExecute_InterProcessCommRxThread_Ipc(thiz, _thCxt);
        }
        else 
        { 
          
          thiz->state = 'E';
          
          while(thiz->state == 'E')
            { 
              
              TRY
              { 
                
                sleep_ThreadJc(/*J2C:static method call*/1000, _thCxt);
              }_TRY
              CATCH(InterruptedException, exc)
              
                { 
                  
                  
                }
              END_TRY/*check state after a waiting time, repeat open.*/
              
            }
        }
      }
    
    synchronized_ObjectJc(& ((* (thiz)).base.object)); {
      
      { 
        
        thiz->state = 'z';
        notify_ObjectJc(& ((* (thiz)).base.object), _thCxt);
      }
    } endSynchronized_ObjectJc(& ((* (thiz)).base.object));
  }
  STACKTRC_LEAVE;
}

void receiveAndExecute_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("receiveAndExecute_InterProcessCommRxThread_Ipc");
  
  { 
    
    
    InterProcessCommRx_ifc_IpcMTB execRxDataMtbl ; SETMTBJc(execRxDataMtbl, thiz->execRxData, InterProcessCommRx_ifc_Ipc);
    
    InterProcessCommMTB ipcMtbl ; SETMTBJc(ipcMtbl, thiz->ipc, InterProcessComm);
    
    while(thiz->state != 'x')
      { /*:x to terminate*/
        /*:chgData_TestData_Inspc(ythis->testInspc);   //only for test.*/
        
        
        thiz->nrofBytesReceived[0] = 0;/*expected the nrof available data*/
        
        thiz->state = 'r';/*receive*/
        
        TRY
        { 
          
          ipcMtbl.mtbl->receiveData(&(( (ipcMtbl.ref))->base.object), &thiz->nrofBytesReceived[0], build_MemC(thiz->rxBuffer.ref, thiz->rxBuffer.val ), thiz->myAnswerAddress);
          if(thiz->state != 'x') 
          { 
            
            if(thiz->nrofBytesReceived[0] < 0) 
            { /*:error situation*/
              /*:it is possible that a send request has failed because the destination port is not*/
              /*:able to reach any more. Therefore wait a moment and listen new*/
              
              
              thiz->state = 'e';/*prevent send*/
              
              TRY
              { 
                
                sleep_ThreadJc(/*J2C:static method call*/50, _thCxt);
              }_TRY
              CATCH(InterruptedException, exc)
              
                { 
                  
                  
                }
              END_TRY
              thiz->state = 'r';/**/
              
            }
            else 
            { 
              
              execRxDataMtbl.mtbl->execRxData( (execRxDataMtbl.ref), thiz->rxBuffer, thiz->nrofBytesReceived[0], thiz->myAnswerAddress, _thCxt);/*unnecessary because usage receiveData: ipcMtbl.freeData(rxBuffer);*/
              
            }
          }
        }_TRY
        CATCH(ExceptionJc, exc)
        
          { 
            
            
            CharSeqJc msg ; msg = exceptionInfo_AssertJc(/*J2C:static method call*/"org.vishia.inspector.Comm - unexpected Exception; ", exc, 0, 7, _thCxt);
            println_c_PrintStreamJc(REFJc (err_SystemJc), msg/*J2C-error testAndChangeAccess: ct*/, _thCxt);
            printStackTrace_P_ExceptionJc(exc, REFJc (err_SystemJc), _thCxt);
          }
        END_TRY
      }/*while state !='x'*/
      
  }
  STACKTRC_LEAVE;
}


/**Shutdown the communication, close the thread. This routine should be called */
void shutdown_InterProcessCommRxThread_Ipc(InterProcessCommRxThread_Ipc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("shutdown_InterProcessCommRxThread_Ipc");
  
  { 
    
    if(thiz->state == 'e') { STACKTRC_LEAVE;
      return;
    }/*nothing to do, error.*/
    
    thiz->state = 'x';
    
    InterProcessCommMTB ipcMtbl ; SETMTBJc(ipcMtbl, thiz->ipc, InterProcessComm);
    ipcMtbl.mtbl->close(&(( (ipcMtbl.ref))->base.object));/*breaks waiting in receive socket*/
    
    
    while(thiz->state != 'z')
      { 
        
        
        synchronized_ObjectJc(& ((* (thiz)).base.object)); {
          
          { 
            
            TRY
            { 
              
              wait_ObjectJc(& ((* (thiz)).base.object), 100, _thCxt);
            }_TRY
            CATCH(InterruptedException, exc)
            
              { 
                
                
              }
            END_TRY
          }
        } endSynchronized_ObjectJc(& ((* (thiz)).base.object));
      }
    TRY
    { 
      
      sleep_ThreadJc(/*J2C:static method call*/1000, _thCxt);/*wait a second.*/
      
    }_TRY
    CATCH(InterruptedException, exc)
    
      { 
        
        
      }
    END_TRY
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_InterProcessCommRxThread_Ipc mtblInterProcessCommRxThread_Ipc = {
{ { sign_Mtbl_InterProcessCommRxThread_Ipc //J2C: Head of methodtable of InterProcessCommRxThread_Ipc
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :ObjectJc:
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_InterProcessCommRxThread_Ipc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_InterProcessCommRxThread_Ipc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_InterProcessCommRxThread_Ipc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_InterProcessCommRxThread_Ipc;
extern_C struct ClassJc_t const reflection_Address_InterProcessComm;
extern_C struct ClassJc_t const reflection_C_threadRoutine_InterProcessCommRxThread_Ipc;
extern_C struct ClassJc_t const reflection_InterProcessCommRx_ifc_Ipc;
extern_C struct ClassJc_t const reflection_InterProcessComm;
extern_C struct ClassJc_t const reflection_StringJc;
extern_C struct ClassJc_t const reflection_ThreadJc;
const struct Reflection_Fields_InterProcessCommRxThread_Ipc
{ ObjectArrayJc head; FieldJc data[12];
} reflection_Fields_InterProcessCommRxThread_Ipc_s =
{ CONST_ObjectArrayJc(FieldJc, 12, OBJTYPE_FieldJc, null, &reflection_Fields_InterProcessCommRxThread_Ipc_s)
, {
     { "execRxData"
    , 0 //nrofArrayElements
    , &reflection_InterProcessCommRx_ifc_Ipc
    , kReference_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->execRxData) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "state"
    , 0 //nrofArrayElements
    , REFLECTION_char
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->state) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "bEnablePrintfOnComm"
    , 0 //nrofArrayElements
    , REFLECTION_bool
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->bEnablePrintfOnComm) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "ipc"
    , 0 //nrofArrayElements
    , &reflection_InterProcessComm
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->ipc) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "ctErrorTelg"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->ctErrorTelg) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "thread"
    , 0 //nrofArrayElements
    , &reflection_ThreadJc
    , kReference_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->thread) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "nrofBytesReceived"
    , 1 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->nrofBytesReceived) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "data_rxBuffer"
    , 1500 //nrofArrayElements
    , REFLECTION_int8
    , 1 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->data_rxBuffer) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "rxBuffer"
    , 0 //nrofArrayElements
    , REFLECTION_int8
    , 1 << kBitPrimitiv_Modifier_reflectJc |kObjectArrayJc_Modifier_reflectJc |kPtrVal_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->rxBuffer) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "myAnswerAddress"
    , 0 //nrofArrayElements
    , &reflection_Address_InterProcessComm
    , kReference_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->myAnswerAddress) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "threadRoutine"
    , 0 //nrofArrayElements
    , &reflection_C_threadRoutine_InterProcessCommRxThread_Ipc
    , kEmbedded_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRxThread_Ipc_s*)(0x1000))->threadRoutine) - (int32)(InterProcessCommRxThread_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRxThread_Ipc
    }
   , { "version"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_InterProcessCommRxThread_Ipc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&version_InterProcessCommRxThread_Ipc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_InterProcessCommRxThread_Ipc
    }
} };
const ClassJc reflection_InterProcessCommRxThread_Ipc = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "InterProcessCommRx_ead_Ipc_s"
,  0 //position of ObjectJc
, sizeof(InterProcessCommRxThread_Ipc_s)
, (FieldJc_Y const*)&reflection_Fields_InterProcessCommRxThread_Ipc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_InterProcessCommRxThread_Ipc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblInterProcessCommRxThread_Ipc.mtbl.head
};


const char sign_Mtbl_C_threadRoutine_InterProcessCommRxThread_Ipc[] = "C_threadRoutine_InterProcessCommRxThread_Ipc"; //to mark method tables of all implementations

typedef struct MtblDef_C_threadRoutine_InterProcessCommRxThread_Ipc_t { Mtbl_C_threadRoutine_InterProcessCommRxThread_Ipc mtbl; MtblHeadJc end; } MtblDef_C_threadRoutine_InterProcessCommRxThread_Ipc;
 extern MtblDef_C_threadRoutine_InterProcessCommRxThread_Ipc const mtblC_threadRoutine_InterProcessCommRxThread_Ipc;
void run_C_threadRoutine_InterProcessCommRxThread_Ipc_F(ObjectJc* ithis, ThCxt* _thCxt)
{ C_threadRoutine_InterProcessCommRxThread_Ipc_s* thiz = (C_threadRoutine_InterProcessCommRxThread_Ipc_s*)ithis;
  
  STACKTRC_TENTRY("run_C_threadRoutine_InterProcessCommRxThread_Ipc_F");
  
  { 
    
    runThread_InterProcessCommRxThread_Ipc((struct InterProcessCommRxThread_Ipc_t * /*J2C chg access*/)(thiz)->outer, _thCxt);
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void run_C_threadRoutine_InterProcessCommRxThread_Ipc(ObjectJc* ithis, ThCxt* _thCxt)
{ Mtbl_RunnableJc const* mtbl = (Mtbl_RunnableJc const*)getMtbl_ObjectJc(ithis, sign_Mtbl_RunnableJc);
  mtbl->run(ithis, _thCxt);
}


/*Constructor *//**J2C: autogenerated as default constructor. */
struct C_threadRoutine_InterProcessCommRxThread_Ipc_t* ctorO_C_threadRoutine_InterProcessCommRxThread_Ipc(struct InterProcessCommRxThread_Ipc_t* outer, ObjectJc* othis, ThCxt* _thCxt)
{ C_threadRoutine_InterProcessCommRxThread_Ipc_s* thiz = (C_threadRoutine_InterProcessCommRxThread_Ipc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_C_threadRoutine_InterProcessCommRxThread_Ipc");
  checkConsistence_ObjectJc(othis, sizeof(C_threadRoutine_InterProcessCommRxThread_Ipc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_C_threadRoutine_InterProcessCommRxThread_Ipc, sizeof(C_threadRoutine_InterProcessCommRxThread_Ipc_s));  
  thiz->outer = outer;
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}




/**J2C: Reflections and Method-table *************************************************/
const MtblDef_C_threadRoutine_InterProcessCommRxThread_Ipc mtblC_threadRoutine_InterProcessCommRxThread_Ipc = {
{ { sign_Mtbl_C_threadRoutine_InterProcessCommRxThread_Ipc //J2C: Head of methodtable of C_threadRoutine_InterProcessCommRxThread_Ipc
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :ObjectJc:
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
  //J2C: The interface's methodtable: 
  //J2C: Mtbl-interfaces of :C_threadRoutine_InterProcessCommRxThread_Ipc: */
, { { sign_Mtbl_RunnableJc //J2C: Head of methodtable of RunnableJc
    , (struct Size_Mtbl_t*)((1 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :RunnableJc:
  , run_C_threadRoutine_InterProcessCommRxThread_Ipc_F //run
    //J2C: The superclass's methodtable: 
  , { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
      , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
      }
      //J2C: Dynamic methods of the class :ObjectJc:
    , clone_ObjectJc_F //clone
    , equals_ObjectJc_F //equals
    , finalize_ObjectJc_F //finalize
    , hashCode_ObjectJc_F //hashCode
    , toString_ObjectJc_F //toString
    }
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_C_threadRoutine_InterProcessCommRxThread_Ipc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_C_threadRoutine_InterProcessCommRxThread_Ipc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_C_threadRoutine_InterProcessCommRxThread_Ipc, ObjectJc) }
   }
 };

 extern_C struct ClassJc_t const reflection_RunnableJc;
 static struct ifcClasses_C_threadRoutine_InterProcessCommRxThread_Ipc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }interfaces_C_threadRoutine_InterProcessCommRxThread_Ipc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
, { {&reflection_RunnableJc, OFFSET_Mtbl(Mtbl_C_threadRoutine_InterProcessCommRxThread_Ipc, RunnableJc) }
  }
};

const ClassJc reflection_C_threadRoutine_InterProcessCommRxThread_Ipc = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "C_threadRoutine_In_ead_Ipc_s"
, (int16)((int32)(&((C_threadRoutine_InterProcessCommRxThread_Ipc_s*)(0x1000))->base.object) - (int32)(C_threadRoutine_InterProcessCommRxThread_Ipc_s*)0x1000)
, sizeof(C_threadRoutine_InterProcessCommRxThread_Ipc_s)
, null //attributes and associations
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_C_threadRoutine_InterProcessCommRxThread_Ipc_s //superclass
, (ClassOffset_idxMtblJcARRAY*)&interfaces_C_threadRoutine_InterProcessCommRxThread_Ipc_s //interfaces
, mObjectJc_Modifier_reflectJc
, &mtblC_threadRoutine_InterProcessCommRxThread_Ipc.mtbl.head
};
