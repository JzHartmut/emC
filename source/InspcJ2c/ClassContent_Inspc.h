/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __InspcJ2c_ClassContent_Inspc_h__
#define __InspcJ2c_ClassContent_Inspc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct AnswerComm_ifc_Inspc_t;
struct ClassContent_Inspc_t;
struct ClassJc_t;
struct FieldJc_t;
struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t;
struct InspcDatagram_InspcDataExchangeAccess_Inspc_t;
struct InspcSetValue_InspcDataExchangeAccess_Inspc_t;
struct Inspcitem_InspcDataExchangeAccess_Inspc_t;
struct MemAccessArrayDebugJc_t;
struct ObjectJc_t;


/* J2C: includes *********************************************************/
#include "InspcJ2c/CmdConsumer_ifc_Inspc.h"  //interface
#include "InspcJ2c/InspcDataExchangeAccess_Inspc.h"  //embedded type in class data
#include "InspcJ2c/InspcDataInfo_Inspc.h"  //embedded type in class data


/*@CLASS_C ClassContent_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct ClassContent_Inspc_t
{ 
  union { ObjectJc object; CmdConsumer_ifc_Inspc_s CmdConsumer_ifc_Inspc;} base; 
  int8 __TEST__[20]; 
  struct ObjectJc_t* rootObj;   /*The Object from which the user-given path starts to search. */
  struct AnswerComm_ifc_Inspc_t* answerComm;   /*Association to produce the answer of a request. It is possible to send more as one answer telegram. */
  struct MemAccessArrayDebugJc_t* debugRemoteAccess;   /*Yet only a placeholder, used in the C-implementation. */
  Inspcitem_InspcDataExchangeAccess_Inspc_s answerItem;   /*A debug helper to visit the search activity on access to any reflection element. */
  struct { StringBufferJc sb;  char _b[60]; }uArray;   /*Buffer to prepare a array information in the answer of a telegram. */
  struct { StringBufferJc sb;  char _b[156]; }uValue;   /*Buffer to prepare the value in the answer of a telegram. */
  struct { StringBufferJc sb;  char _b[196]; }uAnswer;   /*Buffer to prepare the answer in the answer of a telegram. */
  InspcDataInfo_Inspc_s test;   /*java2c=simpleRef. */
  struct handles_Y { ObjectArrayJc head; InspcDataInfo_Inspc_s data[1024]; }handles;   /*Array of registered data access info items. */
} ClassContent_Inspc_s;
  

#define sizeof_ClassContent_Inspc_s sizeof(ClassContent_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef ClassContent_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ClassContent_InspcREFDEF
  struct ClassContent_Inspc_t;
  typedef TYPE_EnhancedRefJc(ClassContent_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct ClassContent_Inspc_X_t { ObjectArrayJc head; ClassContent_InspcREF data[50]; } ClassContent_Inspc_X;
typedef struct ClassContent_Inspc_Y_t { ObjectArrayJc head; ClassContent_Inspc_s data[50]; } ClassContent_Inspc_Y;

 extern_C struct ClassJc_t const reflection_ClassContent_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_ClassContent_Inspc(OBJP) { CONST_ObjectJc(sizeof(ClassContent_Inspc_s), OBJP, &reflection_ClassContent_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_ClassContent_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc version_ClassContent_Inspc;   /*Version, history and license.*/

//!!usage: static init code, invoke that one time in start of main.
void initStatic_ClassContent_Inspc();




METHOD_C struct ClassContent_Inspc_t* ctorO_ClassContent_Inspc(ObjectJc* othis, ThCxt* _thCxt);

/**Sets the Object which is the root for all data.
*/
METHOD_C void setRootObject_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct ObjectJc_t* rootObj, ThCxt* _thCxt);

/**sets all aggregations which are unknown on constuctor. */
METHOD_C void setAnswerComm_XX_ClassContent_Inspc(ObjectJc* ithis, struct AnswerComm_ifc_Inspc_t* answerComm, ThCxt* _thCxt);

METHOD_C int32 executeMonitorCmd_XXXXi_ClassContent_Inspc(ObjectJc* ithis, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

/**The information doesn't fit in the datagram: Send the last one and clear it. 
*/
METHOD_C void txAnswerAndPrepareNewTelg_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, ThCxt* _thCxt);

METHOD_C int32 cmdGetFields_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

METHOD_C void evaluateFieldGetFields_XXFdii_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, struct FieldJc_t const* field, int32 orderNr, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

METHOD_C void evaluateFieldGetFields_XXSFdiiii_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, StringJc name, struct ClassJc_t const* typeField, int32 modifiers, int32 staticArraySize, int32 orderNr, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

METHOD_C int32 cmdGetValueByPath_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, ThCxt* _thCxt);

METHOD_C int32 cmdSetValueByPath_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, ThCxt* _thCxt);

/**Gets or sets a value by given path of reflection.
Combination of get and set value by path. Both requests answers the current value. Therefore the functionality is similar.

*/
METHOD_C void getSetValueByPath_ClassContent_Inspc(ClassContent_Inspc_s* thiz, int32 nOrderNr, StringJc sVariablePath, struct InspcSetValue_InspcDataExchangeAccess_Inspc_t* accSetValue, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem, ThCxt* _thCxt);

/**Sets the value if accSetValue is not null, fills the {@link #answerItem} with the read value.
Fills with or without type byte.
*/
METHOD_C int16 getSetValue_ClassContent_Inspc(/*J2C:static method*/ struct FieldJc_t const* theField, int32 idx, MemSegmJc theObject, struct InspcSetValue_InspcDataExchangeAccess_Inspc_t* accSetValue, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem, bool bStoreTypeInAnswer, ThCxt* _thCxt);

METHOD_C int32 cmdGetAddressByPath_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

METHOD_C int32 cmdRegisterRepeat_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

/**Registers a path for repeated access
*/
METHOD_C int32 registerHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, StringJc sVariablePath, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem, ThCxt* _thCxt);

METHOD_C void addAnswerItemValueByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, int32 sizeExpected, ThCxt* _thCxt);

METHOD_C void completeAnswerItemByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, int32 indexTo, int32 nOrderNr, ThCxt* _thCxt);

METHOD_C int32 cmdGetValueByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

/**Gets a value which is registered before by {@link #registerHandle(String, org.vishia.communication.InspcDataExchangeAccess.Inspcitem)}
This is the core routine for {@link #cmdGetValueByHandle(org.vishia.communication.InspcDataExchangeAccess.Inspcitem, org.vishia.communication.InspcDataExchangeAccess.InspcDatagram, int)}
which needs writing to the answer datagram. If this routine is used directly, inside this target, this routine can be used
with following pattern: <pre>
byte[] answerBuffer = new byte[20]; //buffer for the answer
InspcDataExchangeAccess.Inspcitem answItem = new InspcDataExchangeAccess.Inspcitem();
answItem.assignClear(answerBuffer);
short type = inspector.classContent.getValueByHandle(handle, answItem);
//The result is written to the answerBuffer, the answItem is the helper only.
answItem.assign(answerBuffer); //assign newly but yet to read the content.
int value = InspcDataExchangeAccess.getIntChild(type, answItem);
</pre>
See {@link #getFloatValueByHandle(int)}, {@link #getIntValueByHandle(int)} which uses this routine.

*/
METHOD_C int16 getValueByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, int32 handle, struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 index, int32 nOrderNr, ThCxt* _thCxt);

/**Gets the value described by this handle as float value. This method is offered to get a value by an internal
access via reflection.
*/
METHOD_C float getFloatValueByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, int32 handle, ThCxt* _thCxt);

/**Gets the value described by this handle as int32 value. This method is offered to get a value by an internal
access via reflection.
*/
METHOD_C int32 getIntValueByHandle_ClassContent_Inspc(ClassContent_Inspc_s* thiz, int32 handle, ThCxt* _thCxt);

/**Converts the given Field of Reflection to the type byte.
*/
METHOD_C int16 getTypeFromField_ClassContent_Inspc(/*J2C:static method*/ struct FieldJc_t const* theField, ThCxt* _thCxt);

METHOD_C void stop_ClassContent_Inspc(ClassContent_Inspc_s* thiz, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_ClassContent_Inspc[]; //marker for methodTable check
typedef struct Mtbl_ClassContent_Inspc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_CmdConsumer_ifc_Inspc CmdConsumer_ifc_Inspc;
} Mtbl_ClassContent_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class ClassContent_Inspc : private ClassContent_Inspc_s
{ public:

  void addAnswerItemValueByHandle(struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, int32 sizeExpected){ addAnswerItemValueByHandle_ClassContent_Inspc(this, answer, answItem, sizeExpected,  null/*_thCxt*/); }

  int32 cmdGetAddressByPath(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes){  return cmdGetAddressByPath_ClassContent_Inspc(this, cmd, answer, maxNrofAnswerBytes,  null/*_thCxt*/); }

  int32 cmdGetFields(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes){  return cmdGetFields_ClassContent_Inspc(this, cmd, answer, maxNrofAnswerBytes,  null/*_thCxt*/); }

  int32 cmdGetValueByHandle(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes){  return cmdGetValueByHandle_ClassContent_Inspc(this, cmd, answer, maxNrofAnswerBytes,  null/*_thCxt*/); }

  int32 cmdGetValueByPath(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer){  return cmdGetValueByPath_ClassContent_Inspc(this, cmd, answer,  null/*_thCxt*/); }

  int32 cmdRegisterRepeat(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes){  return cmdRegisterRepeat_ClassContent_Inspc(this, cmd, answer, maxNrofAnswerBytes,  null/*_thCxt*/); }

  int32 cmdSetValueByPath(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer){  return cmdSetValueByPath_ClassContent_Inspc(this, cmd, answer,  null/*_thCxt*/); }

  void completeAnswerItemByHandle(struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, int32 indexTo, int32 nOrderNr){ completeAnswerItemByHandle_ClassContent_Inspc(this, answItem, indexTo, nOrderNr,  null/*_thCxt*/); }

  ClassContent_Inspc(){ init_ObjectJc(&this->base.object, sizeof(ClassContent_Inspc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_ClassContent_Inspc_s, 0); ctorO_ClassContent_Inspc(&this->base.object,  null/*_thCxt*/); }

  void evaluateFieldGetFields(struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, struct FieldJc_t const* field, int32 orderNr, int32 maxNrofAnswerBytes){ evaluateFieldGetFields_XXFdii_ClassContent_Inspc(this, answer, field, orderNr, maxNrofAnswerBytes,  null/*_thCxt*/); }

  void evaluateFieldGetFields(struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, StringJcpp name, struct ClassJc_t const* typeField, int32 modifiers, int32 staticArraySize, int32 orderNr, int32 maxNrofAnswerBytes){ evaluateFieldGetFields_XXSFdiiii_ClassContent_Inspc(this, answer, name, typeField, modifiers, staticArraySize, orderNr, maxNrofAnswerBytes,  null/*_thCxt*/); }

  int32 executeMonitorCmd(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes){  return executeMonitorCmd_XXXXi_ClassContent_Inspc(&this->base.CmdConsumer_ifc_Inspc.base.object, cmd, answer, maxNrofAnswerBytes,  null/*_thCxt*/); }

  float getFloatValueByHandle(int32 handle){  return getFloatValueByHandle_ClassContent_Inspc(this, handle,  null/*_thCxt*/); }

  int32 getIntValueByHandle(int32 handle){  return getIntValueByHandle_ClassContent_Inspc(this, handle,  null/*_thCxt*/); }

  void getSetValueByPath(int32 nOrderNr, StringJcpp sVariablePath, struct InspcSetValue_InspcDataExchangeAccess_Inspc_t* accSetValue, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem){ getSetValueByPath_ClassContent_Inspc(this, nOrderNr, sVariablePath, accSetValue, answerItem,  null/*_thCxt*/); }

  int16 getSetValue(struct FieldJc_t const* theField, int32 idx, MemSegmJc theObject, struct InspcSetValue_InspcDataExchangeAccess_Inspc_t* accSetValue, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem, bool bStoreTypeInAnswer){  return getSetValue_ClassContent_Inspc(theField, idx, theObject, accSetValue, answerItem, bStoreTypeInAnswer,  null/*_thCxt*/); }

  int16 getTypeFromField(struct FieldJc_t const* theField){  return getTypeFromField_ClassContent_Inspc(theField,  null/*_thCxt*/); }

  int16 getValueByHandle(int32 handle, struct InspcAnswerValueByHandle_InspcDataExchangeAccess_Inspc_t* answItem, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 index, int32 nOrderNr){  return getValueByHandle_ClassContent_Inspc(this, handle, answItem, answer, index, nOrderNr,  null/*_thCxt*/); }

  int32 registerHandle(StringJcpp sVariablePath, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* answerItem){  return registerHandle_ClassContent_Inspc(this, sVariablePath, answerItem,  null/*_thCxt*/); }

  void setAnswerComm(struct AnswerComm_ifc_Inspc_t* answerComm){ setAnswerComm_XX_ClassContent_Inspc(&this->base.CmdConsumer_ifc_Inspc.base.object, answerComm,  null/*_thCxt*/); }

  void setRootObject(struct ObjectJc_t* rootObj){ setRootObject_ClassContent_Inspc(this, rootObj,  null/*_thCxt*/); }

  void stop(){ stop_ClassContent_Inspc(this,  null/*_thCxt*/); }

  void txAnswerAndPrepareNewTelg(struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer){ txAnswerAndPrepareNewTelg_ClassContent_Inspc(this, answer,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__InspcJ2c_ClassContent_Inspc_h__
