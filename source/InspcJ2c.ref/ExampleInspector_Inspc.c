/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "InspcJ2c/ExampleInspector_Inspc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
#include <Fwc/fw_Exception.h>  //basic stacktrace concept
#include "Jc/LinkedListJc.h"  //new object
#include "Jc/StringJc.h"  //embedded type in class data
#include "Jc/ThreadJc.h"  //reference-association: ThreadJc_s


/* J2C: Forward declaration of struct ***********************************************/


const char sign_Mtbl_ExampleInspector_Inspc[] = "ExampleInspector_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_ExampleInspector_Inspc_t { Mtbl_ExampleInspector_Inspc mtbl; MtblHeadJc end; } MtblDef_ExampleInspector_Inspc;
 extern MtblDef_ExampleInspector_Inspc const mtblExampleInspector_Inspc;

/*Constructor */
struct ExampleInspector_Inspc_t* ctorO_ExampleInspector_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ ExampleInspector_Inspc_s* ythis = (ExampleInspector_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_ExampleInspector_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(ExampleInspector_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_ExampleInspector_Inspc_s, sizeof(ExampleInspector_Inspc_s));  
  //j2c: Initialize all class variables:
  {ObjectJc *newObj0_1=null; //J2C: temporary Objects for new operations
      
    /*J2C: newArray*/
      init_ObjectJc(&ythis->intArray.head.object, sizeof_ARRAYJc(int32, 20), 0);   //J2C: ctor embedded array.
      ctorO_ObjectArrayJc(&ythis->intArray.head.object, 20, sizeof(int32), null, 0);//J2C: constructor for embedded array;
    SETREFJc(ythis->list, ctorO_LinkedListJc(/*static*/(newObj0_1 = alloc_ObjectJc(sizeof_LinkedListJc, 0, _thCxt))), LinkedListJc);
    //J2C: constructor for embedded element-ObjectJc
      init_ObjectJc(&(ythis->inspector.base.object), sizeof(ythis->inspector), 0); 
      ctorO_Inspector_Inspc(/*static*/&(ythis->inspector.base.object), s0_StringJc("UDP:0.0.0.0:60078"), _thCxt);
    activateGarbageCollectorAccess_BlockHeapJc(newObj0_1, null);
  }
  { 
    
    start_Inspector_Inspc_F(& (ythis->inspector), & ((* (ythis)).base.object), _thCxt);
  }
  STACKTRC_LEAVE;
  return ythis;
}


void main_ExampleInspector_Inspc(/*static*/ StringJc_Y* args, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("main_ExampleInspector_Inspc");
  
  { 
    struct ExampleInspector_Inspc_t* main = null; 
    
    ObjectJc *newObj1_1=null; //J2C: temporary Objects for new operations
    
    unknownStatement(); /*unknown statement with semantic: newObject*/
    
    main = ctorO_ExampleInspector_Inspc(/*static*/(newObj1_1 = alloc_ObjectJc(sizeof_ExampleInspector_Inspc_s, 0, _thCxt)), _thCxt);
    setExampleData_ExampleInspector_Inspc_F(main, _thCxt);
    execute_ExampleInspector_Inspc_F(main, _thCxt);
    activateGarbageCollectorAccess_BlockHeapJc(newObj1_1, null);
  }
  STACKTRC_LEAVE;
}

void setExampleData_ExampleInspector_Inspc_F(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setExampleData_ExampleInspector_Inspc_F");
  
  { 
    int32 ix = 0; 
    
    ObjectJc *newObj1_1=null; //J2C: temporary Objects for new operations
    
    /*no initvalue*/
    ythis->dynamicIntArray = (int32_Y*)ctorO_ObjectArrayJc((newObj1_1 = alloc_ObjectJc( sizeof(ObjectArrayJc) + (5) * sizeof(int32), mIsLargeSize_objectIdentSize_ObjectJc, _thCxt)), 5, sizeof(int32),REFLECTION_int32, 0);  //J2C: assign a new ObjectArrayJc. ;
    ythis->sizeList = 5;
    for(ix = 0; ix < ythis->dynamicIntArray->head.length; ++ix)
      { 
        ObjectJc *newObj2_1=null; //J2C: temporary Objects for new operations
        
        ythis->dynamicIntArray->data[ix] = ix + 100;
        add_LinkedListJcF(REFJc(ythis->list), & ((* (ctorO_Data_ExampleInspector_Inspc(/*static*/(newObj2_1 = alloc_ObjectJc(sizeof_Data_ExampleInspector_Inspc_s, 0, _thCxt)), 200 + ix, _thCxt))).base.object), _thCxt);
        activateGarbageCollectorAccess_BlockHeapJc(newObj2_1, null);
      }
    activateGarbageCollectorAccess_BlockHeapJc(newObj1_1, null);
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void setExampleData_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt)
{ Mtbl_ExampleInspector_Inspc const* mtbl = (Mtbl_ExampleInspector_Inspc const*)getMtbl_ObjectJc(&ythis->base.object, sign_Mtbl_ExampleInspector_Inspc);
  mtbl->setExampleData(ythis, _thCxt);
}

void execute_ExampleInspector_Inspc_F(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("execute_ExampleInspector_Inspc_F");
  
  { 
    
    ythis->run = true;
    
    while(ythis->run)
      { 
        int32 sizeListLast; 
        
        
        TRY
        { 
          
          sleep_ThreadJc(/*static*/10, _thCxt);
        }_TRY
        CATCH(InterruptedException, exc)
        
          { 
            
            
          }
        END_TRY
        sizeListLast = size_LinkedListJcF(REFJc(ythis->list));
        if(sizeListLast != ythis->sizeList) 
        { 
          
          
          while(sizeListLast < ythis->sizeList)
            { 
              ObjectJc *newObj4_1=null; //J2C: temporary Objects for new operations
              
              add_LinkedListJcF(REFJc(ythis->list), & ((* (ctorO_Data_ExampleInspector_Inspc(/*static*/(newObj4_1 = alloc_ObjectJc(sizeof_Data_ExampleInspector_Inspc_s, 0, _thCxt)), sizeListLast, _thCxt))).base.object), _thCxt);
              sizeListLast += 1;
              activateGarbageCollectorAccess_BlockHeapJc(newObj4_1, null);
            }
          
          while(sizeListLast > ythis->sizeList)
            { 
              
              remove_LinkedListJcF(REFJc(ythis->list), --sizeListLast, _thCxt);
            }
        }
      }
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void execute_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt)
{ Mtbl_ExampleInspector_Inspc const* mtbl = (Mtbl_ExampleInspector_Inspc const*)getMtbl_ObjectJc(&ythis->base.object, sign_Mtbl_ExampleInspector_Inspc);
  mtbl->execute(ythis, _thCxt);
}


void finalize_ExampleInspector_Inspc_F(ObjectJc* othis, ThCxt* _thCxt)
{ ExampleInspector_Inspc_s* ythis = (ExampleInspector_Inspc_s*)othis;  //upcasting to the real class.
 STACKTRC_TENTRY("finalize_ExampleInspector_Inspc_F");
  CLEAR_REFJc(ythis->list);
  finalize_ObjectJc_F(&ythis->inspector.base.object, _thCxt); //J2C: finalizing the embedded instance.
  finalize_ObjectJc_F(&ythis->base.object, _thCxt); //J2C: finalizing the superclass.
  STACKTRC_LEAVE;
}




/**J2C: Reflections and Method-table *************************************************/
const MtblDef_ExampleInspector_Inspc mtblExampleInspector_Inspc = {
{ { sign_Mtbl_ExampleInspector_Inspc//J2C: Head of methodtable.
  , (struct Size_Mtbl_t*)((2 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
  }
, setExampleData_ExampleInspector_Inspc_F //setExampleData
, execute_ExampleInspector_Inspc_F //execute
, { { sign_Mtbl_ObjectJc//J2C: Head of methodtable.
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //size. NOTE: all elements are standard-pointer-types.
    }
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ExampleInspector_Inspc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_ExampleInspector_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_ExampleInspector_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_ExampleInspector_Inspc, ObjectJc) }
   }
 };

extern struct ClassJc_t const reflection_ExampleInspector_Inspc_s;
extern struct ClassJc_t const reflection_Inspector_Inspc_s;
extern struct ClassJc_t const reflection_LinkedListJc;
const struct Reflection_Fields_ExampleInspector_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[8];
} reflection_Fields_ExampleInspector_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 8, OBJTYPE_FieldJc, null, &reflection_Fields_ExampleInspector_Inspc_s)
, {
     { "run"
    , 0 //nrofArrayElements
    , REFLECTION_bool
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->run) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "intVal"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->intVal) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "floatVal"
    , 0 //nrofArrayElements
    , REFLECTION_float
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->floatVal) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "intArray"
    , 20 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc |kEmbeddedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->intArray) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "dynamicIntArray"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc |kObjectArrayJc_Modifier_reflectJc |kReferencedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->dynamicIntArray) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "list"
    , 0 //nrofArrayElements
    , &reflection_LinkedListJc
    , kEnhancedReference_Modifier_reflectJc /*@*/ |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->list) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "sizeList"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->sizeList) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
   , { "inspector"
    , 0 //nrofArrayElements
    , &reflection_Inspector_Inspc_s
    , kEmbedded_Modifier_reflectJc |mObjectJc_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((ExampleInspector_Inspc_s*)(0x1000))->inspector) - (int32)(ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_ExampleInspector_Inspc_s
    }
} };
const ClassJc reflection_ExampleInspector_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "ExampleInspector_Inspc_s"
,  0 //position of ObjectJc
, sizeof(ExampleInspector_Inspc_s)
, (FieldJcArray const*)&reflection_Fields_ExampleInspector_Inspc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_ExampleInspector_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblExampleInspector_Inspc.mtbl.head
};


const char sign_Mtbl_Data_ExampleInspector_Inspc[] = "Data_ExampleInspector_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_Data_ExampleInspector_Inspc_t { Mtbl_Data_ExampleInspector_Inspc mtbl; MtblHeadJc end; } MtblDef_Data_ExampleInspector_Inspc;
 extern MtblDef_Data_ExampleInspector_Inspc const mtblData_ExampleInspector_Inspc;

/*Constructor */
struct Data_ExampleInspector_Inspc_t* ctorO_Data_ExampleInspector_Inspc(ObjectJc* othis, int32 val, ThCxt* _thCxt)
{ Data_ExampleInspector_Inspc_s* ythis = (Data_ExampleInspector_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_Data_ExampleInspector_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(Data_ExampleInspector_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_Data_ExampleInspector_Inspc_s, sizeof(Data_ExampleInspector_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }
  { 
    
    ythis->x = val;
    ythis->y = val + 10;
  }
  STACKTRC_LEAVE;
  return ythis;
}




/**J2C: Reflections and Method-table *************************************************/
const MtblDef_Data_ExampleInspector_Inspc mtblData_ExampleInspector_Inspc = {
{ { sign_Mtbl_Data_ExampleInspector_Inspc//J2C: Head of methodtable.
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
 static struct superClasses_Data_ExampleInspector_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_Data_ExampleInspector_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_Data_ExampleInspector_Inspc, ObjectJc) }
   }
 };

extern struct ClassJc_t const reflection_Data_ExampleInspector_Inspc_s;
const struct Reflection_Fields_Data_ExampleInspector_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[2];
} reflection_Fields_Data_ExampleInspector_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_Data_ExampleInspector_Inspc_s)
, {
     { "x"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((Data_ExampleInspector_Inspc_s*)(0x1000))->x) - (int32)(Data_ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_Data_ExampleInspector_Inspc_s
    }
   , { "y"
    , 0 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((Data_ExampleInspector_Inspc_s*)(0x1000))->y) - (int32)(Data_ExampleInspector_Inspc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_Data_ExampleInspector_Inspc_s
    }
} };
const ClassJc reflection_Data_ExampleInspector_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "Data_ExampleInspec_r_Inspc_s"
,  0 //position of ObjectJc
, sizeof(Data_ExampleInspector_Inspc_s)
, (FieldJcArray const*)&reflection_Fields_Data_ExampleInspector_Inspc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_Data_ExampleInspector_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblData_ExampleInspector_Inspc.mtbl.head
};
