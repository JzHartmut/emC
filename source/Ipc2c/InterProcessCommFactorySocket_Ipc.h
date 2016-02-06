/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __Ipc2c_InterProcessCommFactorySocket_Ipc_h__
#define __Ipc2c_InterProcessCommFactorySocket_Ipc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct Address_InterProcessComm_t;
struct InterProcessComm_t;
struct InterProcessCommFactorySocket_Ipc_t;


/* J2C: includes *********************************************************/
#include "Ipc/InterProcessComm.h"  //superclass


/*@CLASS_C InterProcessCommFactorySocket_Ipc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct InterProcessCommFactorySocket_Ipc_t
{ 
  union { InterProcessCommFactory_i super;} base; 
} InterProcessCommFactorySocket_Ipc_s;
  

#define sizeof_InterProcessCommFactorySocket_Ipc_s sizeof(InterProcessCommFactorySocket_Ipc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef InterProcessCommFactorySocket_IpcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define InterProcessCommFactorySocket_IpcREFDEF
  struct InterProcessCommFactorySocket_Ipc_t;
  DEFINE_EnhancedRefJc(InterProcessCommFactorySocket_Ipc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct InterProcessCommFactorySocket_Ipc_X_t { ObjectArrayJc head; InterProcessCommFactorySocket_IpcREF data[50]; } InterProcessCommFactorySocket_Ipc_X;
typedef struct InterProcessCommFactorySocket_Ipc_Y_t { ObjectArrayJc head; InterProcessCommFactorySocket_Ipc_s data[50]; } InterProcessCommFactorySocket_Ipc_Y;

 extern_C struct ClassJc_t const reflection_InterProcessCommFactorySocket_Ipc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_InterProcessCommFactorySocket_Ipc(OBJP) { CONST_ObjectJc(sizeof(InterProcessCommFactorySocket_Ipc_s), OBJP, &reflection_InterProcessCommFactorySocket_Ipc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_InterProcessCommFactorySocket_Ipc_F(InterProcessCommFactorySocket_Ipc_s* thiz, ThCxt* _thCxt);




METHOD_C struct InterProcessCommFactorySocket_Ipc_t* ctorM_InterProcessCommFactorySocket_Ipc(MemC mthis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C struct InterProcessComm_t* create_S_InterProcessCommFactorySocket_Ipc_F(ObjectJc* ithis, StringJc protocolAndOwnAddr, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C struct InterProcessComm_t* create_S_InterProcessCommFactorySocket_Ipc(ObjectJc* ithis, StringJc protocolAndOwnAddr, ThCxt* _thCxt);

/**Creates a InterProcessComm from a parameter String*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C struct InterProcessComm_t* create_Si_InterProcessCommFactorySocket_Ipc_F(ObjectJc* ithis, StringJc protocolAndOwnAddr, int32 nPort, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C struct InterProcessComm_t* create_Si_InterProcessCommFactorySocket_Ipc(ObjectJc* ithis, StringJc protocolAndOwnAddr, int32 nPort, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C struct InterProcessComm_t* create_AddrIpc_InterProcessCommFactorySocket_Ipc_F(ObjectJc* ithis, struct Address_InterProcessComm_t* addr, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C struct InterProcessComm_t* create_AddrIpc_InterProcessCommFactorySocket_Ipc(ObjectJc* ithis, struct Address_InterProcessComm_t* addr, ThCxt* _thCxt);

/**Creates an address information for the InterProcessComm from a parameter String.*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C struct Address_InterProcessComm_t* createAddress_Si_InterProcessCommFactorySocket_Ipc_F(ObjectJc* ithis, StringJc protocolAndOwnAddr, int32 nPort, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C struct Address_InterProcessComm_t* createAddress_Si_InterProcessCommFactorySocket_Ipc(ObjectJc* ithis, StringJc protocolAndOwnAddr, int32 nPort, ThCxt* _thCxt);

/**Creates an address for InterProcesscommunication with given description.*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C struct Address_InterProcessComm_t* createAddress_S_InterProcessCommFactorySocket_Ipc_F(ObjectJc* ithis, StringJc protocolAndAddr, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C struct Address_InterProcessComm_t* createAddress_S_InterProcessCommFactorySocket_Ipc(ObjectJc* ithis, StringJc protocolAndAddr, ThCxt* _thCxt);

METHOD_C struct Address_InterProcessComm_t* createAddressSocket_InterProcessCommFactorySocket_Ipc(/*static*/ StringJc type, StringJc addr, int32 nPort, ThCxt* _thCxt);


#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class InterProcessCommFactorySocket_Ipc : private InterProcessCommFactorySocket_Ipc_s
{ public:

  struct Address_InterProcessComm_t* createAddressSocket(StringJcpp type, StringJcpp addr, int32 nPort){  return createAddressSocket_InterProcessCommFactorySocket_Ipc(type, addr, nPort,  null/*_thCxt*/); }

  virtual struct Address_InterProcessComm_t* createAddress(StringJcpp protocolAndAddr){  return createAddress_S_InterProcessCommFactorySocket_Ipc_F(&this->base.super.base.object, protocolAndAddr,  null/*_thCxt*/); }

  virtual struct Address_InterProcessComm_t* createAddress(StringJcpp protocolAndOwnAddr, int32 nPort){  return createAddress_Si_InterProcessCommFactorySocket_Ipc_F(&this->base.super.base.object, protocolAndOwnAddr, nPort,  null/*_thCxt*/); }

  virtual struct InterProcessComm_t* create(struct Address_InterProcessComm_t* addr){  return create_AddrIpc_InterProcessCommFactorySocket_Ipc_F(&this->base.super.base.object, addr,  null/*_thCxt*/); }

  virtual struct InterProcessComm_t* create(StringJcpp protocolAndOwnAddr){  return create_S_InterProcessCommFactorySocket_Ipc_F(&this->base.super.base.object, protocolAndOwnAddr,  null/*_thCxt*/); }

  virtual struct InterProcessComm_t* create(StringJcpp protocolAndOwnAddr, int32 nPort){  return create_Si_InterProcessCommFactorySocket_Ipc_F(&this->base.super.base.object, protocolAndOwnAddr, nPort,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__Ipc2c_InterProcessCommFactorySocket_Ipc_h__
