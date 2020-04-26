/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __Ipc2c_InterProcessCommRxExec_Ipc_h__
#define __Ipc2c_InterProcessCommRxExec_Ipc_h__

#include "emC/Base/MemC_emC.h"        //basic concept

#include "emC/Jc/ObjectJc.h"        //basic concept

#include "emC/Jc/StringJc.h"        //used often

   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct Address_InterProcessComm_t;
struct InterProcessCommRxExec_Ipc_t;


/* J2C: includes *********************************************************/
#include "emC/Ipc2c/InterProcessCommRx_ifc_Ipc.h"  //superclass


/*@CLASS_C InterProcessCommRxExec_Ipc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct InterProcessCommRxExec_Ipc_t
{ 
  union { ObjectJc object; InterProcessCommRx_ifc_Ipc_s super;} base; 
} InterProcessCommRxExec_Ipc_s;
  

#define sizeof_InterProcessCommRxExec_Ipc_s sizeof(InterProcessCommRxExec_Ipc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef InterProcessCommRxExec_IpcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define InterProcessCommRxExec_IpcREFDEF
  struct InterProcessCommRxExec_Ipc_t;
  typedef TYPE_EnhancedRefJc(InterProcessCommRxExec_Ipc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct InterProcessCommRxExec_Ipc_X_t { ObjectArrayJc head; InterProcessCommRxExec_IpcREF data[50]; } InterProcessCommRxExec_Ipc_X;
typedef struct InterProcessCommRxExec_Ipc_Y_t { ObjectArrayJc head; InterProcessCommRxExec_Ipc_s data[50]; } InterProcessCommRxExec_Ipc_Y;

 extern_C struct ClassJc_t const refl_InterProcessCommRxExec_Ipc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_InterProcessCommRxExec_Ipc(OBJP) { CONST_ObjectJc(sizeof(InterProcessCommRxExec_Ipc_s), OBJP, &refl_InterProcessCommRxExec_Ipc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_InterProcessCommRxExec_Ipc_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct InterProcessCommRxExec_Ipc_t* ctorO_InterProcessCommRxExec_Ipc(ObjectJc* othis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void execRxData_iYiAddrIpc_InterProcessCommRxExec_Ipc_F(InterProcessCommRx_ifc_Ipc_s* ithis, int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void execRxData_iYiAddrIpc_InterProcessCommRxExec_Ipc(InterProcessCommRx_ifc_Ipc_s* ithis, int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Vtbl_InterProcessCommRxExec_Ipc[]; //marker for methodTable check
typedef struct Vtbl_InterProcessCommRxExec_Ipc_t
{ VtblHeadJc head;
  Vtbl_InterProcessCommRx_ifc_Ipc InterProcessCommRx_ifc_Ipc;
} Vtbl_InterProcessCommRxExec_Ipc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class InterProcessCommRxExec_Ipc : private InterProcessCommRxExec_Ipc_s
{ public:

  InterProcessCommRxExec_Ipc(){ iniz_ObjectJc(&this->base.object, this, sizeof(InterProcessCommRxExec_Ipc_s), null, 0); setReflection_ObjectJc(&this->base.object, &refl_InterProcessCommRxExec_Ipc_s, 0); ctorO_InterProcessCommRxExec_Ipc(&this->base.object,  null/*_thCxt*/); }

  virtual void execRxData(int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender){ execRxData_iYiAddrIpc_InterProcessCommRxExec_Ipc_F(&this->base.super, buffer, nrofBytesReceived, sender,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__Ipc2c_InterProcessCommRxExec_Ipc_h__
