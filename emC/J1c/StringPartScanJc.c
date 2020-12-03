/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include <applstdef_emC.h>
#ifdef DEF_ObjectJcpp_REFLECTION  //only possible with reflection because Vtable is need


#include "emC/J1c/StringPartScanJc.h"
#include <string.h>  //because using memset()
#include <emC/Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
#include "emC/J1c/StringFunctionsJc.h"  //reference-association: StringFunctionsJc_s
#include "emC/Jc/MathJc.h"  //reference-association: MathJc_s
#include "emC/Jc/ObjectJc.h"  //reference-association: IntegerJc
#include "emC/Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/
struct Part_StringPartJc_t;

/**This class extends the capability of StringPartBase for scanning capability.
In opposite to the {@link StringPart#seek(int)} functionality with several conditions 
the scan methods does not search till a requested char or string but test the string
starting from the begin of the valid part. If the test is ok, the begin of the valid part
is shifted to right behind the scanned string. The result of the scanning process
may be evaluated later. Therefore it is stored in this class, for example {@link #getLastScannedIntegerNumber()}
can be gotten after scan.
<pre>
abcdefghijklmnopqrstuvwxyz  Sample of the whole associated String
--------------------    The valid part before scan
++++++++++++++    The valid part after scan
******                  The successfully scanned part.
xxxxx             Starting next scan      
</pre> 
A scan works with the current valid part always.
<br><br>  
<b>concatenated sequence of scans</b>:<br>
It is possible to concatenate scans, for example
<pre>
sp.scanStart();
if(sp.scan("keyword").scan('=').scanIdentifier().scanOk()){
String sIdent = sp.getLastScannedString().toString();
} else if(sp.scan("other-keyword").scan(.....
</pre>
The following rule is valid:
<ul>
<li>The operations are concatenated, because any operation returns this.
It is a nice-to-have writing style.
<li>If a scan fails, the following scan operations are not executed.
<li>{@link #scanOk()} returns false if any of the scan methods after {@link #scanStart()}
or the last {@link #scanOk()} fails.
<li>If a {@link #scanOk()} was invoked and the scan before that fails, the begin of the valid part
is set to that position where the scan has started before this scan sequence. It is the position
where {@link #scanStart()} was called or the last {@link #scanOk()} with return true was called.
</ul>
With them a well readable sequential test of content can be programmed in the shown form above.
In a sequence of scans white space and comments may be skipped over if the method
{@link #setIgnoreWhitespaces(boolean)} etc. are invoked before. That setting is valid for all following
scan invocations.

@author Hartmut Schorrig
e
*/


const char sign_Vtbl_StringPartScanJc[] = "StringPartScanJc"; //to mark method tables of all implementations

#ifdef DEF_ClassJc_Vtbl
typedef struct VtblDef_StringPartScanJc_t { Vtbl_StringPartScanJc mtbl; VtblHeadJc end; } VtblDef_StringPartScanJc;
 extern VtblDef_StringPartScanJc const mtblStringPartScanJc;
#endif //#ifdef DEF_ClassJc_Vtbl


/*Constructor */
struct StringPartScanJc_t* ctorO_Csii_StringPartScanJc(ObjectJc* othis, CharSeqJc src, int32 begin, int32 end, ThCxt* _thCxt)
{ StringPartScanJc_s* thiz = (StringPartScanJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_StringPartScanJc");
  checkConsistence_ObjectJc(othis, sizeof(StringPartScanJc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_Csii_StringPartJc(/*J2C:static method call*/othis, src, begin, end, _thCxt);
  setReflection_ObjectJc(othis, &refl_StringPartScanJc_s, sizeof(StringPartScanJc_s));
  //j2c: Initialize all class variables:
  {
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerNumber.head.object, sizeof_ARRAYJc(int64, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerNumber.head.object, 5, sizeof(int64), null, 0);//J2C: constructor for embedded array;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerSign.head.object, sizeof_ARRAYJc(bool, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerSign.head.object, 5, sizeof(bool), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastIntegerNumber = -1;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastFloatNumber.head.object, sizeof_ARRAYJc(double, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastFloatNumber.head.object, 5, sizeof(double), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastFloatNumber = -1;
  }
  { 
    ctorO_Part_StringPartJc(&thiz->base.super, &thiz->sLastString.base.object, 0, 0, _thCxt);
    
  }
  STACKTRC_LEAVE;
  return thiz;
}



/*Constructor */
struct StringPartScanJc_t* ctorO_Cs_StringPartScanJc(ObjectJc* othis, CharSeqJc src, ThCxt* _thCxt)
{ StringPartScanJc_s* thiz = (StringPartScanJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_StringPartScanJc");
  checkConsistence_ObjectJc(othis, sizeof(StringPartScanJc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_Cs_StringPartJc(/*J2C:static method call*/othis, src, _thCxt);
  setReflection_ObjectJc(othis, &refl_StringPartScanJc_s, sizeof(StringPartScanJc_s));
  //j2c: Initialize all class variables:
  {
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerNumber.head.object, sizeof_ARRAYJc(int64, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerNumber.head.object, 5, sizeof(int64), null, 0);//J2C: constructor for embedded array;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerSign.head.object, sizeof_ARRAYJc(bool, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerSign.head.object, 5, sizeof(bool), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastIntegerNumber = -1;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastFloatNumber.head.object, sizeof_ARRAYJc(double, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastFloatNumber.head.object, 5, sizeof(double), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastFloatNumber = -1;
  }
  { 
    ctorO_Part_StringPartJc(&thiz->base.super, &thiz->sLastString.base.object, 0, 0, _thCxt);
  }
  STACKTRC_LEAVE;
  return thiz;
}



/*Constructor */
struct StringPartScanJc_t* ctorO_StringPartScanJc(ObjectJc* othis, ThCxt* _thCxt)
{ StringPartScanJc_s* thiz = (StringPartScanJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_StringPartScanJc");
  checkConsistence_ObjectJc(othis, sizeof(StringPartScanJc_s), null, _thCxt);  
  //J2C:super Constructor
  ctorO_StringPartJc(/*J2C:static method call*/othis, _thCxt);
  setReflection_ObjectJc(othis, &refl_StringPartScanJc_s, sizeof(StringPartScanJc_s));
  //j2c: Initialize all class variables:
  {
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerNumber.head.object, sizeof_ARRAYJc(int64, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerNumber.head.object, 5, sizeof(int64), null, 0);//J2C: constructor for embedded array;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastIntegerSign.head.object, sizeof_ARRAYJc(bool, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastIntegerSign.head.object, 5, sizeof(bool), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastIntegerNumber = -1;
    /*J2C: newArray*/
      init_ObjectJc(&thiz->nLastFloatNumber.head.object, sizeof_ARRAYJc(double, 5), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&thiz->nLastFloatNumber.head.object, 5, sizeof(double), null, 0);//J2C: constructor for embedded array;
    thiz->idxLastFloatNumber = -1;
  }
  { 
    ctorO_Part_StringPartJc(&thiz->base.super, &thiz->sLastString.base.object, 0, 0, _thCxt);
  }
  STACKTRC_LEAVE;
  return thiz;
}



/**Skips over white spaces. It calls {@link StringPart#seekNoWhitespace()} and return this. */
struct StringPartScanJc_t* scanSkipSpace_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanSkipSpace_StringPartScanJc");
  
  { 
    
    seekNoWhitespace_StringPartJc(& ((* (thiz)).base.super), _thCxt);
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Skips over white spaces and comments. It calls {@link StringPart#seekNoWhitespaceOrComments()} and return this. */
struct StringPartScanJc_t* scanSkipComment_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanSkipComment_StringPartScanJc");
  
  { 
    
    seekNoWhitespaceOrComments_StringPartJc(& ((* (thiz)).base.super), _thCxt);
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/*** */
struct StringPartScanJc_t* scanStart_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanStart_StringPartScanJc");
  
  { 
    
    thiz->base.super.bCurrentOk = true;
    scanOk_StringPartScanJc(thiz, _thCxt);/*turn all indicees to ok*/
    
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Invocation of scan() for a {@link StringPart} is the same than scanStart().*/
struct StringPartScanJc_t* scan_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scan_StringPartScanJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return scanStart_StringPartScanJc(thiz, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

bool scanEntry_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanEntry_StringPartScanJc");
  
  { 
    
    if(thiz->base.super.bCurrentOk) 
    { 
      
      seekNoWhitespaceOrComments_StringPartJc(& ((* (thiz)).base.super), _thCxt);
      if(thiz->base.super.bStartScan) 
      { 
        
        thiz->idxLastIntegerNumber = -1;/*idxLastFloatNumber = -1;*/
        
        thiz->base.super.bStartScan = false;
      }
      if(thiz->base.super.begin == thiz->base.super.end) 
      { 
        
        thiz->base.super.bCurrentOk = false;/*error, because nothing to scan.*/
        
      }
    }
    { STACKTRC_LEAVE;
      return thiz->base.super.bCurrentOk;
    }
  }
  STACKTRC_LEAVE;
}


/**Test the result of scanning and set the scan Pos Ok, if current scanning was ok. If current scanning*/
bool scanOk_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanOk_StringPartScanJc");
  
  { 
    
    if(thiz->base.super.bCurrentOk) 
    { 
      
      thiz->beginScan = thiz->base.super.beginLast = /*? assignment*/thiz->base.super.begin;/*the scanOk-position is the begin of maximal part.*/
      
      thiz->base.super.bStartScan = true;/*set all idxLast... to 0*/
      
    }
    else 
    { 
      
      thiz->base.super.begin = thiz->base.super.beginLast = /*? assignment*/thiz->beginScan;/*return to the begin*/
      
    }/*if(report != null){ report.report(6," scanOk:" + beginMin + ".." + begin + ":" + (bCurrentOk ? "ok" : "error")); }*/
    
    
    bool  bOk = thiz->base.super.bCurrentOk;
    thiz->base.super.bCurrentOk = true;/*prepare to next try scanning*/
    
    { STACKTRC_LEAVE;
      return (bOk);
    }
  }
  STACKTRC_LEAVE;
}


/**scan next content, test the requested String.*/
struct StringPartScanJc_t* scan_Cs_StringPartScanJc(StringPartScanJc_s* thiz, CharSeqJc sTestP, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scan_Cs_StringPartScanJc");
  
  { 
    
    if(thiz->base.super.bCurrentOk) 
    { /*:      but the sTestP may contain only cEndOfText. end of text will be okay than.*/
      
      
      seekNoWhitespaceOrComments_StringPartJc(& ((* (thiz)).base.super), _thCxt);
      
      CharSeqJc sTest ; sTest;/*no initvalue*/
      
      int32  len = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/sTestP, cEndOfText_StringFunctionsJc, 0, _thCxt);
      
      int32  len2 = indexOf_Csci_StringFunctionsJc(/*J2C:static method call*/sTestP, cNoCidentifier_StringFunctionsJc, 0, _thCxt);
      
      bool  bTestToNoCidentifier = (len2 >= 0);
      
      bool  bTestToEndOfText = (len >= 0);
      if(bTestToNoCidentifier) 
      { 
        
        sTest = subSequence_CharSeqJc(sTestP/*J1cT2*/, 0, len2, _thCxt);
        len = len2;
      }
      else if(bTestToEndOfText) 
      { 
        
        sTest = subSequence_CharSeqJc(sTestP/*J1cT2*/, 0, len, _thCxt);
      }/*only one of the end symbols.*/
      
      else 
      { 
        
        len = length_CharSeqJc(sTestP/*J1cT2*/, _thCxt);
        sTest = sTestP;
      }
      
      char  cc;/*no initvalue*/
      if((thiz->base.super.begin + len) <= thiz->base.super.endMax && equals_CsiiCs_StringFunctionsJc(/*J2C:static method call*/thiz->base.super.content, thiz->base.super.begin, thiz->base.super.begin + len, sTest, _thCxt) && (bTestToEndOfText ? thiz->base.super.begin + len == thiz->base.super.end : (bTestToNoCidentifier ? (thiz->base.super.begin + len == thiz->base.super.end) || ((cc = /*? assignment*/charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin + len, _thCxt)) != '_' && !(cc >= '0' && cc <= '9') && !(cc >= 'A' && cc <= 'Z') && !(cc >= 'a' && cc <= 'z')) : true))) 
      { 
        
        thiz->base.super.begin += len;
      }
      else 
      { 
        
        thiz->base.super.bCurrentOk = false;
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/*** */
struct StringPartScanJc_t* scanQuotion_CsSSY_StringPartScanJc(StringPartScanJc_s* thiz, CharSeqJc sQuotionmarkStart, StringJc sQuotionMarkEnd, StringJc_Y* sResult, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanQuotion_CsSSY_StringPartScanJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return scanQuotion_CsSSYi_StringPartScanJc(thiz, sQuotionmarkStart, sQuotionMarkEnd, sResult, MAX_VALUE_IntegerJc, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/*** */
struct StringPartScanJc_t* scanQuotion_CsSSYi_StringPartScanJc(StringPartScanJc_s* thiz, CharSeqJc sQuotionmarkStart, StringJc sQuotionMarkEnd, StringJc_Y* sResult, int32 maxToTest, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanQuotion_CsSSYi_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
        ( scan_Cs_StringPartScanJc(thiz, sQuotionmarkStart, _thCxt)
        , lentoNonEscapedString_StringPartJc(& ((* (thiz)).base.super), sQuotionMarkEnd, maxToTest, _thCxt)
        );
      if(thiz->base.super.bCurrentOk) 
      { /*:TODO ...ToEndString, now use only 1 char in sQuotionMarkEnd*/
        


        StringJc _persistring4_1=NULL_StringJc; //J2C: temporary persistent Strings
        struct Part_StringPartJc_t* _temp4_1; /*J2C: temporary references for concatenation */
        struct Part_StringPartJc_t* _thCxtRef4_1 = null;
        if(sResult != null) sResult->data[0] = 
          ( _temp4_1= ( _thCxtRef4_1 = getCurrentPart_StringPartJc(& ((* (thiz)).base.super), _thCxt))
          , _persistring4_1 = persist_StringJc(toString_Part_StringPartJc(& ((* (_temp4_1)).base.object)/*J2cT1*/, _thCxt))
          )/*J2C:non-persistent*/;
        else setCurrentPart_StringPartJc(&thiz->base.super, &thiz->sLastString, _thCxt);
          fromEnd_StringPartJc(& ((* (thiz)).base.super));
          seekPos_StringPartJc(& ((* (thiz)).base.super), length_StringJc(sQuotionMarkEnd), _thCxt);
          
        releaseUserBuffer_ThreadContext_emC(_thCxtRef4_1, _thCxt);
        activateGC_ObjectJc(PTR_StringJc(_persistring4_1), null, _thCxt);
      }
      else thiz->base.super.bCurrentOk = false;
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans if it is a integer number, contains exclusively of digits 0..9*/
int64 scanDigits_StringPartScanJc(StringPartScanJc_s* thiz, bool bHex, int32 maxNrofChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanDigits_StringPartScanJc");
  
  { 
    
    if(thiz->base.super.bCurrentOk) 
    { 
      
      
      int64  nn = 0;
      
      bool  bCont = true;
      
      int32  pos = thiz->base.super.begin;
      
      int32  max = (thiz->base.super.end - pos) < maxNrofChars ? thiz->base.super.end : pos + maxNrofChars;
      do 
        { 
          
          if(pos < max) 
          { 
            
            
            char  cc = charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, pos, _thCxt);
            if(cc >= '0' && cc <= '9') nn = nn * (bHex ? 16 : 10) + (cc - '0');
            else if(bHex && cc >= 'a' && cc <= 'f') nn = nn * 16 + (cc - 'a' + 10);
            else if(bHex && cc >= 'A' && cc <= 'F') nn = nn * 16 + (cc - 'A' + 10);
            else bCont = false;
            if(bCont) 
            { 
              
              pos += 1;
            }
          }
          else bCont = false;
        }while(bCont);
      if(pos > thiz->base.super.begin) 
      { 
        
        thiz->base.super.begin = pos;
        { STACKTRC_LEAVE;
          return nn;
        }/*nLastIntegerNumber = nn;*/
        
      }
      else 
      { 
        
        thiz->base.super.bCurrentOk = false;/*scanning failed.*/
        
      }
    }
    { STACKTRC_LEAVE;
      return -1;
    }/*on error*/
    
  }
  STACKTRC_LEAVE;
}


/**Scanns a integer number as positiv value without sign. */
struct StringPartScanJc_t* scanPositivInteger_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanPositivInteger_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      int64  value = scanDigits_StringPartScanJc(thiz, false, MAX_VALUE_IntegerJc, _thCxt);
      if(thiz->base.super.bCurrentOk) 
      { 
        
        if(thiz->idxLastIntegerNumber < thiz->nLastIntegerNumber.head.length - 2) 
        { 
          
          thiz->nLastIntegerNumber.data[++thiz->idxLastIntegerNumber] = value;
          thiz->nLastIntegerSign.data[thiz->idxLastIntegerNumber] = false;
        }
        else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned integers", 0, __FILE__, __LINE__, _thCxt); return 0; };
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans an integer expression with possible sign char '-' at first.*/
struct StringPartScanJc_t* scanInteger_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanInteger_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      bool  bNegativValue = false;
      if(charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt) == '-') 
      { 
        
        bNegativValue = true;
        seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);
      }
      
      int64  value = scanDigits_StringPartScanJc(thiz, false, MAX_VALUE_IntegerJc, _thCxt);
      if(bNegativValue) 
      { 
        
        value = -value;
      }
      if(thiz->base.super.bCurrentOk) 
      { 
        
        if(thiz->idxLastIntegerNumber < thiz->nLastIntegerNumber.head.length - 2) 
        { 
          
          thiz->nLastIntegerNumber.data[++thiz->idxLastIntegerNumber] = value;
          thiz->nLastIntegerSign.data[thiz->idxLastIntegerNumber] = bNegativValue;
        }
        else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned integers", 0, __FILE__, __LINE__, _thCxt); return 0; };
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans a float number. The result is stored internally*/
struct StringPartScanJc_t* scanFloatNumber_b_StringPartScanJc(StringPartScanJc_s* thiz, bool cleanBuffer, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanFloatNumber_b_StringPartScanJc");
  
  { 
    
    if(cleanBuffer) 
    { 
      
      thiz->idxLastFloatNumber = -1;
    }
    scanFloatNumber_StringPartScanJc(thiz, _thCxt);
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans a float / double number. The result is stored internally*/
struct StringPartScanJc_t* scanFloatNumber_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanFloatNumber_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      bool  bNegativValue = false;
      
      char  cc;/*no initvalue*/
      if((cc = /*? assignment*/charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt)) == '-') 
      { 
        
        bNegativValue = true;
        seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);
      }
      
      int64  nInteger = scanDigits_StringPartScanJc(thiz, false, MAX_VALUE_IntegerJc, _thCxt);
      if(thiz->base.super.bCurrentOk) 
      { 
        
        if(bNegativValue) 
        { 
          
          nInteger = -nInteger;
        }
        scanFractionalNumber_StringPartScanJc(thiz, nInteger, bNegativValue, _thCxt);/*if(!scanFractionalNumber(nInteger).scanOk()){*/
        
        if(!thiz->base.super.bCurrentOk) 
        { /*:only integer number found, store as float number. It is ok.*/
          
          
          thiz->base.super.bCurrentOk = true;
          if(thiz->idxLastFloatNumber < thiz->nLastFloatNumber.head.length - 2) 
          { 
            
            thiz->nLastFloatNumber.data[++thiz->idxLastFloatNumber] = (double /*J2C_cast*/)nInteger;
          }
          else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned floats", 0, __FILE__, __LINE__, _thCxt); return 0; };
        }
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans the fractional part of a float / double number with given integer part and sign. */
struct StringPartScanJc_t* scanFractionalNumber_StringPartScanJc(StringPartScanJc_s* thiz, int64 nInteger, bool bNegative, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanFractionalNumber_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      int64  nFractional = 0;
      
      int32  nDivisorFract = 1;
      
      int32  nExponent = 0;
      
      char  cc;/*no initvalue*/
      
      bool  bNegativExponent = false;
      
      double  result;/*no initvalue*/
      
      int32  begin0 = thiz->base.super.begin;
      if(thiz->base.super.begin < thiz->base.super.endMax && charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt) == '.') 
      { 
        
        seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);/*over .*/
        
        
        while(thiz->base.super.begin < thiz->base.super.endMax && getCurrentChar_StringPartJc(& ((* (thiz)).base.super), _thCxt) == '0')
          { 
            
            seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);
            nDivisorFract *= 10;
          }/*int posFrac = begin;*/
          
        nFractional = scanDigits_StringPartScanJc(thiz, false, MAX_VALUE_IntegerJc, _thCxt);/*set bCurrentOk = false if there are no digits.*/
        
        if(thiz->base.super.bCurrentOk) 
        { }
        else if(nDivisorFract >= 10) 
        { 
          
          thiz->base.super.bCurrentOk = true;/*it is okay, at ex."9.0" is found. There are no more digits after "0".*/
          
          nFractional = 0;
        }
      }
      
      int32  nPosExponent = thiz->base.super.begin;
      if(thiz->base.super.bCurrentOk && nPosExponent < thiz->base.super.endMax && ((cc = /*? assignment*/charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt)) == 'e' || cc == 'E')) 
      { 
        
        seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);
        if((cc = /*? assignment*/charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt)) == '-') 
        { 
          
          bNegativExponent = true;
          seek_i_StringPartJc(& ((* (thiz)).base.super), 1, _thCxt);
          cc = charAt_CharSeqJc(thiz->base.super.content/*J1cT2*/, thiz->base.super.begin, _thCxt);
        }
        if(cc >= '0' && cc <= '9') 
        { 
          
          nExponent = (int32 /*J2C_cast*/)scanDigits_StringPartScanJc(thiz, false, MAX_VALUE_IntegerJc, _thCxt);/*set bCurrentOk if there are no digits*/
          
          if(!thiz->base.super.bCurrentOk) 
          { 
            
            nExponent = 0;
            ASSERT(/*J2C:static method call*/false);/*0..9 was tested!*/
            
          }
        }
        else 
        { /*: it isn't an exponent, but a String beginning with 'E' or 'e'.*/
          /*:This string is not a part of the float number.*/
          
          
          thiz->base.super.begin = nPosExponent;
          nExponent = 0;
        }
      }
      if(thiz->base.super.begin > begin0) 
      { /*:either fractional or exponent found*/
        
        
        result = nInteger;
        if(nFractional > 0) 
        { 
          
          
          double  fFrac = nFractional;
          
          while(fFrac >= 1.0)
            { 
              
              fFrac /= 10.0;
            }
          fFrac /= nDivisorFract;/*number of 0 after . until first digit.*/
          
          if(result < 0 || bNegative) 
          { /*:bNegativ is set on negative 0*/
            
            
            fFrac = -fFrac;/*Should be subtract if integer part is negative!*/
            
          }
          result += fFrac;
        }
        if(nExponent != 0) 
        { 
          
          if(bNegativExponent) 
          { 
            
            nExponent = -nExponent;
          }
          result *= pow_MathJc(/*J2C:static method call*/10, nExponent);
        }
        if(thiz->idxLastFloatNumber < thiz->nLastFloatNumber.head.length - 2) 
        { 
          
          thiz->nLastFloatNumber.data[++thiz->idxLastFloatNumber] = result;
        }
        else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned floats", 0, __FILE__, __LINE__, _thCxt); return 0; };
      }
      else 
      { /*:whetter '.' nor 'E' found:*/
        
        
        thiz->base.super.bCurrentOk = false;
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans a sequence of hex chars a hex number. No '0x' or such should be present. */
struct StringPartScanJc_t* scanHex_StringPartScanJc(StringPartScanJc_s* thiz, int32 maxNrofChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanHex_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      int64  value = scanDigits_StringPartScanJc(thiz, true, maxNrofChars, _thCxt);
      if(thiz->base.super.bCurrentOk) 
      { 
        
        if(thiz->idxLastIntegerNumber < thiz->nLastIntegerNumber.head.length - 2) 
        { 
          
          thiz->nLastIntegerNumber.data[++thiz->idxLastIntegerNumber] = value;
          thiz->nLastIntegerSign.data[thiz->idxLastIntegerNumber] = false;
        }
        else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned integers", 0, __FILE__, __LINE__, _thCxt); return 0; };
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans a integer number possible as hex, or decimal number.*/
struct StringPartScanJc_t* scanHexOrDecimal_StringPartScanJc(StringPartScanJc_s* thiz, int32 maxNrofChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanHexOrDecimal_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      
      int64  value;/*no initvalue*/
      if(equals_CsiiCs_StringFunctionsJc(/*J2C:static method call*/thiz->base.super.content, thiz->base.super.begin, thiz->base.super.begin + 2, z_StringJc("0x"), _thCxt)) 
      { 
        
        seek_i_StringPartJc(& ((* (thiz)).base.super), 2, _thCxt);
        value = scanDigits_StringPartScanJc(thiz, true, maxNrofChars, _thCxt);
      }
      else 
      { 
        
        value = scanDigits_StringPartScanJc(thiz, false, maxNrofChars, _thCxt);
      }
      if(thiz->base.super.bCurrentOk) 
      { 
        
        if(thiz->idxLastIntegerNumber < thiz->nLastIntegerNumber.head.length - 2) 
        { 
          
          thiz->nLastIntegerNumber.data[++thiz->idxLastIntegerNumber] = value;
          thiz->nLastIntegerSign.data[thiz->idxLastIntegerNumber] = false;
        }
        else { throw_s0Jc(ident_ParseExceptionJc, "to much scanned integers", 0, __FILE__, __LINE__, _thCxt); return 0; };
      }
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Scans an identifier with start characters A..Z, a..z, _ and all characters 0..9 inside.*/
struct StringPartScanJc_t* scanIdentifier_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanIdentifier_StringPartScanJc");
  
  { 
    
    { STACKTRC_LEAVE;
      return scanIdentifier_SS_StringPartScanJc(thiz, null_StringJc /*J2C: mem assignment*/, null_StringJc /*J2C: mem assignment*/, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}


/**Scans an identifier with start characters A..Z, a..z, _ and all characters 0..9 inside,*/
struct StringPartScanJc_t* scanIdentifier_SS_StringPartScanJc(StringPartScanJc_s* thiz, StringJc additionalStartChars, StringJc additionalChars, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("scanIdentifier_SS_StringPartScanJc");
  
  { 
    
    if(scanEntry_StringPartScanJc(thiz, _thCxt)) 
    { 
      
      lentoIdentifier_CsCs_StringPartJc(& ((* (thiz)).base.super), additionalStartChars, additionalChars, _thCxt);
      if(thiz->base.super.bFound) 
      { setCurrentPart_StringPartJc(&thiz->base.super, &thiz->sLastString, _thCxt);

        thiz->base.super.begin = thiz->base.super.end;/*after identifier.*/
        
      }
      else 
      { 
        
        thiz->base.super.bCurrentOk = false;
      }
      thiz->base.super.end = thiz->base.super.endLast;/*revert the change of length, otherwise end = end of identifier.*/
      
    }
    { STACKTRC_LEAVE;
      return thiz;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns the last scanned integer sign. It is the result of the methods*/
bool getLastScannedIntegerSign_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLastScannedIntegerSign_StringPartScanJc");
  
  { 
    
    if(thiz->idxLastIntegerNumber >= 0) 
    { 
      
      { STACKTRC_LEAVE;
        return thiz->nLastIntegerSign.data[thiz->idxLastIntegerNumber];
      }
    }
    else { throw_s0Jc(ident_ParseExceptionJc, "no integer number scanned.", 0, __FILE__, __LINE__, _thCxt); return 0; };
  }
  STACKTRC_LEAVE;
}


/**Returns the last scanned integer number. It is the result of the methods*/
int64 getLastScannedIntegerNumber_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLastScannedIntegerNumber_StringPartScanJc");
  
  { 
    
    if(thiz->idxLastIntegerNumber >= 0) 
    { 
      
      { STACKTRC_LEAVE;
        return thiz->nLastIntegerNumber.data[thiz->idxLastIntegerNumber--];
      }
    }
    else { throw_s0Jc(ident_ParseExceptionJc, "no integer number scanned.", 0, __FILE__, __LINE__, _thCxt); return 0; };
  }
  STACKTRC_LEAVE;
}


/**Returns the last scanned float number.*/
double getLastScannedFloatNumber_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLastScannedFloatNumber_StringPartScanJc");
  
  { 
    
    if(thiz->idxLastFloatNumber >= 0) 
    { 
      
      { STACKTRC_LEAVE;
        return thiz->nLastFloatNumber.data[thiz->idxLastFloatNumber--];
      }
    }
    else { throw_s0Jc(ident_ParseExceptionJc, "no float number scanned.", 0, __FILE__, __LINE__, _thCxt); return 0; };
  }
  STACKTRC_LEAVE;
}


/**Returns the part of the last scanning yet only from {@link #scanIdentifier()}
 * TODO should be persistent.
 */
struct Part_StringPartJc_t* getLastScannedString_StringPartScanJc(StringPartScanJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLastScannedString_StringPartScanJc");

  { 

    { STACKTRC_LEAVE;
    return &thiz->sLastString;
    }
  }
  STACKTRC_LEAVE;
}


/**Returns the part of the last scanning yet only from {@link #scanIdentifier()}*/
struct Part_StringPartJc_t* getLastScannedPart_StringPartScanJc(StringPartScanJc_s* thiz, int nr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("getLastScannedString_StringPartScanJc");

  { 

    { STACKTRC_LEAVE;
    return &thiz->sLastString;
    }
  }
  STACKTRC_LEAVE;
}


/**Closes the work. This routine should be called if the StringPart is never used, */
void close_StringPartScanJc_F(StringPartJc_s* ithis, ThCxt* _thCxt)
{ StringPartScanJc_s* thiz = (StringPartScanJc_s*)ithis;
  
  STACKTRC_TENTRY("close_StringPartScanJc_F");
  
  { 
    
    close_StringPartJc((&thiz->base.super), _thCxt);
    //thiz->sLastString = null_CharSeqJc /*J2C: mem assignment*/;
    thiz->beginScan = 0;
    thiz->base.super.bCurrentOk = thiz->base.super.bFound = /*? assignment*/false;
  }
  STACKTRC_LEAVE;
}

#ifdef DEF_ClassJc_Vtbl
/*J2C: dynamic call variant of the override-able method: */
void close_StringPartScanJc(StringPartJc_s* ithis, ThCxt* _thCxt)
{ Vtbl_StringPartJc const* mtbl = (Vtbl_StringPartJc const*)getVtbl_ObjectJc(&ithis->base.object, sign_Vtbl_StringPartJc);
  mtbl->close((StringPartJc_s*)ithis, _thCxt);
}
#endif


//casting admissible because static operation only used in folllowing Vtbl in this compilation unit.
static int32 length_StringPartJc_i_CharSeqObjJc(CharSeqObjJc const* ithiz, ThCxt* _thCxt){ 
  return length_StringPartJc((StringPartJc_s*)ithiz, _thCxt); 
}





#ifdef DEF_ClassJc_Vtbl
/**J2C: Reflections and Method-table *************************************************/
const VtblDef_StringPartScanJc mtblStringPartScanJc = {
{ { sign_Vtbl_StringPartScanJc //J2C: Head of methodtable of StringPartScanJc
  , (struct Size_Vtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Vtbl_StringPartJc //J2C: Head of methodtable of StringPartJc
    , (struct Size_Vtbl_t*)((2 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :StringPartJc:
  , getLineAndColumn_StringPartJc_F //getLineAndColumn
  , close_StringPartScanJc_F //close
    //J2C: The superclass's methodtable: 
  , { { sign_Vtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
      , (struct Size_Vtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
      }
      //J2C: Dynamic methods of the class :ObjectJc:
    , clone_ObjectJc_F //clone
    , equals_ObjectJc_F //equals
    , finalize_ObjectJc_F //finalize
    , hashCode_ObjectJc_F //hashCode
    , toString_StringPartJc_F //toString
    }
    //J2C: The interface's methodtable: 
    //J2C: Vtbl-interfaces of :StringPartScanJc: */
  , { { sign_Vtbl_CharSeqJc //J2C: Head of methodtable of CharSeqJc
      , (struct Size_Vtbl_t*)((3 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
      }
      //J2C: Dynamic methods of the class :CharSeqJc:
    , length_StringPartJc_i_CharSeqObjJc //length
    , charAt_i_StringPartJc //charAt
    , subSequence_ii_StringPartJc //subSequence
    }
  , { { sign_Vtbl_ComparableJc //J2C: Head of methodtable of ComparableJc
      , (struct Size_Vtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
      }
    }
  }
}, { signEnd_Vtbl_ObjectJc, null } }; //Vtbl
#endif //#ifdef DEF_ClassJc_Vtbl



#ifdef DEF_REFLECTION_NO
#define REFLECTION_Fields_StringPartScanJc null
#define REFLECTION_Methods_StringPartScanJc null
#define REFLECTION_Superclasses_StringPartScanJc null
#define REFLECTION_Interfaces_StringPartScanJc null

#elif defined(DEF_REFLECTION_SIMPLE)

ClassJc const refl_StringPartScanJc_s = INIZsuper_ClassJc(refl_StringPartScanJc_s, "StringPartScanJc", &refl_StringPartJc_s);



#elif defined(DEF_REFLECTION_FULL)

#define REFLECTION_Fields_StringPartScanJc (FieldJc_Y const*)&refl_Fields_StringPartScanJc_s
#define REFLECTION_Methods_StringPartScanJc null
#define REFLECTION_Superclasses_StringPartScanJc &superclasses_StringPartScanJc_s.head.object
#define REFLECTION_Interfaces_StringPartScanJc null


 extern_C struct ClassJc_t const refl_StringPartJc_s;
 static struct superClasses_StringPartScanJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxVtblJc data[1];
 }superclasses_StringPartScanJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxVtblJc, 1, OBJTYPE_ClassOffset_idxVtblJc, null, null)
 , { {&refl_StringPartJc_s, OFFSET_Vtbl(Vtbl_StringPartScanJc, StringPartJc) }
   }
 };

extern_C struct ClassJc_t const refl_StringPartScanJc_s;
extern_C struct ClassJc_t const refl_CharSeqJc;
const struct Reflection_Fields_StringPartScanJc_s_t
{ ObjectArrayJc head; FieldJc data[7];
} refl_Fields_StringPartScanJc_s =
{ CONST_ObjectArrayJc(FieldJc, 7, OBJTYPE_FieldJc, null, &refl_Fields_StringPartScanJc_s)
, {
     { "beginScan"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->beginScan) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "nLastIntegerNumber"
    , 5 //nrofArrayElements
    , REFLECTION_int64
    , 8 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc |kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->nLastIntegerNumber) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "nLastIntegerSign"
    , 5 //nrofArrayElements
    , REFLECTION_bool
    , 4 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc |kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->nLastIntegerSign) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "idxLastIntegerNumber"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->idxLastIntegerNumber) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "nLastFloatNumber"
    , 5 //nrofArrayElements
    , REFLECTION_double
    , 8 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc |kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->nLastFloatNumber) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "idxLastFloatNumber"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->idxLastFloatNumber) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
   , { "sLastString"
    , 0 //nrofArrayElements
    , &refl_CharSeqJc
    , kEnhancedReference_Modifier_reflectJc /*c*/ //bitModifiers
    , (int16)((intptr_t)(&((StringPartScanJc_s*)(0x1000))->sLastString) - (intptr_t)(StringPartScanJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_StringPartScanJc_s
    }
} };



const ClassJc refl_StringPartScanJc_s = 
{ INIZ_ObjectJc(refl_StringPartScanJc_s, refl_ClassJc, ID_refl_ClassJc)
, "StringPartScanJc_s"
,  0 //position of ObjectJc
, sizeof(StringPartScanJc_s)
, REFLECTION_Fields_StringPartScanJc
, REFLECTION_Methods_StringPartScanJc
, REFLECTION_Superclasses_StringPartScanJc
, REFLECTION_Interfaces_StringPartScanJc
, 0    //modifiers
, &mtblStringPartScanJc.mtbl.head
};
#endif //DEF_REFlECTION_FULL


#endif //#ifdef DEF_ObjectJcpp_REFLECTION  //only possible with reflection because Vtable is need

