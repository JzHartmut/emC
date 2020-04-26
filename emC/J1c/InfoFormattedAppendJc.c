/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "emC/J1c/InfoFormattedAppendJc.h"
#include <string.h>  //because using memset()
#include <emC/Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept


/* J2C: Forward declaration of struct ***********************************************/

/**Interface for a unique kind to add informations to a given StringFormatter instance.
See also {@link InfoAppend}.

@author Hartmut Schorrig

*/


const char sign_Vtbl_InfoFormattedAppendJc[] = "InfoFormattedAppendJc"; //to mark method tables of all implementations

StringJc version_InfoFormattedAppendJc = CONST_z_StringJc("2015-03-08"); //J2C:static StringJc
/*J2C: dynamic call variant of the override-able method: */
void infoFormattedAppend_InfoFormattedAppendJc(ObjectJc* ithis, struct StringFormatterJc_t* u, ThCxt* _thCxt)
{ Vtbl_InfoFormattedAppendJc const* mtbl = (Vtbl_InfoFormattedAppendJc const*)getVtbl_ObjectJc(ithis, sign_Vtbl_InfoFormattedAppendJc);
  mtbl->infoFormattedAppend(ithis, u, _thCxt);
}

 extern_C struct ClassJc_t const refl_ObjectJc;
 static struct superClasses_InfoFormattedAppendJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxVtblJc data[1];
 }superclasses_InfoFormattedAppendJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxVtblJc, 1, OBJTYPE_ClassOffset_idxVtblJc, null, null)
 , { {&refl_ObjectJc, 0 /*J2C: no Vtbl*/ }
   }
 };

extern_C struct ClassJc_t const refl_InfoFormattedAppendJc_s;
extern_C struct ClassJc_t const refl_StringJc;
const struct Reflection_Fields_InfoFormattedAppendJc_s_t
{ ObjectArrayJc head; FieldJc data[1];
} refl_Fields_InfoFormattedAppendJc_s =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &refl_Fields_InfoFormattedAppendJc_s)
, {
     { "version"
    , 0 //nrofArrayElements
    , &refl_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_InfoFormattedAppendJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((intptr_t)(&version_InfoFormattedAppendJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &refl_InfoFormattedAppendJc_s
    }
} };
const ClassJc refl_InfoFormattedAppendJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &refl_ObjectJc, &refl_ClassJc) 
, "InfoFormattedAppendJc_s"
,  0 //position of ObjectJc
, sizeof(InfoFormattedAppendJc_s)
, (FieldJc_Y const*)&refl_Fields_InfoFormattedAppendJc_s
, null //method
, (ClassOffset_idxVtblJcARRAY*)&superclasses_InfoFormattedAppendJc_s //superclass
, null //interfaces
, 0    //modifiers
};

/**Helper for simple application in toString().
<pre>
(at)Override public String toString(){ return (new PrepareToString(this)).ret; }
</pre>
@author hartmut

*/


const char sign_Vtbl_PrepareToString_InfoFormattedAppendJc[] = "PrepareToString_InfoFormattedAppendJc"; //to mark method tables of all implementations

typedef struct VtblDef_PrepareToString_InfoFormattedAppendJc_t { Vtbl_PrepareToString_InfoFormattedAppendJc mtbl; VtblHeadJc end; } VtblDef_PrepareToString_InfoFormattedAppendJc;
 extern VtblDef_PrepareToString_InfoFormattedAppendJc const mtblPrepareToString_InfoFormattedAppendJc;


/**J2C: Reflections and Method-table *************************************************/
const VtblDef_PrepareToString_InfoFormattedAppendJc mtblPrepareToString_InfoFormattedAppendJc = {
{ { sign_Vtbl_PrepareToString_InfoFormattedAppendJc //J2C: Head of methodtable of PrepareToString_InfoFormattedAppendJc
  , (struct Size_Vtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Vtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Vtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :ObjectJc:
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Vtbl_ObjectJc, null } }; //Vtbl


 extern_C struct ClassJc_t const refl_ObjectJc;
 static struct superClasses_PrepareToString_InfoFormattedAppendJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxVtblJc data[1];
 }superclasses_PrepareToString_InfoFormattedAppendJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxVtblJc, 1, OBJTYPE_ClassOffset_idxVtblJc, null, null)
 , { {&refl_ObjectJc, OFFSET_Vtbl(Vtbl_PrepareToString_InfoFormattedAppendJc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const refl_PrepareToString_InfoFormattedAppendJc_s;
extern_C struct ClassJc_t const refl_StringJc;
const struct Reflection_Fields_PrepareToString_InfoFormattedAppendJc_s_t
{ ObjectArrayJc head; FieldJc data[1];
} refl_Fields_PrepareToString_InfoFormattedAppendJc_s =
{ CONST_ObjectArrayJc(FieldJc, 1, OBJTYPE_FieldJc, null, &refl_Fields_PrepareToString_InfoFormattedAppendJc_s)
, {
     { "ret"
    , 0 //nrofArrayElements
    , &refl_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ //bitModifiers
    , (int16)((intptr_t)(&((PrepareToString_InfoFormattedAppendJc_s*)(0x1000))->ret) - (intptr_t)(PrepareToString_InfoFormattedAppendJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_PrepareToString_InfoFormattedAppendJc_s
    }
} };
const ClassJc refl_PrepareToString_InfoFormattedAppendJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &refl_ObjectJc, &refl_ClassJc) 
, "PrepareToString_In_ppendJc_s"
,  0 //position of ObjectJc
, sizeof(PrepareToString_InfoFormattedAppendJc_s)
, (FieldJc_Y const*)&refl_Fields_PrepareToString_InfoFormattedAppendJc_s
, null //method
, (ClassOffset_idxVtblJcARRAY*)&superclasses_PrepareToString_InfoFormattedAppendJc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblPrepareToString_InfoFormattedAppendJc.mtbl.head
};
