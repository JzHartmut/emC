/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include <emC/Inspc/J2c/Inspector_Inspc.h>
#include <string.h>  //because using memset()
#include <emC/Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
#include <emC/Jc/StringJc.h>  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/


const char sign_Vtbl_Inspector_Inspc[] = "Inspector_Inspc"; //to mark method tables of all implementations

typedef struct VtblDef_Inspector_Inspc_t { Vtbl_Inspector_Inspc mtbl; VtblHeadJc end; } VtblDef_Inspector_Inspc;
 extern VtblDef_Inspector_Inspc const mtblInspector_Inspc;
StringJc version_Inspector_Inspc = CONST_z_StringJc("2015-08-05"); //J2C:static StringJc
Inspector_InspcREF singleton_Inspector_Inspc = NULL_REFJc; //{ null, 0 };

/*Constructor */
struct Inspector_Inspc_t* ctorO_Inspector_Inspc(ObjectJc* othis, StringJc commOwnAddr, ThCxt* _thCxt)
{ Inspector_Inspc_s* thiz = (Inspector_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_Inspector_Inspc");
  //PRINTX_OPEN(0, "T:\\Inspc.debug0.txt");
  //PRINTX_OPEN(1, "T:\\Inspc.debug1.txt");
  checkConsistence_ObjectJc(othis, sizeof(Inspector_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &refl_Inspector_Inspc, sizeof(Inspector_Inspc_s));  
  //j2c: Initialize all class variables:
  {
    //J2C: constructor for embedded element-ObjectJc
      init_ObjectJc(&(thiz->classContent.base.object), sizeof(thiz->classContent), 0); 
      ctorO_ClassContent_Inspc(/*J2C:static method call*/&(thiz->classContent.base.object), _thCxt);
    //J2C: constructor for embedded element-ObjectJc
      init_ObjectJc(&(thiz->cmdExecuter.base.object), sizeof(thiz->cmdExecuter), 0); 
      ctorO_CmdExecuter_Inspc(/*J2C:static method call*/&(thiz->cmdExecuter.base.object), & ((thiz->classContent).base.CmdConsumer_ifc_Inspc), _thCxt);
  }
  { 
    
    //J2C: constructor for embedded element-ObjectJc
    init_ObjectJc(&(thiz->comm.base.object), sizeof(thiz->comm), 0); 
    ctorO_Comm_Inspc(/*J2C:static method call*/&(thiz->comm.base.object), commOwnAddr, & (thiz->cmdExecuter), _thCxt);
    completeConstruction_CmdExecuter_Inspc_F(& (thiz->cmdExecuter), & (thiz->comm), _thCxt);
    setAnswerComm_XX_ClassContent_Inspc(&((& ((thiz->classContent).base.CmdConsumer_ifc_Inspc))->base.object), & ((thiz->cmdExecuter).base.AnswerComm_ifc_Inspc), _thCxt);
    if(REFJc(singleton_Inspector_Inspc)== null) 
    { 
      
      SETREFJc(singleton_Inspector_Inspc, thiz, Inspector_Inspc_s);
    }
    setInitialized_ObjectJc(othis);
    
  }
  STACKTRC_LEAVE;
  return thiz;
}




void dtor_Inspector_Inspc(Inspector_Inspc_s* thiz)
{ Comm_Inspc_s* comm = &thiz->comm;
  shutdown_Comm_Inspc(comm, null);
  dtor_Comm_Inspc(&thiz->comm, null);
  //PRINTX_CLOSE(1);
  //PRINTX_CLOSE(2);
}

/**Returns the first instance of the Inspector in this application. Usual only one instance is used,*/
struct Inspector_Inspc_t* get_Inspector_Inspc(/*J2C:static method*/ ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("get_Inspector_Inspc");
  
  { 
    
    { STACKTRC_LEAVE;
      return REFJc (singleton_Inspector_Inspc);
    }
  }
  STACKTRC_LEAVE;
}


/**Start the execution. */
void start_Inspector_Inspc_F(Inspector_Inspc_s* thiz, struct ClassJc_t const* rootClazz, MemSegmJc rootAddr, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("start_Inspector_Inspc_F");

  { 

    setRootObject_ClassAddr_ClassContent_Inspc(& (thiz->classContent), rootClazz, rootAddr, _thCxt);
    start_Comm_Inspc(& (thiz->comm), _thCxt);
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void start_ClassAddr_Inspector_Inspc(Inspector_Inspc_s* thiz, struct ClassJc_t const* rootClazz, MemSegmJc rootAddr, ThCxt* _thCxt)
{ Vtbl_Inspector_Inspc const* mtbl = (Vtbl_Inspector_Inspc const*)getVtbl_ObjectJc(&thiz->base.object, sign_Vtbl_Inspector_Inspc);
mtbl->start(thiz, rootClazz, rootAddr, _thCxt);
}



/*J2C: dynamic call variant of the override-able method: */
void start_Inspector_Inspc(Inspector_Inspc_s* thiz, struct ObjectJc_t* rootObj, ThCxt* _thCxt)
{ Vtbl_Inspector_Inspc const* mtbl = (Vtbl_Inspector_Inspc const*)getVtbl_ObjectJc(&thiz->base.object, sign_Vtbl_Inspector_Inspc);
  ClassJc const* rootClazz = getClass_ObjectJc(rootObj);
  MemSegmJc rootAddr;
  setAddrSegm_MemSegmJc(rootAddr, rootObj, 0);
  mtbl->start(thiz, rootClazz, rootAddr, _thCxt);
}


/**Shutdown the communication, close the thread. This routine should be called */
void shutdown_Inspector_Inspc_F(Inspector_Inspc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("shutdown_Inspector_Inspc_F");
  
  { 
    
    shutdown_Comm_Inspc_F(& (thiz->comm), _thCxt);
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void shutdown_Inspector_Inspc(Inspector_Inspc_s* thiz, ThCxt* _thCxt)
{ Vtbl_Inspector_Inspc const* mtbl = (Vtbl_Inspector_Inspc const*)getVtbl_ObjectJc(&thiz->base.object, sign_Vtbl_Inspector_Inspc);
  mtbl->shutdown(thiz, _thCxt);
}



/**J2C: Reflections and Method-table *************************************************/
const VtblDef_Inspector_Inspc mtblInspector_Inspc = {
{ { sign_Vtbl_Inspector_Inspc //J2C: Head of methodtable of Inspector_Inspc
  , (struct Size_Vtbl_t*)((2 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: Dynamic methods of the class :Inspector_Inspc:
, start_Inspector_Inspc_F //start
, shutdown_Inspector_Inspc_F //shutdown
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
 static struct superClasses_Inspector_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxVtblJc data[1];
 }superclasses_Inspector_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxVtblJc, 1, OBJTYPE_ClassOffset_idxVtblJc, null, null)
 , { {&refl_ObjectJc, OFFSET_Vtbl(Vtbl_Inspector_Inspc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const refl_Inspector_Inspc;
extern_C struct ClassJc_t const refl_ClassContent_Inspc_s;
extern_C struct ClassJc_t const refl_CmdExecuter_Inspc_s;
extern_C struct ClassJc_t const refl_Comm_Inspc_s;
extern_C struct ClassJc_t const refl_Inspector_Inspc;
extern_C struct ClassJc_t const refl_StringJc;
const struct Reflection_Fields_Inspector_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[5];
} refl_Fields_Inspector_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 5, OBJTYPE_FieldJc, null, &refl_Fields_Inspector_Inspc_s)
, {
     { "classContent"
    , 0 //nrofArrayElements
    , &refl_ClassContent_Inspc_s
    , kEmbedded_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((Inspector_Inspc_s*)(0x1000))->classContent) - (intptr_t)(Inspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_Inspector_Inspc
    }
   , { "cmdExecuter"
    , 0 //nrofArrayElements
    , &refl_CmdExecuter_Inspc_s
    , kEmbedded_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((Inspector_Inspc_s*)(0x1000))->cmdExecuter) - (intptr_t)(Inspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_Inspector_Inspc
    }
   , { "comm"
    , 0 //nrofArrayElements
    , &refl_Comm_Inspc_s
    , kEmbedded_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((Inspector_Inspc_s*)(0x1000))->comm) - (intptr_t)(Inspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &refl_Inspector_Inspc
    }
   , { "version"
    , 0 //nrofArrayElements
    , &refl_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_Inspector_Inspc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((intptr_t)(&version_Inspector_Inspc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &refl_Inspector_Inspc
    }
   , { "singleton"
    , 0 //nrofArrayElements
    , &refl_Inspector_Inspc
    , kEnhancedReference_Modifier_reflectJc /*@*/ |mObjectJc_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&singleton_Inspector_Inspc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((intptr_t)(&singleton_Inspector_Inspc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &refl_Inspector_Inspc
    }
} };
const ClassJc refl_Inspector_Inspc = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &refl_ObjectJc, &refl_ClassJc) 
, "Inspector_Inspc_s"
,  0 //position of ObjectJc
, sizeof(Inspector_Inspc_s)
, (FieldJc_Y const*)&refl_Fields_Inspector_Inspc_s
, null //method
, (ClassOffset_idxVtblJcARRAY*)&superclasses_Inspector_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblInspector_Inspc.mtbl.head
};
