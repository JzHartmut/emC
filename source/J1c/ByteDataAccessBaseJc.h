/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_ByteDataAccessBaseJc_h__
#define __J1c_ByteDataAccessBaseJc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct ByteDataAccessBaseJc_t;
struct CharsetJc_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef ByteDataAccessBaseJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ByteDataAccessBaseJcREFDEF
  struct ByteDataAccessBaseJc_t;
  DEFINE_EnhancedRefJc(ByteDataAccessBaseJc);
#endif


/* J2C: includes *********************************************************/
#include "J1c/InfoFormattedAppendJc.h"  //interface


/*@CLASS_C ByteDataAccessBaseJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct ByteDataAccessBaseJc_t
{ 
  union { InfoFormattedAppendJc_s InfoFormattedAppendJc;} base; 
  int32 sizeHead;   /*Number of Memory locations (usual bytes) for the head of this instance's Type.*/
  PtrVal_int8 data;   /*The array containing the binary data*/
  int32 ixBegin;   /*Index of the beginning of the actual element in data*/
  int32 ixNextChild;   /*Index of the currents child end respectively the position of a new child.*/
  int32 ixEnd;   /*Index of the end of the actual element in data*/
  bool bExpand;   /*True if the {@link #ixEnd} should not be set to the {@link #sizeHead} on removing children. */
  bool bBigEndian;   /*Flag is set or get data in big endian or little endian (if false)*/
  bool bExc;   /*If false then never an exception is thrown, Instead the work is done as soon as possible.*/
  ByteDataAccessBaseJcREF parent;   /*The parent element, necessary especially for expand(), also for {@link #removeChild(ByteDataAccessBase)}*/
  ByteDataAccessBaseJcREF currChild;   /*The last added child, null either if a child is not added or a child was added but the instance is used meanwhile otherwise.*/
  struct CharsetJc_t* charset;   /*The charset to build Strings.*/
} ByteDataAccessBaseJc_s;
  

#define sizeof_ByteDataAccessBaseJc_s sizeof(ByteDataAccessBaseJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef ByteDataAccessBaseJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ByteDataAccessBaseJcREFDEF
  struct ByteDataAccessBaseJc_t;
  DEFINE_EnhancedRefJc(ByteDataAccessBaseJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct ByteDataAccessBaseJc_X_t { ObjectArrayJc head; ByteDataAccessBaseJcREF data[50]; } ByteDataAccessBaseJc_X;
typedef struct ByteDataAccessBaseJc_Y_t { ObjectArrayJc head; ByteDataAccessBaseJc_s data[50]; } ByteDataAccessBaseJc_Y;

 extern_C struct ClassJc_t const reflection_ByteDataAccessBaseJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_ByteDataAccessBaseJc(OBJP) { CONST_ObjectJc(sizeof(ByteDataAccessBaseJc_s), OBJP, &reflection_ByteDataAccessBaseJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_ByteDataAccessBaseJc_F(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);


 extern StringJc version_ByteDataAccessBaseJc;   /*The version, history and license.*/


/**Any instance of ByteDataAccessBase is associated to a determined derived instance which has defined head size.*/
METHOD_C struct ByteDataAccessBaseJc_t* ctorM_i_ByteDataAccessBaseJc(MemC mthis, int32 sizeHead, ThCxt* _thCxt);

/**Constructs a new empty instance with a given head size and a given size for children.*/
METHOD_C struct ByteDataAccessBaseJc_t* ctorM_ii_ByteDataAccessBaseJc(MemC mthis, int32 sizeHead, int32 sizeData, ThCxt* _thCxt);

/**Sets the big or little endian mode.*/
#define setBigEndian_ByteDataAccessBaseJc(THIZ, val) \
\
{ \
  \
  (THIZ)->bBigEndian = val;\
}

/**Sets whether an exception should be thrown on adding a child or it should be return with false to continue*/
#define setException_ByteDataAccessBaseJc(THIZ, val) \
\
{ \
  \
  (THIZ)->bExc = val;\
}

/**Returns the content of 1 to 8 bytes inside the actual element as a long number,*/
METHOD_C int64 _getLong_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxInChild, int32 nrofBytesAndSign, ThCxt* _thCxt);

/**Returns the content of 1 to 4 bytes inside the actual element as a int number,*/
METHOD_C int32 _getInt_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxInChild, int32 nrofBytesAndSign, ThCxt* _thCxt);

/**sets the content of 1 to 8 bytes inside the actual element as a long number,*/
METHOD_C void _setLong_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 nrofBytes, int64 val, ThCxt* _thCxt);

/**sets the content of 1 to 4 bytes inside the actual element as a long number,*/
METHOD_C void _setInt_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 nrofBytes, int32 val, ThCxt* _thCxt);

/**Increments the {@link #ixNextChild} and/or increments the ixEnd of this and all parents.*/
METHOD_C void _expand_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 ixNextChildNew, int32 ixEndNew, ThCxt* _thCxt);

/**Assigns new data to this element at given index in data*/
METHOD_C void assign_iYii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, PtrVal_int8 dataP, int32 lengthData, int32 index, ThCxt* _thCxt);

/**Assigns data with a given length*/
#define assign_iYi_ByteDataAccessBaseJc(THIZ, data, lengthData) \
\
{ \
  \
  assign_iYii_ByteDataAccessBaseJc((THIZ), data, lengthData, 0, _thCxt);\
}

/**Assigns the given data with its given length to read the data.*/
#define assign_iY_ByteDataAccessBaseJc(THIZ, dataP) \
\
{ \
  \
  if(dataP == null) \
  { \
    \
    detach_ByteDataAccessBaseJc((THIZ), _thCxt);\
  }\
  else \
  { \
    \
    assign_iYii_ByteDataAccessBaseJc((THIZ), dataP, dataP.value__, 0, _thCxt);\
  }\
}

/**Initializes a top level instance, the data will be cleared, set to 0, overall.*/
#define assignClear_ByteDataAccessBaseJc(THIZ, data) \
\
{ \
  \
  fillArray_mB_ArraysJc(/*static*/data, (int8)0, _thCxt);\
  assign_iYii_ByteDataAccessBaseJc((THIZ), data, -1, 0, _thCxt);\
}

/**assigns the element to the given position of the parents data to present a child of the parent*/
#define assignAt_iiXX_ByteDataAccessBaseJc(THIZ, idxChildInParent, lengthChild, parent) \
\
{ \
  \
  (THIZ)->bBigEndian = parent->bBigEndian;\
  (THIZ)->bExpand = parent->bExpand;\
  (THIZ)->bExc = parent->bExc;\
  assign_iYii_ByteDataAccessBaseJc((THIZ), parent->data, parent->ixBegin + idxChildInParent + lengthChild, parent->ixBegin + idxChildInParent, _thCxt);\
  setBigEndian_ByteDataAccessBaseJc((THIZ), parent->bBigEndian);\
}

/**assigns the element to the given position of the parents data to present a child of the parent.*/
#define assignAt_iXX_ByteDataAccessBaseJc(THIZ, idxChildInParent, parent) \
\
{ \
  \
  assignAt_iiXX_ByteDataAccessBaseJc((THIZ), idxChildInParent, (THIZ)->sizeHead, parent);\
}

/**Assigns this element to the same position in data, but it is another view.*/
#define assignCasted_ByteDataAccessBaseJc(THIZ, src, offsetCastToInput, lengthDst) \
\
{ \
  \
  assign_iYii_ByteDataAccessBaseJc((THIZ), src->data, src->ixEnd, src->ixBegin + offsetCastToInput, _thCxt);\
  (THIZ)->bExpand = src->bExpand;\
  (THIZ)->bBigEndian = src->bBigEndian;\
  (THIZ)->bExc = src->bExc;\
  if(lengthDst > 0) \
  { \
    \
    setLengthElement_ByteDataAccessBaseJc((THIZ), lengthDst);\
  }/*_expand(lengthDst, lengthDst); //if lengthDst ==0 it does nothing.*/\
  /*lengthDst is unsused, not necessary because lengthElementHead is knwon!*/\
  \
}

/**Returns true if the instance is set as expandable, see {@link #assign(byte[], int)}*/
METHOD_C bool isExpandable_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the given head size, which is set on constructor respectively which is a determined value of an derived instance of this.*/
METHOD_C int32 sizeHead_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the data buffer itself*/
METHOD_C PtrVal_int8 getData_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**starts the calling loop of next().*/
#define XXXrewind_ByteDataAccessBaseJc(THIZ) \
\
{ \
  \
  (THIZ)->ixNextChild = (THIZ)->ixBegin + (THIZ)->sizeHead;\
  if(REFJc((THIZ)->currChild) != null) \
  { \
    \
    detach_ByteDataAccessBaseJc(REFJc((THIZ)->currChild), _thCxt);\
    CLEAR_REFJc((THIZ)->currChild);\
  }\
}

/**Returns the length of the head*/
METHOD_C int32 getLengthHead_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the length of the element with all yet added children.*/
METHOD_C int32 getLengthCurrent_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the length of the existing actual element.*/
METHOD_C int32 getLength_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the length of the data.*/
METHOD_C int32 getLengthTotal_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**returns the number number of bytes there are max available from position of the current child.*/
METHOD_C int32 getMaxNrofBytes_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Checks whether a given size is possible as {@link #setLengthElement(int)} for the given instance.*/
METHOD_C bool checkLengthElement_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 size, ThCxt* _thCxt);

METHOD_C bool getBigEndian_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Sets the length of the element in this and all {@link #parent} of this.*/
#define setLengthElement_ByteDataAccessBaseJc(THIZ, length) \
\
{ \
  \
  (THIZ)->bExpand = false;\
  _expand_ByteDataAccessBaseJc((THIZ), 0, (THIZ)->ixBegin + length, _thCxt);\
}

/**Sets all data of the head of this element to 0.*/
#define clearHead_ByteDataAccessBaseJc(THIZ) \
\
{ \
  \
  fill_mB_ArraysJc(/*static*/(THIZ)->data, (THIZ)->ixBegin, (THIZ)->ixBegin + (THIZ)->sizeHead, (int8)0, _thCxt);\
}

/**Sets all data of this element to 0.*/
#define clearData_ByteDataAccessBaseJc(THIZ) \
\
{ \
  \
  fill_mB_ArraysJc(/*static*/(THIZ)->data, (THIZ)->ixBegin, (THIZ)->ixEnd, (int8)0, _thCxt);\
}

METHOD_C bool isInUse_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**returns true if the given number of bytes is sufficing in the data from position of next child.*/
METHOD_C bool sufficingBytesForNextChild_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, ThCxt* _thCxt);

/**returns the maximal number of bytes which are available from position of a next current child.*/
METHOD_C int32 getMaxNrofBytesForNextChild_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Adds a child Element after the current child or as first child after head.*/
METHOD_C bool addChild_XXi_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* child, int32 sizeChild, ThCxt* _thCxt);

/**Adds a child with its given head size without additional data space.*/
METHOD_C bool addChild_XX_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* child, ThCxt* _thCxt);

METHOD_C bool addChildEmpty_XX_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* child, ThCxt* _thCxt);

METHOD_C bool addChildEmpty_XXi_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* child, int32 sizeChild, ThCxt* _thCxt);

/**Adds a child at any position*/
METHOD_C void addChildAt_iXXi_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxChild, struct ByteDataAccessBaseJc_t* child, int32 sizeChild, ThCxt* _thCxt);

/**Adds a child at any position with its head size.*/
METHOD_C void addChildAt_iXX_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxChild, struct ByteDataAccessBaseJc_t* child, ThCxt* _thCxt);

/**Adds a child for 1 integer value without a child instance, and sets the value as integer.*/
METHOD_C bool addChildInt_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, int32 value, ThCxt* _thCxt);

/**Adds a child for 1 integer value without a child instance, and sets the value as integer.*/
METHOD_C bool addChildInteger_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, int64 value, ThCxt* _thCxt);

/**Adds a child for 1 float value without a child instance, and sets the value as float.*/
METHOD_C bool addChildFloat_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, float value, ThCxt* _thCxt);

/**Adds a child with String value.*/
METHOD_C bool addChildString_SSb_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, StringJc value, StringJc sEncoding, bool preventCtrlChars, ThCxt* _thCxt);

/**Adds a child with String value.*/
METHOD_C bool addChildString_SS_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, StringJc valueCs, StringJc sEncoding, ThCxt* _thCxt);

/**Adds a child with String value.*/
#define addChildString_S_ByteDataAccessBaseJc(THIZ, value) \
\
{ \
  \
  TRY\
  { \
    \
    addChildString_SS_ByteDataAccessBaseJc((THIZ), value, null_StringJc, _thCxt);\
  }_TRY\
  CATCH(UnsupportedEncodingException, exc)\
  \
    { \
      \
      { throw_EJc(ident_RuntimeExceptionJc, exc, 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
    }\
  END_TRY/*it isn't able.*/\
  \
}

/**Adds a child for 1 short value without a child instance, returns the value as short.*/
METHOD_C int16 getChildInt16_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Adds a child for 1 short value without a child instance, returns the value as short.*/
METHOD_C int32 getChildUint16_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Adds a child for 1 short value without a child instance, returns the value as short.*/
METHOD_C int16 getChildUint8_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**adds a child for 1 integer value without a child instance and returns the value as long integer.*/
METHOD_C int64 getChildInteger_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, ThCxt* _thCxt);

/**Adds a child for 1 integer value without a child instance and returns the value as 32-bit-integer.*/
METHOD_C int32 getChildInt_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, ThCxt* _thCxt);

/**Adds a child for 1 float value without a child instance, but returns the value as integer.*/
METHOD_C float getChildFloat_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Adds a child for 1 double value without a child instance, but returns the value as integer.*/
METHOD_C double getChildDouble_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Adds a child for a String value without a child instance, but returns the value as String.*/
METHOD_C StringJc getChildString_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 nrofBytes, ThCxt* _thCxt);

/**Removes the current child to assign another current child instead on the position of the current child.*/
#define removeChild_ByteDataAccessBaseJc(THIZ) \
\
{ \
  \
  if(REFJc((THIZ)->currChild) == null) { throw_s0Jc(ident_IllegalStateExceptionJc, "programming error - a current child is not known yet.", 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  removeChild_XX_ByteDataAccessBaseJc((THIZ), REFJc((THIZ)->currChild), _thCxt);\
}

/**Shorten the evaluated content of the data to the position of the given child*/
METHOD_C void removeChild_XX_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* child, ThCxt* _thCxt);

/**Remove all children*/
#define removeChildren_ByteDataAccessBaseJc(THIZ) \
\
{ \
  \
  if(REFJc((THIZ)->currChild) != null) \
  { \
    \
    detach_ByteDataAccessBaseJc(REFJc((THIZ)->currChild), _thCxt);\
    CLEAR_REFJc((THIZ)->currChild);\
  }\
  (THIZ)->ixNextChild = (THIZ)->ixBegin + (THIZ)->sizeHead;\
  if((THIZ)->bExpand) \
  { \
    \
    (THIZ)->ixEnd = (THIZ)->ixBegin + (THIZ)->sizeHead;/*reset idxEnd only in expand method, let it unchanged in read mode.*/\
    \
  }\
}

/**Remove all connections. Especially for children. */
METHOD_C void detach_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the position of the Element data in the assigned buffer.*/
METHOD_C int32 getPositionInBuffer_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**Returns the position of a next child which can be added in the assigned buffer.*/
METHOD_C int32 getPositionNextChildInBuffer_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

/**copies the data from another references data into this data.*/
METHOD_C void copyDataFrom_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, struct ByteDataAccessBaseJc_t* src, ThCxt* _thCxt);

/**copies some data to a int[], primarily to debug a content.*/
METHOD_C void copyData_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32_Y* dst, ThCxt* _thCxt);

/**Returns a String from the given position inside the actual element .*/
METHOD_C StringJc getString_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 nrofBytes, ThCxt* _thCxt);

/**Sets a String to the the given position inside the actual element .*/
METHOD_C int32 setString_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 nmax, StringJc ss, ThCxt* _thCxt);

/**sets the content inside the actual element with the character bytes from the given String.*/
METHOD_C void _setString_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 nrofBytes, StringJc value, StringJc sEncoding, bool preventCtrlChars, ThCxt* _thCxt);

/**Gets a float value from the content of 4 byte*/
METHOD_C float getFloat_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

METHOD_C double getDouble_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

METHOD_C int64 getInt64_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 4 bytes inside the actual element as a integer number between -2147483648 and 2147483647,*/
METHOD_C int32 getInt32_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

METHOD_C int32 getUint32_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 2 bytes as a positive nr between 0..65535, big-endian*/
METHOD_C int32 getUint16_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 2 bytes as a positive nr between 0..65535 inside the actual element.*/
METHOD_C int16 getInt16_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 1 bytes as ASCII*/
METHOD_C char getChar_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 1 bytes as a positive or negative nr between -128..127*/
METHOD_C int8 getInt8_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

/**Returns the content of 1 bytes as a positive or negative nr between -128..127*/
METHOD_C int16 getUint8_i_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, ThCxt* _thCxt);

METHOD_C int32 getUint32_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C int32 getInt32_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C int32 getInt16_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C int32 getInt8_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C int32 getUint16_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C int32 getUint8_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

METHOD_C float getFloat_iii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idxBytes, int32 idxArray, int32 lengthArray, ThCxt* _thCxt);

/**Set the content of 4 byte from a float variable*/
#define setFloat_if_ByteDataAccessBaseJc(THIZ, idx, value) \
\
{ \
  int32 intRepresentation; \
  \
  \
  intRepresentation = floatToRawIntBits_FloatJc(/*static*/value);\
  _setLong_ByteDataAccessBaseJc((THIZ), idx, 4, intRepresentation, _thCxt);\
}

/**Set the content of 8 byte from a double variable*/
#define setDouble_ByteDataAccessBaseJc(THIZ, idx, value) \
\
{ \
  int64 intRepresentation; \
  \
  \
  intRepresentation = doubleToRawLongBits_DoubleJc(/*static*/value);\
  _setLong_ByteDataAccessBaseJc((THIZ), idx, 8, intRepresentation, _thCxt);\
}

/**Set the content of 4 bytes as a integer number between -2147483648 and 2147483647,*/
METHOD_C void setInt32_ii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 value, ThCxt* _thCxt);

/**Set the content of 1 bytes as a positive nr between 0..256.*/
#define setInt8_ii_ByteDataAccessBaseJc(THIZ, idx, value) \
\
{ \
  \
  (THIZ)->data.ptr__[(THIZ)->ixBegin + idx] = (int8)(value & 0xff);\
}

/**Set the content of 1 bytes as a positive nr between 0..255, big- or little-endian.*/
#define setUint8_ii_ByteDataAccessBaseJc(THIZ, idx, value) \
\
{ \
  \
  setInt8_ii_ByteDataAccessBaseJc((THIZ), idx, value);/*its the same because modulo!*/\
  \
}

/**Set the content of 4 bytes as a positive nr between 0..2pow32-1, big- or little-endian.*/
METHOD_C void setUint32_il_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int64 value, ThCxt* _thCxt);

/**Set the content of 2 bytes from an integer between -32768..32768,*/
METHOD_C void setInt16_ii_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 idx, int32 value, ThCxt* _thCxt);

/**Set the content of 2 bytes as a positive nr between 0..65535, big- or little-endian.*/
#define setUint16_ii_ByteDataAccessBaseJc(THIZ, idx, value) \
\
{ \
  \
  setInt16_ii_ByteDataAccessBaseJc((THIZ), idx, value, _thCxt);/*its the same because modulo!*/\
  \
}

METHOD_C void throwexc_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, StringJc text, int32 idxArray, ThCxt* _thCxt);

#define setUint32_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  \
  if(idxArray >= lengthArray || idxArray < 0) throwexc_ByteDataAccessBaseJc((THIZ), s0_StringJc("setUint32:"), idxArray, _thCxt);\
  setUint32_il_ByteDataAccessBaseJc((THIZ), idxBytes + 4 * idxArray, val, _thCxt);\
}

#define setInt32_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  \
  if(idxArray >= lengthArray || idxArray < 0) throwexc_ByteDataAccessBaseJc((THIZ), s0_StringJc("setInt32:"), idxArray, _thCxt);\
  setInt32_ii_ByteDataAccessBaseJc((THIZ), idxBytes + 4 * idxArray, val, _thCxt);\
}

#define setInt16_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);\
  \
  if(idxArray >= lengthArray || idxArray < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, \
    ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)\
    , append_z_StringBuilderJc(_stringBuilderThCxt, "getInt16:", _thCxt)\
    , append_I_StringBuilderJc(_stringBuilderThCxt, idxArray, _thCxt)\
    , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)\
    ), 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  setInt16_ii_ByteDataAccessBaseJc((THIZ), idxBytes + 2 * idxArray, val, _thCxt);\
}

#define setInt8_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);\
  \
  if(idxArray >= lengthArray || idxArray < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, \
    ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)\
    , append_z_StringBuilderJc(_stringBuilderThCxt, "getInt16:", _thCxt)\
    , append_I_StringBuilderJc(_stringBuilderThCxt, idxArray, _thCxt)\
    , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)\
    ), 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  setInt8_ii_ByteDataAccessBaseJc((THIZ), idxBytes + idxArray, val);\
}

#define setUint16_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);\
  \
  if(idxArray >= lengthArray || idxArray < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, \
    ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)\
    , append_z_StringBuilderJc(_stringBuilderThCxt, "getInt16:", _thCxt)\
    , append_I_StringBuilderJc(_stringBuilderThCxt, idxArray, _thCxt)\
    , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)\
    ), 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  setUint16_ii_ByteDataAccessBaseJc((THIZ), idxBytes + 2 * idxArray, val);\
}

#define setUint8_iiii_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);\
  \
  if(idxArray >= lengthArray || idxArray < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, \
    ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)\
    , append_z_StringBuilderJc(_stringBuilderThCxt, "getInt16:", _thCxt)\
    , append_I_StringBuilderJc(_stringBuilderThCxt, idxArray, _thCxt)\
    , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)\
    ), 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  setUint8_ii_ByteDataAccessBaseJc((THIZ), idxBytes + idxArray, val);\
}

#define setFloat_iiif_ByteDataAccessBaseJc(THIZ, idxBytes, idxArray, lengthArray, val) \
\
{ \
  StringBuilderJc* _stringBuilderThCxt = threadBuffer_StringBuilderJc(_thCxt);\
  \
  if(idxArray >= lengthArray || idxArray < 0) { throw_sJc(ident_IndexOutOfBoundsExceptionJc, \
    ( setLength_StringBuilderJc(_stringBuilderThCxt, 0, _thCxt)\
    , append_z_StringBuilderJc(_stringBuilderThCxt, "getInt16:", _thCxt)\
    , append_I_StringBuilderJc(_stringBuilderThCxt, idxArray, _thCxt)\
    , toString_StringBuilderJc(&(_stringBuilderThCxt)->base.object, _thCxt)\
    ), 0, &_thCxt->stacktraceThreadContext, __LINE__); };\
  setFloat_if_ByteDataAccessBaseJc((THIZ), idxBytes + 4 * idxArray, val);\
}

/**Prepares a new child for this*/
METHOD_C int32 setIdxtoNextCurrentChild_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, int32 sizeChild, ThCxt* _thCxt);

METHOD_C int32 ixBegin_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

METHOD_C int32 ixNextChild_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);

METHOD_C int32 ixEnd_ByteDataAccessBaseJc(ByteDataAccessBaseJc_s* thiz, ThCxt* _thCxt);


#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class ByteDataAccessBaseJc : private ByteDataAccessBaseJc_s
{ public:

  void XXXrewind(){ XXXrewind_ByteDataAccessBaseJc(this); }

  void _expand(int32 ixNextChildNew, int32 ixEndNew){ _expand_ByteDataAccessBaseJc(this, ixNextChildNew, ixEndNew,  null/*_thCxt*/); }

  int32 _getInt(int32 idxInChild, int32 nrofBytesAndSign){  return _getInt_ByteDataAccessBaseJc(this, idxInChild, nrofBytesAndSign,  null/*_thCxt*/); }

  int64 _getLong(int32 idxInChild, int32 nrofBytesAndSign){  return _getLong_ByteDataAccessBaseJc(this, idxInChild, nrofBytesAndSign,  null/*_thCxt*/); }

  void _setInt(int32 idx, int32 nrofBytes, int32 val){ _setInt_ByteDataAccessBaseJc(this, idx, nrofBytes, val,  null/*_thCxt*/); }

  void _setLong(int32 idx, int32 nrofBytes, int64 val){ _setLong_ByteDataAccessBaseJc(this, idx, nrofBytes, val,  null/*_thCxt*/); }

  void _setString(int32 idx, int32 nrofBytes, StringJcpp value, StringJcpp sEncoding, bool preventCtrlChars){ _setString_ByteDataAccessBaseJc(this, idx, nrofBytes, value, sEncoding, preventCtrlChars,  null/*_thCxt*/); }

  void addChildAt(int32 idxChild, struct ByteDataAccessBaseJc_t* child){ addChildAt_iXX_ByteDataAccessBaseJc(this, idxChild, child,  null/*_thCxt*/); }

  void addChildAt(int32 idxChild, struct ByteDataAccessBaseJc_t* child, int32 sizeChild){ addChildAt_iXXi_ByteDataAccessBaseJc(this, idxChild, child, sizeChild,  null/*_thCxt*/); }

  bool addChildEmpty(struct ByteDataAccessBaseJc_t* child){  return addChildEmpty_XX_ByteDataAccessBaseJc(this, child,  null/*_thCxt*/); }

  bool addChildEmpty(struct ByteDataAccessBaseJc_t* child, int32 sizeChild){  return addChildEmpty_XXi_ByteDataAccessBaseJc(this, child, sizeChild,  null/*_thCxt*/); }

  bool addChildFloat(float value){  return addChildFloat_ByteDataAccessBaseJc(this, value,  null/*_thCxt*/); }

  bool addChildInt(int32 nrofBytes, int32 value){  return addChildInt_ByteDataAccessBaseJc(this, nrofBytes, value,  null/*_thCxt*/); }

  bool addChildInteger(int32 nrofBytes, int64 value){  return addChildInteger_ByteDataAccessBaseJc(this, nrofBytes, value,  null/*_thCxt*/); }

  bool addChildString(StringJcpp valueCs, StringJcpp sEncoding){  return addChildString_SS_ByteDataAccessBaseJc(this, valueCs, sEncoding,  null/*_thCxt*/); }

  bool addChildString(StringJcpp value, StringJcpp sEncoding, bool preventCtrlChars){  return addChildString_SSb_ByteDataAccessBaseJc(this, value, sEncoding, preventCtrlChars,  null/*_thCxt*/); }

  void addChildString(StringJcpp value){ addChildString_S_ByteDataAccessBaseJc(this, value); }

  bool addChild(struct ByteDataAccessBaseJc_t* child){  return addChild_XX_ByteDataAccessBaseJc(this, child,  null/*_thCxt*/); }

  bool addChild(struct ByteDataAccessBaseJc_t* child, int32 sizeChild){  return addChild_XXi_ByteDataAccessBaseJc(this, child, sizeChild,  null/*_thCxt*/); }

  void assignAt(int32 idxChildInParent, struct ByteDataAccessBaseJc_t* parent){ assignAt_iXX_ByteDataAccessBaseJc(this, idxChildInParent, parent); }

  void assignAt(int32 idxChildInParent, int32 lengthChild, struct ByteDataAccessBaseJc_t* parent){ assignAt_iiXX_ByteDataAccessBaseJc(this, idxChildInParent, lengthChild, parent); }

  void assignCasted(struct ByteDataAccessBaseJc_t* src, int32 offsetCastToInput, int32 lengthDst){ assignCasted_ByteDataAccessBaseJc(this, src, offsetCastToInput, lengthDst); }

  void assignClear(PtrVal_int8 data){ assignClear_ByteDataAccessBaseJc(this, data); }

  void assign(PtrVal_int8 dataP){ assign_iY_ByteDataAccessBaseJc(this, dataP); }

  void assign(PtrVal_int8 data, int32 lengthData){ assign_iYi_ByteDataAccessBaseJc(this, data, lengthData); }

  void assign(PtrVal_int8 dataP, int32 lengthData, int32 index){ assign_iYii_ByteDataAccessBaseJc(this, dataP, lengthData, index,  null/*_thCxt*/); }

  bool checkLengthElement(int32 size){  return checkLengthElement_ByteDataAccessBaseJc(this, size,  null/*_thCxt*/); }

  void clearData(){ clearData_ByteDataAccessBaseJc(this); }

  void clearHead(){ clearHead_ByteDataAccessBaseJc(this); }

  void copyDataFrom(struct ByteDataAccessBaseJc_t* src){ copyDataFrom_ByteDataAccessBaseJc(this, src,  null/*_thCxt*/); }

  void copyData(int32_Y* dst){ copyData_ByteDataAccessBaseJc(this, dst,  null/*_thCxt*/); }

  void detach(){ detach_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  bool getBigEndian(){  return getBigEndian_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  char getChar(int32 idx){  return getChar_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  double getChildDouble(){  return getChildDouble_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  float getChildFloat(){  return getChildFloat_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int16 getChildInt16(){  return getChildInt16_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getChildInt(int32 nrofBytes){  return getChildInt_ByteDataAccessBaseJc(this, nrofBytes,  null/*_thCxt*/); }

  int64 getChildInteger(int32 nrofBytes){  return getChildInteger_ByteDataAccessBaseJc(this, nrofBytes,  null/*_thCxt*/); }

  StringJc getChildString(int32 nrofBytes){  return getChildString_ByteDataAccessBaseJc(this, nrofBytes,  null/*_thCxt*/); }

  int32 getChildUint16(){  return getChildUint16_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int16 getChildUint8(){  return getChildUint8_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  PtrVal_int8 getData(){  return getData_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  double getDouble(int32 idx){  return getDouble_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  float getFloat(int32 idx){  return getFloat_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  float getFloat(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getFloat_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int16 getInt16(int32 idx){  return getInt16_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getInt16(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getInt16_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int32 getInt32(int32 idx){  return getInt32_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getInt32(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getInt32_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int64 getInt64(int32 idx){  return getInt64_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int8 getInt8(int32 idx){  return getInt8_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getInt8(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getInt8_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int32 getLengthCurrent(){  return getLengthCurrent_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getLengthHead(){  return getLengthHead_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getLengthTotal(){  return getLengthTotal_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getLength(){  return getLength_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getMaxNrofBytesForNextChild(){  return getMaxNrofBytesForNextChild_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getMaxNrofBytes(){  return getMaxNrofBytes_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getPositionInBuffer(){  return getPositionInBuffer_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 getPositionNextChildInBuffer(){  return getPositionNextChildInBuffer_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  StringJc getString(int32 idx, int32 nrofBytes){  return getString_ByteDataAccessBaseJc(this, idx, nrofBytes,  null/*_thCxt*/); }

  int32 getUint16(int32 idx){  return getUint16_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getUint16(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getUint16_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int32 getUint32(int32 idx){  return getUint32_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getUint32(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getUint32_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  int16 getUint8(int32 idx){  return getUint8_i_ByteDataAccessBaseJc(this, idx,  null/*_thCxt*/); }

  int32 getUint8(int32 idxBytes, int32 idxArray, int32 lengthArray){  return getUint8_iii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray,  null/*_thCxt*/); }

  bool isExpandable(){  return isExpandable_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  bool isInUse(){  return isInUse_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 ixBegin(){  return ixBegin_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 ixEnd(){  return ixEnd_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  int32 ixNextChild(){  return ixNextChild_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  void removeChild(){ removeChild_ByteDataAccessBaseJc(this); }

  void removeChild(struct ByteDataAccessBaseJc_t* child){ removeChild_XX_ByteDataAccessBaseJc(this, child,  null/*_thCxt*/); }

  void removeChildren(){ removeChildren_ByteDataAccessBaseJc(this); }

  void setBigEndian(bool val){ setBigEndian_ByteDataAccessBaseJc(this, val); }

  void setDouble(int32 idx, double value){ setDouble_ByteDataAccessBaseJc(this, idx, value); }

  void setException(bool val){ setException_ByteDataAccessBaseJc(this, val); }

  void setFloat(int32 idx, float value){ setFloat_if_ByteDataAccessBaseJc(this, idx, value); }

  void setFloat(int32 idxBytes, int32 idxArray, int32 lengthArray, float val){ setFloat_iiif_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  int32 setIdxtoNextCurrentChild(int32 sizeChild){  return setIdxtoNextCurrentChild_ByteDataAccessBaseJc(this, sizeChild,  null/*_thCxt*/); }

  void setInt16(int32 idx, int32 value){ setInt16_ii_ByteDataAccessBaseJc(this, idx, value,  null/*_thCxt*/); }

  void setInt16(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setInt16_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  void setInt32(int32 idx, int32 value){ setInt32_ii_ByteDataAccessBaseJc(this, idx, value,  null/*_thCxt*/); }

  void setInt32(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setInt32_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  void setInt8(int32 idx, int32 value){ setInt8_ii_ByteDataAccessBaseJc(this, idx, value); }

  void setInt8(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setInt8_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  void setLengthElement(int32 length){ setLengthElement_ByteDataAccessBaseJc(this, length); }

  int32 setString(int32 idx, int32 nmax, StringJcpp ss){  return setString_ByteDataAccessBaseJc(this, idx, nmax, ss,  null/*_thCxt*/); }

  void setUint16(int32 idx, int32 value){ setUint16_ii_ByteDataAccessBaseJc(this, idx, value); }

  void setUint16(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setUint16_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  void setUint32(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setUint32_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  void setUint32(int32 idx, int64 value){ setUint32_il_ByteDataAccessBaseJc(this, idx, value,  null/*_thCxt*/); }

  void setUint8(int32 idx, int32 value){ setUint8_ii_ByteDataAccessBaseJc(this, idx, value); }

  void setUint8(int32 idxBytes, int32 idxArray, int32 lengthArray, int32 val){ setUint8_iiii_ByteDataAccessBaseJc(this, idxBytes, idxArray, lengthArray, val); }

  int32 sizeHead(){  return sizeHead_ByteDataAccessBaseJc(this,  null/*_thCxt*/); }

  bool sufficingBytesForNextChild(int32 nrofBytes){  return sufficingBytesForNextChild_ByteDataAccessBaseJc(this, nrofBytes,  null/*_thCxt*/); }

  void throwexc(StringJcpp text, int32 idxArray){ throwexc_ByteDataAccessBaseJc(this, text, idxArray,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_ByteDataAccessBaseJc_h__
