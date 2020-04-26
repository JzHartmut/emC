/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __Ipc2c_InterProcessCommRx_ifc_Ipc_h__
#define __Ipc2c_InterProcessCommRx_ifc_Ipc_h__

#include "emC/Base/MemC_emC.h"        //basic concept

#include "emC/Jc/ObjectJc.h"        //basic concept

#include "emC/Jc/StringJc.h"        //used often

   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct Address_InterProcessComm_t;
struct InterProcessCommRx_ifc_Ipc_t;
struct ObjectJc_t;


/* J2C: includes *********************************************************/


/*@CLASS_C InterProcessCommRx_ifc_Ipc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct InterProcessCommRx_ifc_Ipc_t
{ 
  union { ObjectJc object; } base; 
  struct ObjectJc_t* data;   /*This data pointer can be set by any application. It is offered to the {@link #execRxData(byte[], int)}*/
} InterProcessCommRx_ifc_Ipc_s;
  

#define sizeof_InterProcessCommRx_ifc_Ipc_s sizeof(InterProcessCommRx_ifc_Ipc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef InterProcessCommRx_ifc_IpcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define InterProcessCommRx_ifc_IpcREFDEF
  struct InterProcessCommRx_ifc_Ipc_t;
  typedef TYPE_EnhancedRefJc(InterProcessCommRx_ifc_Ipc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct InterProcessCommRx_ifc_Ipc_X_t { ObjectArrayJc head; InterProcessCommRx_ifc_IpcREF data[50]; } InterProcessCommRx_ifc_Ipc_X;
typedef struct InterProcessCommRx_ifc_Ipc_Y_t { ObjectArrayJc head; InterProcessCommRx_ifc_Ipc_s data[50]; } InterProcessCommRx_ifc_Ipc_Y;

 extern_C struct ClassJc_t const refl_InterProcessCommRx_ifc_Ipc;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_InterProcessCommRx_ifc_Ipc(OBJP) { CONST_ObjectJc(sizeof(InterProcessCommRx_ifc_Ipc_s), OBJP, &refl_InterProcessCommRx_ifc_Ipc), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_InterProcessCommRx_ifc_Ipc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc version_InterProcessCommRx_ifc_Ipc;   /*Version, history and license.*/

//!!usage: static init code, invoke that one time in start of main.
void initStatic_InterProcessCommRx_ifc_Ipc();




/**Default constructor. */
METHOD_C struct InterProcessCommRx_ifc_Ipc_t* ctorO_InterProcessCommRx_ifc_Ipc(ObjectJc* othis, ThCxt* _thCxt);

/**Callback routine for received data.
*/
typedef void MT_execRxData_InterProcessCommRx_ifc_Ipc(InterProcessCommRx_ifc_Ipc_s* thiz, int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void execRxData_InterProcessCommRx_ifc_Ipc_F(InterProcessCommRx_ifc_Ipc_s* thiz, int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void execRxData_InterProcessCommRx_ifc_Ipc(InterProcessCommRx_ifc_Ipc_s* thiz, int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Vtbl_InterProcessCommRx_ifc_Ipc[]; //marker for methodTable check
typedef struct Vtbl_InterProcessCommRx_ifc_Ipc_t
{ VtblHeadJc head;
  MT_execRxData_InterProcessCommRx_ifc_Ipc* execRxData;
  Vtbl_ObjectJc ObjectJc;
} Vtbl_InterProcessCommRx_ifc_Ipc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class InterProcessCommRx_ifc_Ipc : private InterProcessCommRx_ifc_Ipc_s
{ public:

  InterProcessCommRx_ifc_Ipc(){ init_ObjectJc(&this->base.object, this, sizeof(InterProcessCommRx_ifc_Ipc_s), null, 0); setReflection_ObjectJc(&this->base.object, &refl_InterProcessCommRx_ifc_Ipc, 0); ctorO_InterProcessCommRx_ifc_Ipc(&this->base.object,  null/*_thCxt*/); }

  virtual void execRxData(int8ARRAY buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender){ execRxData_InterProcessCommRx_ifc_Ipc_F(this, buffer, nrofBytesReceived, sender,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__Ipc2c_InterProcessCommRx_ifc_Ipc_h__
