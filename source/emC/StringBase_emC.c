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
**end copyright***************************************************************************************
*
* This file contains only operations without dependencies to other CRJ files. 
*/
#include <applstdef_emC.h>
#include <emC/Object_emC.h>
#include <emC/String_emC.h>
#include <string.h>  //C-standard

//Note: Implementation to search \0 in an limited range. 
int strlen_emC(char const* text, int maxNrofChars)
{
  register char const* text1 = text;
  register char const* text9 = text + maxNrofChars;
  //optimization: test only one pointer register, which is incremented too
  while (text1 < text9 && *text1 != 0) { text1 += 1; }
  return (text1 - text);
}


//Note: effective and safe implementation, better then strncpy and strlcpy.
int strcpy_emC(char* dst, char const* src, int lenDst)
{ if(lenDst <=0) return 0;
  register char const* src1 = src - 1;  //use pre-increment
  register char const* src9 = src + lenDst-1;  //exclusive max end address to use for char copy
  register char* dst1 = dst-1;  //use pre-increment
  //optimization: test only one pointer register, which is incremented too
  while (++src1 < src9 && *src1 != 0) { *(++dst1) = *src1; }  //more optimized: use 32 bit access.
  *(++dst1) = 0; //anyway 0-terminated
  return (src1 == src9)? lenDst : (src1 - src);
}




bool equals_zI_StringJc(const StringJc ythis, const char* strCmp, int valueCmp  )
{ int countThis = VAL_StringJc(ythis) & mLength__StringJc; 
  int countCmp = valueCmp & mLength__StringJc;
  const char* strThis = PTR_StringJc(ythis);
  if(countThis == mLength__StringJc){
    countThis = strlen_emC(strThis, mLength__StringJc);
  }
  if(countCmp == mLength__StringJc){
    countCmp = strlen_emC(strCmp, countThis+1);
  }
  if(countCmp != countThis)
  { return(false);
  }
  else if(strThis == strCmp){
    return true;  //same length and same addresses of text.
  }
  else
  { bool bRet = memcmp(strThis, strCmp, countCmp) == 0;
    return(bRet);
  }
}



int copyToBuffer_StringJc(const StringJc thiz, int start, int end, char* buffer, int sizeBuffer)
{ //STACKTRC_ENTRY("copyToBuffer_StringJc");
  int nChars = VAL_StringJc(thiz) & mLength__StringJc;
  if (nChars == kIs_0_terminated_StringJc) {
    char const* str = PTR_OS_PtrValue(thiz, char const);
    nChars = strlen_emC(str, sizeBuffer);
  }
  //it is a StringJc
  //faster operation with memcpy instead check of isStringJc for any character.
  char const* str = PTR_OS_PtrValue(thiz, char const);
  if (end < 0) {
    end = nChars + end + 1;  //end=-1 results in end = nChars
  }
  if (end > start) {
    int nrofBytes = end - start;
    if (nrofBytes > sizeBuffer) {
      nrofBytes = sizeBuffer;
    }
    memcpy(buffer, str + start, nrofBytes);
    //STACKTRC_LEAVE; 
    return nrofBytes;
  }
  else {
    //STACKTRC_LEAVE; 
    return 0;
  }
}




