/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "J1c/SpecialCharStringsJc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept
#include "Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/
struct StringBuilderJc_t;

/**This class helps to handle with special chars in Strings.
In Java all Strings are encoded with UTF-16. But in Files the encoding is mostly implemented
with 1 byte per char. Different encodings are used, ISO-8859-1 is typical for windows systems,
but also UTF-8. To write special chars in any desired encoding, some systems are ordinary.
In programming, the backslash is used to switch to special char codes, typically \\n for new line.
In XML the system of special character codes starts with an ampersand, typically
&amp; for the &-character itself.

This class supports the backslash-philosophy to indicate special character codes.
@author JcHartmut

*/


const char sign_Mtbl_SpecialCharStringsJc[] = "SpecialCharStringsJc"; //to mark method tables of all implementations

typedef struct MtblDef_SpecialCharStringsJc_t { Mtbl_SpecialCharStringsJc mtbl; MtblHeadJc end; } MtblDef_SpecialCharStringsJc;
 extern MtblDef_SpecialCharStringsJc const mtblSpecialCharStringsJc;
const char cStartOfText_SpecialCharStringsJc = (char)(0x2);
const char cEndOfText_SpecialCharStringsJc = (char)(0x3);

/*Constructor *//**J2C: autogenerated as default constructor. */
struct SpecialCharStringsJc_t* ctorO_SpecialCharStringsJc(ObjectJc* othis, ThCxt* _thCxt)
{ SpecialCharStringsJc_s* ythis = (SpecialCharStringsJc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_SpecialCharStringsJc");
  checkConsistence_ObjectJc(othis, sizeof(SpecialCharStringsJc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_SpecialCharStringsJc_s, sizeof(SpecialCharStringsJc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return ythis;
}



/**Resolves the given String containing some switch chars in form of backslash*/
StringJc resolveCircumScription_SpecialCharStringsJc(/*static*/ StringJc src, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("resolveCircumScription_SpecialCharStringsJc");
  
  { 
    StringJc sResult = NULL_StringJc; 
    char cSwitch = '\\'; 
    int32 posSwitch; 
    
    
    /*no initvalue*/
    cSwitch = '\\';
    posSwitch = indexOf_C_StringJc(src, cSwitch);
    if(posSwitch < 0) 
    { 
      
      sResult = src/*J2C:non-persistent*/;
    }
    else 
    { //:escape character is found before end
      
      struct StringBuilderJc_t* sbReturn = null; 
      
      ObjectJc *newObj2_1=null; //J2C: temporary Objects for new operations
      StringJc _persistring2_1=NULL_StringJc; //J2C: temporary persistent Strings
      
      
      sbReturn = ctorO_s_StringBuilderJc(/*static*/(newObj2_1 = alloc_ObjectJc(sizeof_StringBuilderJc, 0, _thCxt)), src, _thCxt);
      
      while(posSwitch >= 0)
        { 
          char cNext; 
          int32 iChangedChar = 0; 
          
          StringJc _temp3_1; //J2C: temporary references for concatenation
          
          if(posSwitch < length_StringBuilderJc(sbReturn) - 1) 
          { 
            
            deleteCharAt_StringBuilderJc(sbReturn, posSwitch, _thCxt);
          }
          cNext = charAt_StringBuilderJc(sbReturn, posSwitch, _thCxt);
          /*no initvalue*/
          if((iChangedChar = /*? assignment*/indexOf_C_StringJc(zI_StringJc("snrtfb",6), cNext)) >= 0) 
          { 
            
            setCharAt_StringBuilderJc(sbReturn, posSwitch, charAt_StringJc(zI_StringJc(" \n\r\t\f\b",6), iChangedChar), _thCxt);
          }
          else if(cNext == 'a') 
          { //: \a means end of file, coded inside with 4 = EOT (end of transmission).
            
            
            setCharAt_StringBuilderJc(sbReturn, posSwitch, cStartOfText_SpecialCharStringsJc, _thCxt);
          }
          else if(cNext == 'e') 
          { //: \e means end of file, coded inside with 4 = EOT (end of transmission).
            
            
            setCharAt_StringBuilderJc(sbReturn, posSwitch, cEndOfText_SpecialCharStringsJc, _thCxt);
          }
          else 
          { }
          posSwitch = 
          ( _temp3_1= toString_StringBuilderJc(& ((* (sbReturn)).base.object), _thCxt)
          , indexOf_CI_StringJc(_temp3_1, cSwitch, posSwitch + 1)
          );
        }
      sResult = _persistring2_1 = toStringPersist_StringBuilderJc(& ((* (sbReturn)).base.object), _thCxt)/*J2C:non-persistent*/;
      activateGC_ObjectJc(newObj2_1, null, _thCxt);
      activateGC_ObjectJc(PTR_StringJc(_persistring2_1), null, _thCxt);
    }
    { STACKTRC_LEAVE;
      return sResult;
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_SpecialCharStringsJc mtblSpecialCharStringsJc = {
{ { sign_Mtbl_SpecialCharStringsJc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_SpecialCharStringsJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_SpecialCharStringsJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_SpecialCharStringsJc, ObjectJc) }
   }
 };

extern struct ClassJc_t const reflection_SpecialCharStringsJc_s;
const struct Reflection_Fields_SpecialCharStringsJc_s_t
{ ObjectArrayJc head; FieldJc data[2];
} reflection_Fields_SpecialCharStringsJc_s =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_SpecialCharStringsJc_s)
, {
     { "cStartOfText"
    , 0 //nrofArrayElements
    , REFLECTION_char
    , 4 << kBitPrimitiv_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&cStartOfText_SpecialCharStringsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&cStartOfText_SpecialCharStringsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_SpecialCharStringsJc_s
    }
   , { "cEndOfText"
    , 0 //nrofArrayElements
    , REFLECTION_char
    , 4 << kBitPrimitiv_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&cEndOfText_SpecialCharStringsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&cEndOfText_SpecialCharStringsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_SpecialCharStringsJc_s
    }
} };
const ClassJc reflection_SpecialCharStringsJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "SpecialCharStringsJc_s"
,  0 //position of ObjectJc
, sizeof(SpecialCharStringsJc_s)
, (FieldJcArray const*)&reflection_Fields_SpecialCharStringsJc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_SpecialCharStringsJc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblSpecialCharStringsJc.mtbl.head
};
