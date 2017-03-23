/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_StringFormatterJc_h__
#define __J1c_StringFormatterJc_h__

#include "Fwc/fw_MemC.h"        //basic concept

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct AppendableJc_t;
struct DateJc_t;
struct SimpleDateFormatJc_t;
struct StringBuilderJc_t;
struct StringFormatterJc_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef AppendableJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define AppendableJcREFDEF
  struct AppendableJc_t;
  typedef TYPE_EnhancedRefJc(AppendableJc);
#endif
#ifndef SimpleDateFormatJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define SimpleDateFormatJcREFDEF
  struct SimpleDateFormatJc_t;
  typedef TYPE_EnhancedRefJc(SimpleDateFormatJc);
#endif
#ifndef StringBuilderJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define StringBuilderJcREFDEF
  struct StringBuilderJc_t;
  typedef TYPE_EnhancedRefJc(StringBuilderJc);
#endif


/* J2C: includes *********************************************************/
#include "Jc/FileIoJc.h"  //interface
#include "Jc/ObjectJc.h"  //interface
#include "Jc/StringJc.h"  //embedded type in class data


/*@CLASS_C StringFormatterJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct StringFormatterJc_t
{ 
  union { ObjectJc object; AppendableJc_s AppendableJc;CloseableJc CloseableJc;FlushableJc FlushableJc;} base; 
  StringBuilderJcREF buffer; 
  AppendableJcREF lineout;   /*Destination to output a full line.*/
  bool bShouldLineoutClose; 
  char secondNewline;   /*The last written Character on {@link #append(char)}.*/
  int32 pos;   /*The position of actual writing.*/
  bool bInsert;   /*True than add inserts, false than it overwrites. */
  StringJc sNewline; 
  char cDecimalSeparator; 
  StringJc sDatePrefixNewer; 
  SimpleDateFormatJcREF dateFormatNewer; 
  StringJc sDatePrefixToday; 
  SimpleDateFormatJcREF dateFormatToday; 
  StringJc sDatePrefixYear; 
  SimpleDateFormatJcREF dateFormatYear; 
  StringJc sDatePrefixOlder; 
  SimpleDateFormatJcREF dateFormatOlder; 
} StringFormatterJc_s;
  

#define sizeof_StringFormatterJc_s sizeof(StringFormatterJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef StringFormatterJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define StringFormatterJcREFDEF
  struct StringFormatterJc_t;
  typedef TYPE_EnhancedRefJc(StringFormatterJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct StringFormatterJc_X_t { ObjectArrayJc head; StringFormatterJcREF data[50]; } StringFormatterJc_X;
typedef struct StringFormatterJc_Y_t { ObjectArrayJc head; StringFormatterJc_s data[50]; } StringFormatterJc_Y;

 extern_C struct ClassJc_t const reflection_StringFormatterJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_StringFormatterJc(OBJP) { CONST_ObjectJc(sizeof(StringFormatterJc_s), OBJP, &reflection_StringFormatterJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_StringFormatterJc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern StringJc version_StringFormatterJc;   /*Version, history and license.*/
#define mNrofBytesInWord_StringFormatterJc 0x1f
#define mBytesInWordBigEndian_StringFormatterJc 0x20  /*If this bit is set in mode, the byte with the lower index is interpreted as higher part of word*/
#define k1_StringFormatterJc 1  /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
#define k2right_StringFormatterJc 2  /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
 extern const int16 k2left_StringFormatterJc;   /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
#define k4right_StringFormatterJc 4  /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
 extern const int16 k4left_StringFormatterJc;   /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
#define k6right_StringFormatterJc 6  /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
 extern const int16 k6left_StringFormatterJc;   /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
#define k8right_StringFormatterJc 8  /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
 extern const int16 k8left_StringFormatterJc;   /*The constant determine the number of digits representing a (hex) value and the decision, use first byte left or right side.*/
 extern StringJc spaces_StringFormatterJc; 
 extern const int64 n10a_StringFormatterJc[9];   /*Array with power of 10 to detect the exponent size of a long value. */
 extern StringJc sNeg_StringFormatterJc; 

//!!usage: static init code, invoke that one time in start of main.
void initStatic_StringFormatterJc();




METHOD_C struct StringFormatterJc_t* ctorO_StringFormatterJc(ObjectJc* othis, ThCxt* _thCxt);

/**Constructs an instance with a linked line-out channel and a StringBuffer of the given length.
If a '\n' character will be {@link #append(char)} or {@link #append(CharSequence)} or {@link #append(CharSequence, int, int)}
to this instance, the part till the '\n' will be written to the lineout and removed.
It means the internal buffer contains only the current line. This current line
can be formatted in the known kind.
*/
METHOD_C struct StringFormatterJc_t* ctorO_ApbSi_StringFormatterJc(ObjectJc* othis, struct AppendableJc_t* lineout, bool shouldClose, StringJc newlineString, int32 defaultBufferLength, ThCxt* _thCxt);

/**Constructs an instance with a StringBuffer of the given length.
*/
METHOD_C struct StringFormatterJc_t* ctorO_i_StringFormatterJc(ObjectJc* othis, int32 length, ThCxt* _thCxt);

/**Constructs an instance with a StringBuffer initialized with the given string.
*/
METHOD_C struct StringFormatterJc_t* ctorO_S_StringFormatterJc(ObjectJc* othis, StringJc str, ThCxt* _thCxt);

/**Constructs an instance with a existing StringBuffer.
The StringBuffer content is unchanged first. The StringBuffer may be shared between several StringFormatter
and can also be written directly.
*/
METHOD_C struct StringFormatterJc_t* ctorO_Sb_StringFormatterJc(ObjectJc* othis, struct StringBuilderJc_t* buffer, ThCxt* _thCxt);

/**Same as getContent, overwrites Object.toString(). 
Don't use it instead getContent(), use it only for debugging goals.
@implementInfo: optimize-toString in not set here, it may be set outside. 
*/
METHOD_C StringJc toString_StringFormatterJc(ObjectJc* ithis, ThCxt* _thCxt);

/**Gets the accumulated content.

*/
METHOD_C StringJc getContent_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Gets the accumulated content.

*/
METHOD_C CharSeqJc getBuffer_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Sets an deviant decimal separator for floating point digigs, country-specific. */
METHOD_C void setDecimalSeparator_StringFormatterJc(StringFormatterJc_s* thiz, char sep, ThCxt* _thCxt);

/**Resets the internal buffer. If it is called after usage of the String getting with getContent(),
no additional space is used.

*/
METHOD_C struct StringFormatterJc_t* reset_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Sets the current position to the end of the string. */
METHOD_C struct StringFormatterJc_t* end_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Sets the current write position to the given position. */
METHOD_C struct StringFormatterJc_t* pos_i_StringFormatterJc(StringFormatterJc_s* thiz, int32 newPos, ThCxt* _thCxt);

/**Sets the current write position to the given position. 
If minChars <0 then the position may be set to left. Existing text will be overridden.
If minChars >=0 then the new position is at least the number of minChars right side to the current pos.
If the pos is less the buffer.length, all characters right of pos in the buffer will be overridden
on the next add- or append- operation. This condition is valid independent of this method.
If the pos is more right than the length of the buffer, spaces will be included.
*/
METHOD_C struct StringFormatterJc_t* pos_ii_StringFormatterJc(StringFormatterJc_s* thiz, int32 newPos, int32 minChars, ThCxt* _thCxt);

/**returns the current length of string. */
METHOD_C int32 length_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**returns the current position for add in buffer.
*/
METHOD_C int32 getPos_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Adds at the current position a string.

*/
METHOD_C struct StringFormatterJc_t* add_Cs_StringFormatterJc(StringFormatterJc_s* thiz, CharSeqJc str, ThCxt* _thCxt);

/**Adds at the current position a string.
It is extra for Java2C-translation, elsewhere the same like {@link #add(CharSequence)}
*/
METHOD_C struct StringFormatterJc_t* add_S_StringFormatterJc(StringFormatterJc_s* thiz, StringJc str, ThCxt* _thCxt);

/**Adds the given str at the current position but replaces line feed characters by given one.
This method can be used proper if a part of a multi-line-text should be presented in one line for example for logs.
*/
METHOD_C struct StringFormatterJc_t* addReplaceLinefeed_StringFormatterJc(StringFormatterJc_s* thiz, CharSeqJc str, CharSeqJc replaceLinefeed, int32 maxChars, ThCxt* _thCxt);

METHOD_C struct StringFormatterJc_t* add_c_StringFormatterJc(StringFormatterJc_s* thiz, char ch, ThCxt* _thCxt);

/**Adds at the current position a char[].

*/
METHOD_C struct StringFormatterJc_t* add_cY_StringFormatterJc(StringFormatterJc_s* thiz, char_Y* str, ThCxt* _thCxt);

/**Inserts a String at current position with shifting the actual content to right.

*/
METHOD_C struct StringFormatterJc_t* insert_S_StringFormatterJc(StringFormatterJc_s* thiz, StringJc str, ThCxt* _thCxt);

/**sets the overwrite mode. It is the default. In this mode add will overwrite the current content. */
METHOD_C struct StringFormatterJc_t* overwrite_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**sets the insert mode. In this mode add will shift the content at pos to right. */
METHOD_C struct StringFormatterJc_t* insert_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**sets the insert or overwrite mode, returns the current mode before change.
*/
METHOD_C bool setInsertMode_StringFormatterJc(StringFormatterJc_s* thiz, bool insert, ThCxt* _thCxt);

/**Adds a line of ascii representation of bytes. If the code is less than 0x20 (control chars),
a '.' is shown instead.

*/
METHOD_C struct StringFormatterJc_t* addStringLine_StringFormatterJc(StringFormatterJc_s* thiz, int8_Y* data, int32 idx, int32 nrofBytes, StringJc charsetName, ThCxt* _thCxt);

/**Adds at the current position a line of hex numbers.

*/
METHOD_C struct StringFormatterJc_t* addHexLine_StringFormatterJc(StringFormatterJc_s* thiz, int8_Y* data, int32 idx, int32 nrofBytes, int16 mode, ThCxt* _thCxt);

/**Adds a hexa line with left address and ascii

*/
METHOD_C struct StringFormatterJc_t* addHexWord_StringFormatterJc(StringFormatterJc_s* thiz, int8_Y* data, int32 idx, int16 mode, ThCxt* _thCxt);

/**Adds a number as one word readed from data in hexa form, internal routine without prepareBufferPos 

*/
METHOD_C struct StringFormatterJc_t* addHexWord__StringFormatterJc(StringFormatterJc_s* thiz, int8_Y* data, int32 idx, int16 mode, ThCxt* _thCxt);

/**Adds a number containing in a long variable in hexa form

*/
METHOD_C struct StringFormatterJc_t* addHex_StringFormatterJc(StringFormatterJc_s* thiz, int64 value, int32 nrofDigits, ThCxt* _thCxt);

/**Adds a number containing in a long variable in hexa form

*/
METHOD_C struct StringFormatterJc_t* addBinary_StringFormatterJc(StringFormatterJc_s* thiz, int32 value, StringJc sPicture, StringJc sBitCharLo, StringJc sBitCharHi, ThCxt* _thCxt);

/**ensures, that the space in buffer started on pos is writeable with setCharAt.
If the buffer content is less than pos, spaces were padded.
*/
METHOD_C void prepareBufferPos_StringFormatterJc(StringFormatterJc_s* thiz, int32 nrofChars, ThCxt* _thCxt);

/**Adds a number in form 12ab'cd34, it is typical to show 4-byte-values at example addresses.

*/
METHOD_C struct StringFormatterJc_t* addHex44_StringFormatterJc(StringFormatterJc_s* thiz, int64 value, ThCxt* _thCxt);

/**adds a double value in a fix point representation without exponent.

*/
METHOD_C struct StringFormatterJc_t* addFloat_StringFormatterJc(StringFormatterJc_s* thiz, double value, int32 digitsBeforePoint, int32 digitsAfterPoint, ThCxt* _thCxt);

/**Adds a line with representation of byte content in a fixed nice format.
Use a combination of {@link addHexLine(byte[], int, int, int)} and [{@link addStringLine(byte[], int, int, String)}
to write a special defined format. This method writes 4-digit hex values lo byte right and the ASCII-represantation
inclusive a \n char on end. It is a static method working internal with StringFormatter.
*/
METHOD_C StringJc addHexLn_StringFormatterJc(/*J2C:static method*/ int8_Y* data, int32 length, int32 idxStart, ThCxt* _thCxt);

METHOD_C struct StringFormatterJc_t* addDate_StringFormatterJc(StringFormatterJc_s* thiz, struct DateJc_t* date, struct SimpleDateFormatJc_t* format, ThCxt* _thCxt);

METHOD_C struct StringFormatterJc_t* setAt_StringFormatterJc(StringFormatterJc_s* thiz, int32 pos, char ch, ThCxt* _thCxt);

/**Sets a integer value at current position, use the picture to determine the number of characters etc.

<br>
The presentation of values using a so named 'picture' is supported. The picture is a String showing the representation of a number.
Following some examples. Note: a character <code>_</code> means a space.
<table border=1><tr><th rowspan=2>picture</th><th colspan=5>Example numbers</th></tr>
<tr><td>0</td><td>1</td><td>-123</td><td>12345</td><td>12345678</td></tr>

<tr><td rowspan=2><code>+2221.111</code></td>
<td colspan=5>A integer number will be shown with exactly 7 digits. A point is set between digits at the shown position.
The sign is shown everytime, as <code>+</code> or <code>-</code><br>
The number shows like a float point number. At example the value in integer is a milli-Value,
the user can read it in a comfortable format.</td></tr>
<tr><td><code>+___0.000</code></td><td><code>+___0.001</code></td><td><code>-___0.123</code></td><td><code>+__12.2345</code></td><td><code>+####.###</code></td></tr>  

<tr><td rowspan=2><code>+3321.111</code></td>
<td colspan=5>A integer number will be shown with a maximum of 7 digits, but a minimum of 5 digits. 
The sign is shown only if it is necessary. Because leftside there is a <code>3</code> a positive sign needs no space.</td></tr>
<tr><td><code>_0.000</code></td><td><code>_0.001</code></td><td><code>-_0.123</code></td><td><code>12.345</code></td><td><code>##.###</code></td></tr>  

</table>
The digits of the number are shown at any position of digit in the picture, 
The last significant digit is placed at right side of digit in the picture. 
Followed rules of meaning of the chars are in force: 
<table border=1><tr><th>char</th><th>meaning</th></tr> 
<tr><td><code>0</code></td><td>The digit 0 in number is alway shown, also leftside or rightside.</td></tr>     
<tr><td><code>1</code></td><td>A leftside ditit 0 in number is shown as 0, but a rightside 0 is shown as space.</td></tr>     
<tr><td><code>2</code></td><td>A leftside or rightside digit 0 of number is shown as space, any middle digit 0 is shown as 0.</td></tr>     
<tr><td><code>3</code></td><td>In differece to <code>2</code>, a leftside or rightside digit 0 produces no output. With the number of <code>3</code>-digits, 
the maximal shown number of digits is limited. At example with a picture "<code>3331.03</code>" only a maximum of 7 digits are shown,
but a minimum of 3 digits.</td></tr>     
</table>
*/
METHOD_C struct StringFormatterJc_t* addint_StringFormatterJc(StringFormatterJc_s* thiz, int64 nr, StringJc sPict, ThCxt* _thCxt);

/***/
METHOD_C struct StringFormatterJc_t* addIntPicture_StringFormatterJc(StringFormatterJc_s* thiz, int64 nr, StringJc sPict, ThCxt* _thCxt);

/**This algorithm is taken over from C++ routines in strpict.cpp written by JcHartmut in 1993..1999.

*/
METHOD_C bool strPicture_StringFormatterJc(StringFormatterJc_s* thiz, int64 src, StringJc pict, StringJc posNegPointExp, char cFracSep, ThCxt* _thCxt);

/**Writes a float value in technical representation with exponent as short char a..T
NOTE: This algorithm is taken over from C++ routines in strpict.cpp written by JcHartmut in 1993..1999.
<br><br>
The representation of the number uses always three digits left of point. 
The exponent is shown as short character:
<ul>
<li>a, f p, n, u, m for ato, femto, pico, nano, micro, milli (10^-18 to 10^-3)
<li>. or space if the exponent is 0,
<li>k, M, G, T for kilo, Mega, Giga, Terra (10^3 to 10^12).
</ul>
The parameters nDigit and mode controls the representation:
<table><th><td>nDigit, mode</td><td>
*/
METHOD_C int32 addFloatPicture_StringFormatterJc(StringFormatterJc_s* thiz, float src, StringJc pict, ThCxt* _thCxt);

/**It invokes {@link #append(char)} for any char.Therewith a \n and \r is handled specially.
@see java.lang.Appendable#append(java.lang.CharSequence)
*/
METHOD_C struct StringFormatterJc_t* append_Cs_StringFormatterJc(StringFormatterJc_s* thiz, CharSeqJc csq, ThCxt* _thCxt);

/**Appends one character and flushes a line on end-line character. 
If the char is a 0x0d or 0x0a (carriage return, line-feed) and the constructor 
{@link StringFormatter#StringFormatter(Appendable, boolean, String, int)} was used with a given lineout, 
then the buffered line ({@link #buffer} is output and a {@link #sNewline} is added if given. It uses {@link #flushLine(String)}
If a 0x0a is given and the last char was 0x0d or vice versa, this second newline character is prevented 
because 0d 0a is only one line feed. 0a0d is recognized as one line feed too.
If 0d0a0d is given, that are two newlines. If the text is mixed with 0d0a, 0a, 0d etc. both 0d or 0a
are detected as end line character and the following alternate character is ignored.
<br><br>
*/
METHOD_C struct StringFormatterJc_t* append_c_StringFormatterJc(StringFormatterJc_s* thiz, char c, ThCxt* _thCxt);

/**It invokes {@link #append(char)} for any char.Therewith a \n and \r is handled specially.
@see java.lang.Appendable#append(java.lang.CharSequence)
*/
METHOD_C struct StringFormatterJc_t* append_Csii_StringFormatterJc(StringFormatterJc_s* thiz, CharSeqJc csq, int32 start, int32 end, ThCxt* _thCxt);

METHOD_C void flush_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);

/**Flushes the stored content in the lineout and adds the given sNewline
*/
METHOD_C int32 flushLine_StringFormatterJc(StringFormatterJc_s* thiz, StringJc sNewline, ThCxt* _thCxt);

METHOD_C void close_StringFormatterJc(StringFormatterJc_s* thiz, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_StringFormatterJc[]; //marker for methodTable check
typedef struct Mtbl_StringFormatterJc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_AppendableJc AppendableJc;
  Mtbl_CloseableJc CloseableJc;
  Mtbl_FlushableJc FlushableJc;
} Mtbl_StringFormatterJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class StringFormatterJc : private StringFormatterJc_s
{ public:

  struct StringFormatterJc_t* addBinary(int32 value, StringJcpp sPicture, StringJcpp sBitCharLo, StringJcpp sBitCharHi){  return addBinary_StringFormatterJc(this, value, sPicture, sBitCharLo, sBitCharHi,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addDate(struct DateJc_t* date, struct SimpleDateFormatJc_t* format){  return addDate_StringFormatterJc(this, date, format,  null/*_thCxt*/); }

  int32 addFloatPicture(float src, StringJcpp pict){  return addFloatPicture_StringFormatterJc(this, src, pict,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addFloat(double value, int32 digitsBeforePoint, int32 digitsAfterPoint){  return addFloat_StringFormatterJc(this, value, digitsBeforePoint, digitsAfterPoint,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addHex44(int64 value){  return addHex44_StringFormatterJc(this, value,  null/*_thCxt*/); }

  StringFormatterJc& addHexLine(int8_Y* data, int32 idx, int32 nrofBytes, int16 mode){ addHexLine_StringFormatterJc(this, data, idx, nrofBytes, mode,  null/*_thCxt*/);  return *this; }

  StringJc addHexLn(int8_Y* data, int32 length, int32 idxStart){  return addHexLn_StringFormatterJc(data, length, idxStart,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addHexWord(int8_Y* data, int32 idx, int16 mode){  return addHexWord_StringFormatterJc(this, data, idx, mode,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addHexWord_(int8_Y* data, int32 idx, int16 mode){  return addHexWord__StringFormatterJc(this, data, idx, mode,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addHex(int64 value, int32 nrofDigits){  return addHex_StringFormatterJc(this, value, nrofDigits,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addIntPicture(int64 nr, StringJcpp sPict){  return addIntPicture_StringFormatterJc(this, nr, sPict,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addReplaceLinefeed(CharSeqJc str, CharSeqJc replaceLinefeed, int32 maxChars){  return addReplaceLinefeed_StringFormatterJc(this, str, replaceLinefeed, maxChars,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addStringLine(int8_Y* data, int32 idx, int32 nrofBytes, StringJcpp charsetName){  return addStringLine_StringFormatterJc(this, data, idx, nrofBytes, charsetName,  null/*_thCxt*/); }

  struct StringFormatterJc_t* add(CharSeqJc str){  return add_Cs_StringFormatterJc(this, str,  null/*_thCxt*/); }

  struct StringFormatterJc_t* add(StringJcpp str){  return add_S_StringFormatterJc(this, str,  null/*_thCxt*/); }

  struct StringFormatterJc_t* add(char_Y* str){  return add_cY_StringFormatterJc(this, str,  null/*_thCxt*/); }

  struct StringFormatterJc_t* add(char ch){  return add_c_StringFormatterJc(this, ch,  null/*_thCxt*/); }

  struct StringFormatterJc_t* addint(int64 nr, StringJcpp sPict){  return addint_StringFormatterJc(this, nr, sPict,  null/*_thCxt*/); }

  struct StringFormatterJc_t* append(CharSeqJc csq){  return append_Cs_StringFormatterJc(this, csq,  null/*_thCxt*/); }

  struct StringFormatterJc_t* append(CharSeqJc csq, int32 start, int32 end){  return append_Csii_StringFormatterJc(this, csq, start, end,  null/*_thCxt*/); }

  struct StringFormatterJc_t* append(char c){  return append_c_StringFormatterJc(this, c,  null/*_thCxt*/); }

  void close(){ close_StringFormatterJc(this,  null/*_thCxt*/); }

  StringFormatterJc(struct AppendableJc_t* lineout, bool shouldClose, StringJcpp newlineString, int32 defaultBufferLength){ init_ObjectJc(&this->base.object, sizeof(StringFormatterJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringFormatterJc_s, 0); ctorO_ApbSi_StringFormatterJc(&this->base.object, lineout, shouldClose, newlineString, defaultBufferLength,  null/*_thCxt*/); }

  StringFormatterJc(StringJcpp str){ init_ObjectJc(&this->base.object, sizeof(StringFormatterJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringFormatterJc_s, 0); ctorO_S_StringFormatterJc(&this->base.object, str,  null/*_thCxt*/); }

  StringFormatterJc(struct StringBuilderJc_t* buffer){ init_ObjectJc(&this->base.object, sizeof(StringFormatterJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringFormatterJc_s, 0); ctorO_Sb_StringFormatterJc(&this->base.object, buffer,  null/*_thCxt*/); }

  StringFormatterJc(){ init_ObjectJc(&this->base.object, sizeof(StringFormatterJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringFormatterJc_s, 0); ctorO_StringFormatterJc(&this->base.object,  null/*_thCxt*/); }

  StringFormatterJc(int32 length){ init_ObjectJc(&this->base.object, sizeof(StringFormatterJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_StringFormatterJc_s, 0); ctorO_i_StringFormatterJc(&this->base.object, length,  null/*_thCxt*/); }

  struct StringFormatterJc_t* end(){  return end_StringFormatterJc(this,  null/*_thCxt*/); }

  int32 flushLine(StringJcpp sNewline){  return flushLine_StringFormatterJc(this, sNewline,  null/*_thCxt*/); }

  void flush(){ flush_StringFormatterJc(this,  null/*_thCxt*/); }

  CharSeqJc getBuffer(){  return getBuffer_StringFormatterJc(this,  null/*_thCxt*/); }

  StringJc getContent(){  return getContent_StringFormatterJc(this,  null/*_thCxt*/); }

  int32 getPos(){  return getPos_StringFormatterJc(this,  null/*_thCxt*/); }

  struct StringFormatterJc_t* insert(StringJcpp str){  return insert_S_StringFormatterJc(this, str,  null/*_thCxt*/); }

  struct StringFormatterJc_t* insert(){  return insert_StringFormatterJc(this,  null/*_thCxt*/); }

  int32 length(){  return length_StringFormatterJc(this,  null/*_thCxt*/); }

  struct StringFormatterJc_t* overwrite(){  return overwrite_StringFormatterJc(this,  null/*_thCxt*/); }

  struct StringFormatterJc_t* pos(int32 newPos){  return pos_i_StringFormatterJc(this, newPos,  null/*_thCxt*/); }

  struct StringFormatterJc_t* pos(int32 newPos, int32 minChars){  return pos_ii_StringFormatterJc(this, newPos, minChars,  null/*_thCxt*/); }

  void prepareBufferPos(int32 nrofChars){ prepareBufferPos_StringFormatterJc(this, nrofChars,  null/*_thCxt*/); }

  struct StringFormatterJc_t* reset(){  return reset_StringFormatterJc(this,  null/*_thCxt*/); }

  struct StringFormatterJc_t* setAt(int32 pos, char ch){  return setAt_StringFormatterJc(this, pos, ch,  null/*_thCxt*/); }

  void setDecimalSeparator(char sep){ setDecimalSeparator_StringFormatterJc(this, sep,  null/*_thCxt*/); }

  bool setInsertMode(bool insert){  return setInsertMode_StringFormatterJc(this, insert,  null/*_thCxt*/); }

  bool strPicture(int64 src, StringJcpp pict, StringJcpp posNegPointExp, char cFracSep){  return strPicture_StringFormatterJc(this, src, pict, posNegPointExp, cFracSep,  null/*_thCxt*/); }

  StringJc toString(){  return toString_StringFormatterJc(&this->base.object,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_StringFormatterJc_h__
