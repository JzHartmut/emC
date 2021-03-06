/************************************************************************************************
 * Copyright/Copyleft:
 *
 * For this source the LGPL Lesser General Public License,
 * published by the Free Software Foundation is valid.
 * It means:
 * 1) You can use this source without any restriction for any desired purpose.
 * 2) You can redistribute copies of this source to everybody.
 * 3) Every user of this source, also the user of redistribute copies
 *    with or without payment, must accept this license for further using.
 * 4) But the LPGL ist not appropriate for a whole software product,
 *    if this source is only a part of them. It means, the user
 *    must publish this part of source,
 *    but don't need to publish the whole source of the own product.
 * 5) You can study and modify (improve) this source
 *    for own using or for redistribution, but you have to license the
 *    modified sources likewise under this LGPL Lesser General Public License.
 *    You mustn't delete this Copyright/Copyleft inscription in this source file.
 *
 * This source may be used also with another licence, if the author 
 * and all other here named co-authors have agreed to this contract.
 * Especially a company can use a copy of this sources in its products without publishing.
 * The user should have a underwritten contract therefore.
 *
 * @author Hartmut Schorrig, Germany, Pinzberg, www.vishia.org
 *
 **copyright***************************************************************************************
 *
 * @content
 *
 * @author Hartmut Schorrig, Pinzberg, Germany
 *
 * @version 0.83
 *
 * @content This file defines EnhancedRef for the Blockheap concept. 
 * It must not immediately include in a user's source, but it may be included in <applstdef_emC.h> if necesarry
 *
 * @author Jchartmut www.vishia.org
 * @version 0.81
 * list of changes:
 * 2006-07-23: JcHartmut creation
 * 2006-09-24: JcHartmut modification
 *
 ****************************************************************************/

 
 /*@DEFINE BlockHeap_emC_s @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

/**Usage of the BlockHeap management or not and define the size of a block.
 * The size of a normal block in all BlockHeaps are the same. The size must be (!) a power of 2.
 */
#undef USE_BlockHeap_emC
#undef SIZEBLOCK_BlockHeap_emC
//#define SIZEBLOCK_BlockHeap_emC 0x400

#define NO_DYNAMICALLY_MEMORY

/**unused...TODO*/
//#define SMALL_DYNAMICALLY_MEMORY
//#define USE_DYNAMICALLY_MEMORY


/*@DEFINE EnhancedRefJc @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

/**Macro to define the Types <TYPE>REF which should be used for enhanced references.
 * If the BlockHeap or adequate system is used, an enhanced reference
 * is a struct containing the pointer and an additional value. 
 * The usage of the macro is necessary to support both, enhanced and simple references in the same sources.
 * Note: The usage of the macro should be terminated with a colon. Example:
 * ,,typedef TYPE_EnhancedRefJc(MyType);,,
 * @param TYPE the identifier of the TYPE which should be referenced.
 */
#define TYPE_EnhancedRefJc(TYPE) struct TYPE##REF_t{struct TYPE##_t* ref;  int32 refbase; }TYPE##REF
/**Deprecated form. 
 * @Deprecated
 */
//#define DEFINE_EnhancedRefJc(TYPE) typedef struct TYPE##REF_t{struct TYPE##_t* ref;  int32 refbase; }TYPE##REF;  typedef TYPE##REF* TYPE##REFP
#define DEFINE_EnhancedRefJc(TYPE) typedef TYPE_EnhancedRefJc(TYPE)


/**Macro to initialize the value of a defined reference staticly to null. */
#define NULL_REFJc { null, 0}


/**Makro to set a enhanced reference, able to use in primary sources for enhanced references or not enhanced references or C++. 
 * Note: The reference itself will be set an extra assignment tests the type by compiler.
 * Implementation note: The method ,,setBackRefIdxVtblJc(...),, checks whether the reference is used yet, it frees it first.
 * Calling ,,clearBackRefJc(...),, is not necessarry.
 */ 
#define SETREFJc(REF, OBJP, REFTYPE) { clearBackRefJc(&(REF)); (REF).ref = OBJP; setBackRefJc(&(REF), (REF).ref); }
//NOTE: important: do not use OBJP more as one, because it may be a complex method.
//therefore the following variant is false:
//#define SETREFJc(REF, OBJP, REFTYPE) { setBackRefIdxVtblJc(&(REF).refbase, OBJP, null); (REF).ref = OBJP; }
//#define SETREFJc(REF, OBJP, REFTYPE) { setBackRefIdxVtblJc(&(REF).refbase, OBJP, &refl_##REFTYPE); (REF).ref = (REFTYPE*)OBJP; }


#define CLEARREFJc(REF) { clearBackRefJc(&(REF)); (REF).ref = null; }

/**Makro to set a enhanced reference to null. 
 * Note: because the makro should write in form
 *   CLEAR_REF(dst, value);
 * the ending semicolon is set outside the makro.
 * @param REF The reference as value
 */
#define CLEAR_REFJc(REF) clearBackRefJc(&(REF)); (REF).ref = null
     

/**Macro to access to an enhanced reference.
 * @param REF The enhanced reference-instance.
 * @return The reference value. 
 */
#define REFJc(REF) (REF).ref








#define nrofBit_EnhancedRefJc 32


/**Right shifted Bits representing the index of the backpointer from an object to the reference
 * inside the type ObjectRefValuesJc in enhanced references.
 * If this define is setted, the enhanced references are used.
 * This mask should be the left bits after mThreadContext__StringJc, mNonPersists__StringJc, mLength_StringJc
 * because Strings are used as enhanced references too!
*/
#define mRef_EnhancedRefJc              0xffff0000




/**Macro to define the reflection of the enhanced reference of any type, able to use in a C-File.
 * @param TYPE the type of the reference.
 */
#define DEFINE_REFLECTION_REF(TYPE) \
  extern_C struct ClassJc_t const refl_##TYPE; \
  extern_C struct ClassJc_t const refl_##TYPE##REF; \
  const struct Reflection_Fields_##TYPE##REF_t{ ObjectArrayJc head; FieldJc data[2];} refl_Fields_##TYPE##REF = \
  { CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &refl_Fields_##TYPE##REF) \
  , { { "refbase", 0 , &refl__intJc, 0, 0, 0, &refl_##TYPE##REF } \
    , { "ref", 0 , &refl_##TYPE##, 0, 0, 0, &refl_##TYPE##REF } \
  } }; \
  const ClassJc refl_##TYPE##REF =\
  { CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &refl_##TYPE##REF, null) \
  , "Ptr", 0, sizeof(TYPE##REF), (FieldJcArray const*)&refl_Fields_##TYPE##REF \
  }

