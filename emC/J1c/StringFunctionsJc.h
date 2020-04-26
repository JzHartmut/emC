/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_StringFunctionsJc_h__
#define __J1c_StringFunctionsJc_h__

#include "emC/Base/MemC_emC.h"        //basic concept

#include "emC/Jc/ObjectJc.h"        //basic concept

#include "emC/Jc/StringJc.h"        //used often

   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct StringFunctionsJc_t;


/* J2C: includes *********************************************************/


/*@CLASS_C StringFunctionsJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct StringFunctionsJc_t
{ 
  union { ObjectJc object; } base; 
} StringFunctionsJc_s;
  

#define sizeof_StringFunctionsJc_s sizeof(StringFunctionsJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef StringFunctionsJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define StringFunctionsJcREFDEF
  struct StringFunctionsJc_t;
  typedef TYPE_EnhancedRefJc(StringFunctionsJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct StringFunctionsJc_X_t { ObjectArrayJc head; StringFunctionsJcREF data[50]; } StringFunctionsJc_X;
typedef struct StringFunctionsJc_Y_t { ObjectArrayJc head; StringFunctionsJc_s data[50]; } StringFunctionsJc_Y;

 extern_C struct ClassJc_t const refl_StringFunctionsJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_StringFunctionsJc(OBJP) { CONST_ObjectJc(sizeof(StringFunctionsJc_s), OBJP, &refl_StringFunctionsJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_StringFunctionsJc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc version_StringFunctionsJc;   /*Version, history and license.*/
 extern const char cEndOfText_StringFunctionsJc;   /*The char used to code end of text. It is defined in ASCII as EOT. */
 extern const char cStartOfText_StringFunctionsJc;   /*The char used to code start of text. */
 extern const char cNoCidentifier_StringFunctionsJc;   /*The char used to coding any char which is not an identifier character*/
 extern StringJc indentString_StringFunctionsJc; 

//!!usage: static init code, invoke that one time in start of main.
void initStatic_StringFunctionsJc();




/**Default constructor. */
METHOD_C struct StringFunctionsJc_t* ctorO_StringFunctionsJc(ObjectJc* othis, ThCxt* _thCxt);

METHOD_C int32 indexWhitespace_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt);

METHOD_C int32 indexNoWhitespace_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt);

/**Searches the position of the first identifier character starting from the given position.
If the given position is on an identifier start character, it will be returned without change.
*/
METHOD_C int32 indexIdentifier_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalStartChars, ThCxt* _thCxt);

/**Returns the position after the end of an identifier.
*/
METHOD_C int32 indexAfterIdentifier_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalChars, ThCxt* _thCxt);

/**Returns the position of the end of an identifier.
*/
METHOD_C int32 posAfterIdentifier_CsiiSS_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, StringJc additionalStartChars, StringJc additionalChars, ThCxt* _thCxt);

/**Returns the position of the end of an identifier.
*/
METHOD_C int32 posAfterIdentifier_Csii_StringFunctionsJc(/*J2C:static method*/ CharSeqJc src, int32 start, int32 endMax, ThCxt* _thCxt);

/**Compares two CharSequence (Strings, StringBuilder-content etc.
It is the adequate functionality like {@link java.lang.String#compareTo(String)}.
but it works proper with {@link java.lang.CharSequence}. See example on {@link #equals(Object)}.

*/
METHOD_C int32 comparePos_CsCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt);

/**Compares two CharSequence (Strings, StringBuilder-content etc.)
It detects that position where the Strings are different. That is not done by {@link String#compareTo(String)}
or {@link #compare(CharSequence, int, CharSequence, int, int)}

*/
METHOD_C int32 comparePos_CsiCsii_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars, ThCxt* _thCxt);

typedef bool MT_test_StringFunctionsJc(StringFunctionsJc_s* thiz, StringJc s, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C bool test_StringFunctionsJc_F(StringFunctionsJc_s* thiz, StringJc s, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C bool test_StringFunctionsJc(StringFunctionsJc_s* thiz, StringJc s, ThCxt* _thCxt);

/**Compares two CharSequence (Strings, StringBuilder-content etc.
It is the adequate functionality like {@link java.lang.String#compareTo(String)}.
but it works proper with {@link java.lang.CharSequence}. See example on {@link #equals(Object)}.

*/
METHOD_C int32 compare_CsiCsii_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars, ThCxt* _thCxt);

/**Compares two Strings or StringBuilder-content or any other CharSequence.
It is the adequate functionality like {@link java.lang.String#compareTo(String)}. 
*/
METHOD_C int32 compare_CsCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt);

/**Compares two charsequences. It is similar String.equals(String), but works with CharSequence and accepts null-pointer.
*/
METHOD_C bool equals_CsiiCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, int32 from, int32 to, CharSeqJc s2, ThCxt* _thCxt);

/**Compares two Strings or StringBuilder-content or any other CharSequence.
It is the adequate functionality like {@link java.lang.String#equals(Object)}.
But the  {@link java.lang.String#equals(Object)} does only compare instances of Strings,
it does not compare a String with any other {@link java.lang.CharSequence} whether there are equal.
Not that: <pre>
String str = "abc";
String str2 = "abc";
StringBuilder sb = new StringBuilder(str);
assert(str.equals(str2));
assert(str.contentEquals(sb));  //special String comparator
assert( ! str.equals(sb));      //it is not equals, sb is not a String.
assert(StringFunctions.equals(str, sb));
assert(StringFunctions.equals(sb, str)); //compares any CharSequences
</pre>
*/
METHOD_C bool equals_CsCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt);

/**Returns true if s2 is contained in s1. 
It invokes {@link #indexOf(CharSequence, int, int, CharSequence)}.
*/
METHOD_C bool contains_StringFunctionsJc(/*J2C:static method*/ CharSeqJc s1, CharSeqJc s2, ThCxt* _thCxt);

/**Checks whether the given CharSequence starts with a CharSequence.
It is the adequate functionality like {@link java.lang.String#startsWith(String)}
but it works proper with {@link java.lang.CharSequence}. See example on {@link #equals(Object)}.
*/
METHOD_C bool startsWith_CsCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, CharSeqJc start, ThCxt* _thCxt);

/**Checks whether the given CharSequence starts with a CharSequence.
It is the adequate functionality like {@link java.lang.String#startsWith(String)}
but it works proper with {@link java.lang.CharSequence}. See example on {@link #equals(Object)}.
*/
METHOD_C bool startsWith_CsiiCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 from, int32 to, CharSeqJc start, ThCxt* _thCxt);

/**Checks whether the given CharSequence ends with a CharSequence.
It is the adequate functionality like {@link java.lang.String#startsWith(String)}
but it works proper with {@link java.lang.CharSequence}. See example on {@link #equals(Object)}.
*/
METHOD_C bool endsWith_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, CharSeqJc end, ThCxt* _thCxt);

/**Returns false if at least one char was found in text which is not a whitespace.
A whitespace is one of " \t\n\r" 
*/
METHOD_C bool isEmptyOrOnlyWhitespaces_StringFunctionsJc(/*J2C:static method*/ CharSeqJc text, ThCxt* _thCxt);

/**Searches the first occurrence of the given character in a CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(char, int)}. 
*/
METHOD_C int32 indexOf_Csiic_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 fromIndex, int32 to, char ch, ThCxt* _thCxt);

/**Searches the first occurrence of the given Character in a CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String, int)}. 
*/
METHOD_C int32 indexOf_Csci_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, char ch, int32 fromIndex, ThCxt* _thCxt);

/**Searches the first occurrence of the given Character in a CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String)}. 
*/
METHOD_C int32 indexOf_Csc_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, char ch, ThCxt* _thCxt);

/**Searches any char inside sChars in the given Charsequence
*/
METHOD_C int32 indexOfAnyChar_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 begin, int32 end, CharSeqJc sChars, ThCxt* _thCxt);

/**Searches the last occurrence of the given char in a CharSequence.
It is the adequate functionality like {@link java.lang.String#lastIndexOf(char, fromEnd)}. 
*/
METHOD_C int32 lastIndexOf_Csiic_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 from, int32 to, char ch, ThCxt* _thCxt);

/**Searches the last occurrence of the given char in a CharSequence.
It is the adequate functionality like {@link java.lang.String#lastIndexOf(char)}. 
*/
METHOD_C int32 lastIndexOf_Csc_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, char ch, ThCxt* _thCxt);

/**Searches the last occurrence of the given char in a CharSequence.
It is the adequate functionality like {@link java.lang.String#lastIndexOf(char, fromEnd)}. 
*/
METHOD_C int32 lastIndexOfAnyChar_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 from, int32 to, CharSeqJc chars, ThCxt* _thCxt);

/**Checks whether the given CharSequence contains the other given CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String, int)}. 
*/
METHOD_C int32 indexOf_CsiiS_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 fromIndex, int32 to, StringJc str, ThCxt* _thCxt);

/**Checks whether the given CharSequence contains the other given CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String, int)}. 
*/
METHOD_C int32 indexOf_CsiiCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str, ThCxt* _thCxt);

/**Searches the first occurrence of the given CharSequence in a CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String, int)}. 
*/
METHOD_C int32 indexOf_CsCsi_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, CharSeqJc str, int32 fromIndex, ThCxt* _thCxt);

/**Searches the first occurrence of the given CharSequence in a CharSequence.
It is the adequate functionality like {@link java.lang.String#indexOf(String)}. 
*/
METHOD_C int32 indexOf_CsCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, CharSeqJc str, ThCxt* _thCxt);

/**Checks whether the given CharSequence contains the given String.
It is the adequate functionality like {@link java.lang.String#lastIndexOf(String, int)}. 
*/
METHOD_C int32 lastIndexOf_CsiiS_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 fromIndex, int32 to, StringJc str, ThCxt* _thCxt);

/**Checks whether the given CharSequence contains the other given CharSequence.
Note: The algorithm and source lines are the same like in {@link #lastIndexOfAnyChar(CharSequence, int, int, String)}.
The difference is by translating to C source.
*/
METHOD_C int32 lastIndexOf_CsiiCs_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str, ThCxt* _thCxt);

/**Returns the position of one of the strings in listStrings within the given sq, maybe started inside the sq with from,
returns -1 if the char is not found in the part started from 'fromIndex'.
*/
METHOD_C int32 indexOfAnyString_StringFunctionsJc(/*J2C:static method*/ CharSeqJc sq, int32 from, int32 to, CharSeqJc_Y* listStrings, int32* nrofFoundString, StringJc* foundString, ThCxt* _thCxt);

/**Returns a String with 2*indent spaces for indentation.
If indent is >50, return only 100 spaces. 
*/
METHOD_C StringJc indent2_StringFunctionsJc(/*J2C:static method*/ int32 indent, ThCxt* _thCxt);

/**Returns a String with a newline \n character and 2*indent spaces for indentation.
If indent is >50, return only 100 spaces. 
*/
METHOD_C StringJc nl_indent2_StringFunctionsJc(/*J2C:static method*/ int32 indent, ThCxt* _thCxt);

/**Returns the number of bytes to the UTF start byte.
<ul>
<li>0x00..0x7f: 1 byte UTF8. First byte contains 7 bit. Result 7 bit.
<li>0x80..0xbf: It is any second byte of a UTF8 stream. This routine returns 0. Any following byte contains 6 bit.
<li>0xc0..0xdf: 2 byte UTF8. First byte contains 5 bit. Result 11 bit. 0x07ff..0x0
<li>0xef..0xe0: 3 byte UTF8. First byte contains 4 bit. Result 16 bit  0xffff..0, This it the range of UTF-16
<li>0xf7..0xf0: 4 byte UTF8. First byte contains 3 bit. Result 21 bit   
<li>0xfb..0xf8: 5 byte UTF8. First byte contains 2 bit. Result 26 bit   
<li>0xfd..0xfc: 6 byte UTF8. First byte contains 1 bit. Result 31 bit   
<li>0xfe:       7 byte UTF8. First byte contains 0 bit. Result 36 bit   
<li>0xff:       8 byte UTF8. First byte contains 0 bit. Result 42 bit   
<li>
<li>The first byte does not have the bits 10xx xxxx (range 0x80..0xbf). Then return 0, the ixSrc[0] will not be incremented. 
</ul>
*/
METHOD_C int32 nrofBytesUTF8_StringFunctionsJc(/*J2C:static method*/ int8 b, ThCxt* _thCxt);

/**Converts the current bytes in a byte[] from UTF-8 in a UTF16-character.
<br>
Special code error situations: 
<ul>
<li>The first byte does not have the bits 10xx xxxx (range 0x80..0xbf). Then return 0, the ixSrc[0] will not be incremented. 
<li>The following bytes must have the bits 10xx xxxx. If not, then return 0 with the ixSrc[0] on the position of the errorneous byte.
<li>Characters outside UTF16: The character (short)(0xfffd) is returned, but the bytes are correctly skipped, 
so the next character start byte is referred by the ixSrc[0].
</ul>
If that error occurs, the routine returns 0 and the ixDst[0] refers the faulty byte. With comparison 
with the start index before invocation, the error can be ...TODO

*/
METHOD_C int16 byte2UTF8_StringFunctionsJc(/*J2C:static method*/ int8_Y* src, int32_Y* ixSrc, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Vtbl_StringFunctionsJc[]; //marker for methodTable check
typedef struct Vtbl_StringFunctionsJc_t
{ VtblHeadJc head;
  MT_test_StringFunctionsJc* test;
  Vtbl_ObjectJc ObjectJc;
} Vtbl_StringFunctionsJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class StringFunctionsJc : private StringFunctionsJc_s
{ public:

  int16 byte2UTF8(int8_Y* src, int32_Y* ixSrc){  return byte2UTF8_StringFunctionsJc(src, ixSrc,  null/*_thCxt*/); }

  int32 comparePos(CharSeqJc s1, CharSeqJc s2){  return comparePos_CsCs_StringFunctionsJc(s1, s2,  null/*_thCxt*/); }

  int32 comparePos(CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars){  return comparePos_CsiCsii_StringFunctionsJc(s1, from1, s2, from2, nrofChars,  null/*_thCxt*/); }

  int32 compare(CharSeqJc s1, CharSeqJc s2){  return compare_CsCs_StringFunctionsJc(s1, s2,  null/*_thCxt*/); }

  int32 compare(CharSeqJc s1, int32 from1, CharSeqJc s2, int32 from2, int32 nrofChars){  return compare_CsiCsii_StringFunctionsJc(s1, from1, s2, from2, nrofChars,  null/*_thCxt*/); }

  bool contains(CharSeqJc s1, CharSeqJc s2){  return contains_StringFunctionsJc(s1, s2,  null/*_thCxt*/); }

  StringFunctionsJc(){ init_ObjectJc(&this->base.object, sizeof(StringFunctionsJc_s), 0); setReflection_ObjectJc(&this->base.object, &refl_StringFunctionsJc_s, 0); ctorO_StringFunctionsJc(&this->base.object,  null/*_thCxt*/); }

  bool endsWith(CharSeqJc sq, CharSeqJc end){  return endsWith_StringFunctionsJc(sq, end,  null/*_thCxt*/); }

  bool equals(CharSeqJc s1, CharSeqJc s2){  return equals_CsCs_StringFunctionsJc(s1, s2,  null/*_thCxt*/); }

  bool equals(CharSeqJc s1, int32 from, int32 to, CharSeqJc s2){  return equals_CsiiCs_StringFunctionsJc(s1, from, to, s2,  null/*_thCxt*/); }

  StringJc indent2(int32 indent){  return indent2_StringFunctionsJc(indent,  null/*_thCxt*/); }

  int32 indexAfterIdentifier(CharSeqJc src, int32 start, int32 endMax, StringJcpp additionalChars){  return indexAfterIdentifier_StringFunctionsJc(src, start, endMax, additionalChars,  null/*_thCxt*/); }

  int32 indexIdentifier(CharSeqJc src, int32 start, int32 endMax, StringJcpp additionalStartChars){  return indexIdentifier_StringFunctionsJc(src, start, endMax, additionalStartChars,  null/*_thCxt*/); }

  int32 indexNoWhitespace(CharSeqJc src, int32 start, int32 endMax){  return indexNoWhitespace_StringFunctionsJc(src, start, endMax,  null/*_thCxt*/); }

  int32 indexOfAnyChar(CharSeqJc sq, int32 begin, int32 end, CharSeqJc sChars){  return indexOfAnyChar_StringFunctionsJc(sq, begin, end, sChars,  null/*_thCxt*/); }

  int32 indexOfAnyString(CharSeqJc sq, int32 from, int32 to, CharSeqJc_Y* listStrings, int32* nrofFoundString, StringJc* foundString){  return indexOfAnyString_StringFunctionsJc(sq, from, to, listStrings, nrofFoundString, foundString,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, CharSeqJc str){  return indexOf_CsCs_StringFunctionsJc(sq, str,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, CharSeqJc str, int32 fromIndex){  return indexOf_CsCsi_StringFunctionsJc(sq, str, fromIndex,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, char ch){  return indexOf_Csc_StringFunctionsJc(sq, ch,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, char ch, int32 fromIndex){  return indexOf_Csci_StringFunctionsJc(sq, ch, fromIndex,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str){  return indexOf_CsiiCs_StringFunctionsJc(sq, fromIndex, to, str,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, int32 fromIndex, int32 to, StringJcpp str){  return indexOf_CsiiS_StringFunctionsJc(sq, fromIndex, to, str,  null/*_thCxt*/); }

  int32 indexOf(CharSeqJc sq, int32 fromIndex, int32 to, char ch){  return indexOf_Csiic_StringFunctionsJc(sq, fromIndex, to, ch,  null/*_thCxt*/); }

  int32 indexWhitespace(CharSeqJc src, int32 start, int32 endMax){  return indexWhitespace_StringFunctionsJc(src, start, endMax,  null/*_thCxt*/); }

  bool isEmptyOrOnlyWhitespaces(CharSeqJc text){  return isEmptyOrOnlyWhitespaces_StringFunctionsJc(text,  null/*_thCxt*/); }

  int32 lastIndexOfAnyChar(CharSeqJc sq, int32 from, int32 to, CharSeqJc chars){  return lastIndexOfAnyChar_StringFunctionsJc(sq, from, to, chars,  null/*_thCxt*/); }

  int32 lastIndexOf(CharSeqJc sq, char ch){  return lastIndexOf_Csc_StringFunctionsJc(sq, ch,  null/*_thCxt*/); }

  int32 lastIndexOf(CharSeqJc sq, int32 fromIndex, int32 to, CharSeqJc str){  return lastIndexOf_CsiiCs_StringFunctionsJc(sq, fromIndex, to, str,  null/*_thCxt*/); }

  int32 lastIndexOf(CharSeqJc sq, int32 fromIndex, int32 to, StringJcpp str){  return lastIndexOf_CsiiS_StringFunctionsJc(sq, fromIndex, to, str,  null/*_thCxt*/); }

  int32 lastIndexOf(CharSeqJc sq, int32 from, int32 to, char ch){  return lastIndexOf_Csiic_StringFunctionsJc(sq, from, to, ch,  null/*_thCxt*/); }

  StringJc nl_indent2(int32 indent){  return nl_indent2_StringFunctionsJc(indent,  null/*_thCxt*/); }

  int32 nrofBytesUTF8(int8 b){  return nrofBytesUTF8_StringFunctionsJc(b,  null/*_thCxt*/); }

  int32 posAfterIdentifier(CharSeqJc src, int32 start, int32 endMax, StringJcpp additionalStartChars, StringJcpp additionalChars){  return posAfterIdentifier_CsiiSS_StringFunctionsJc(src, start, endMax, additionalStartChars, additionalChars,  null/*_thCxt*/); }

  int32 posAfterIdentifier(CharSeqJc src, int32 start, int32 endMax){  return posAfterIdentifier_Csii_StringFunctionsJc(src, start, endMax,  null/*_thCxt*/); }

  bool startsWith(CharSeqJc sq, CharSeqJc start){  return startsWith_CsCs_StringFunctionsJc(sq, start,  null/*_thCxt*/); }

  bool startsWith(CharSeqJc sq, int32 from, int32 to, CharSeqJc start){  return startsWith_CsiiCs_StringFunctionsJc(sq, from, to, start,  null/*_thCxt*/); }

  virtual bool test(StringJcpp s){  return test_StringFunctionsJc_F(this, s,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_StringFunctionsJc_h__
