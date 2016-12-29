/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "Ipc2c/InterProcessCommRx_ifc_Ipc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept
#include "Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/

/**This is the base class of a callback for {@link InterProcessCommRxThread}.
It is used to implement the callback on received data.
For C-Usage an anonymous implementation can be build with the macro <code>IFC_IMPL_dataMETHOD1_ObjectJc(TYPE, METHOD)</code>
with a simple given C implementation of the {@link #execRxData(byte[], int, Address_InterProcessComm)} method. 

@author Hartmut Schorrig

*/


const char sign_Mtbl_InterProcessCommRx_ifc_Ipc[] = "InterProcessCommRx_ifc_Ipc"; //to mark method tables of all implementations

StringJc version_InterProcessCommRx_ifc_Ipc = CONST_z_StringJc("2015-06-13"); //J2C:static StringJc

/*Constructor *//**J2C: autogenerated as default constructor. */
struct InterProcessCommRx_ifc_Ipc_t* ctorO_InterProcessCommRx_ifc_Ipc(ObjectJc* othis, ThCxt* _thCxt)
{ InterProcessCommRx_ifc_Ipc_s* thiz = (InterProcessCommRx_ifc_Ipc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_InterProcessCommRx_ifc_Ipc");
  checkConsistence_ObjectJc(othis, sizeof(InterProcessCommRx_ifc_Ipc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_InterProcessCommRx_ifc_Ipc_s, sizeof(InterProcessCommRx_ifc_Ipc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}



/**Callback routine for received data.*/
/*J2C: dynamic call variant of the override-able method: */
void execRxData_InterProcessCommRx_ifc_Ipc(InterProcessCommRx_ifc_Ipc_s* thiz, PtrVal_int8 buffer, int32 nrofBytesReceived, struct Address_InterProcessComm_t* sender, ThCxt* _thCxt)
{ Mtbl_InterProcessCommRx_ifc_Ipc const* mtbl = (Mtbl_InterProcessCommRx_ifc_Ipc const*)getMtbl_ObjectJc(&thiz->base.object, sign_Mtbl_InterProcessCommRx_ifc_Ipc);
  mtbl->execRxData(thiz, buffer, nrofBytesReceived, sender, _thCxt);
}

 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_InterProcessCommRx_ifc_Ipc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_InterProcessCommRx_ifc_Ipc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, 0 /*J2C: no Mtbl*/ }
   }
 };

extern_C struct ClassJc_t const reflection_InterProcessCommRx_ifc_Ipc_s;
extern_C struct ClassJc_t const reflection_ObjectJc;
extern_C struct ClassJc_t const reflection_StringJc;
const struct Reflection_Fields_InterProcessCommRx_ifc_Ipc_s_t
{ ObjectArrayJc head; FieldJc data[2];
} reflection_Fields_InterProcessCommRx_ifc_Ipc_s =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_InterProcessCommRx_ifc_Ipc_s)
, {
     { "data"
    , 0 //nrofArrayElements
    , &reflection_ObjectJc
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((InterProcessCommRx_ifc_Ipc_s*)(0x1000))->data) - (int32)(InterProcessCommRx_ifc_Ipc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_InterProcessCommRx_ifc_Ipc_s
    }
   , { "version"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_InterProcessCommRx_ifc_Ipc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&version_InterProcessCommRx_ifc_Ipc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_InterProcessCommRx_ifc_Ipc_s
    }
} };
const ClassJc reflection_InterProcessCommRx_ifc_Ipc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "InterProcessCommRx_ifc_Ipc_s"
,  0 //position of ObjectJc
, sizeof(InterProcessCommRx_ifc_Ipc_s)
, (FieldJc_Y const*)&reflection_Fields_InterProcessCommRx_ifc_Ipc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_InterProcessCommRx_ifc_Ipc_s //superclass
, null //interfaces
, 0    //modifiers
};
