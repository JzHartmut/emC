/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include <emC/Inspc/J2c/SearchElement_Inspc.h>
#include <emC/InspcTargetSimple/IfcTargetProxy_Inspc.h>
#include <string.h>  //because using memset()
#include <emC/Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
#include "emC/J1c/StringFunctions_CJc.h"  //reference-association: StringFunctions_CJc_s
#include "emC/Jc/ReflectionJc.h"  //reference-association: ClassJc
#include "emC/Jc/StringJc.h"  //embedded type in class data


/* J2C: Forward declaration of struct ***********************************************/

/**Functionality to search an element for reflection access.
@author Hartmut Schorrig 
*/


const char sign_Mtbl_SearchElement_Inspc[] = "SearchElement_Inspc"; //to mark method tables of all implementations

typedef struct MtblDef_SearchElement_Inspc_t { Mtbl_SearchElement_Inspc mtbl; MtblHeadJc end; } MtblDef_SearchElement_Inspc;
 extern MtblDef_SearchElement_Inspc const mtblSearchElement_Inspc;
StringJc version_SearchElement_Inspc = CONST_z_StringJc("2015-10-29"); //J2C:static StringJc
SearchTrc_SearchElement_Inspc_s searchTrc_SearchElement_Inspc[16]; //J2C: newArray

/*Constructor *//**J2C: autogenerated as default constructor. */
struct SearchElement_Inspc_t* ctorO_SearchElement_Inspc(ObjectJc* othis, ThCxt* _thCxt)
{ SearchElement_Inspc_s* thiz = (SearchElement_Inspc_s*)othis;  //upcasting to the real class.
  STACKTRC_TENTRY("ctorO_SearchElement_Inspc");
  checkConsistence_ObjectJc(othis, sizeof(SearchElement_Inspc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_SearchElement_Inspc_s, sizeof(SearchElement_Inspc_s));  
  //j2c: Initialize all class variables:
  {
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}



/**Searches a Field in a Object with given path. It is the core routine to access data*/
MemSegmJc searchObject_SearchElement_Inspc(/*J2C:static method*/ StringJc sPath, struct ClassJc_t const* startClazz, MemSegmJc startAddr, struct FieldJc_t const** retField, int32* retIdx, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("searchObject_SearchElement_Inspc");
  
  { 
    
    
    MemSegmJc  currentObj = { 0 };//J2C: constructor for embedded element
    INIT_MemSegmJc(/*J2C:static method call*/currentObj);
    
    StringJc sName ; sName = null_StringJc/*J2C:non-persistent*/;
    
    StringJc sElement ; sElement = null_StringJc/*J2C:non-persistent*/;
    
    if(segment_MemSegmJc(startAddr) !=0) {
      //it is an access to a remote target. Renew the rootAddr because the target may be compiled and started newly:
      //get the rootAddr and rootClazz on the first access.
      int32 receive = accessTarget_Inspc(getRootInstance_InspcTargetProxy, 1, null, 0);
      if(receive == -1) {
        //timeout:
        * retField = null;
        return null_MemSegmJc;
      } else {
        setADDR_MemSegmJc(startAddr, (intptr_t)receive);
        int ixClass = accessTarget_Inspc(getRootType_InspcTargetProxy, 1, null, 0);
        if(ixClass >0 && ixClass <= extReflectionClasses_ReflectionJc[0]->head.length ) {                                 //TODO index from segment
          startClazz = extReflectionClasses_ReflectionJc[0]->data[ixClass -1]; //get from loaded reflection file.
        } else {
          return startAddr;  //contains null? No access to target, maybe TODO
        }
      }
    }

    struct ClassJc_t const*  clazz = startClazz; //getClass_ClassJc(/*J2C:static method call*/startObj);
    
    MemSegmJc  nextObj = { 0 };//J2C: constructor for embedded element
    INIT_Mem_MemSegmJc(/*J2C:static method call*/nextObj, startAddr);
    
    struct FieldJc_t const*  field = null;
    
    int32  idx = 0;  //cc2017-11 no distinction between no index and index = 0. ... = -1;
    
    int32  posSep;/*no initvalue*/
    
    int32  posStart = 0;
    
    int32  idxSearchTrc = 0;
    TRY
    { 
      
      do 
        { 
          
          
          int32  posEnd;/*no initvalue*/
          posSep = indexOf_CI_StringJc(sPath, '.', posStart);/*may be <0 if no '.' is found*/
          
          posEnd = posSep >= 0 ? posSep : length_StringJc(sPath);
          if(posEnd > posStart) 
          { /*:next loop to search:*/
            
            
            
            int32  posBracket;/*no initvalue*/
            set_MemSegmJc(currentObj, nextObj);
            idx = -1;
            sElement = substring_StringJc(sPath, posStart, posEnd, _thCxt)/*J2C:non-persistent*/;
            posBracket = indexOf_C_StringJc(sElement, '[');
            
            { 
              
              
              int32  posAngleBracket = indexOf_C_StringJc(sElement, '<');
              if(posAngleBracket >= 0) 
              { 
                
                posBracket = posAngleBracket;/*may be also <0*/
                
              }
              if(posBracket >= 0) 
              { 
                
                
                int32  posBracketEnd = indexOf_CI_StringJc(sElement, posAngleBracket >= 0 ? '>' : ']', posBracket + 1);
                if(posBracketEnd < 0) 
                { 
                  
                  posBracketEnd = length_StringJc(sElement);
                }/*if the ] is missing in the actual context*/
                /*get index:*/
                
                idx = parseIntRadix_CsiiiiY_StringFunctions_CJc(/*J2C:static method call*/sElement, posBracket + 1, posBracketEnd - posBracketEnd + 1, 10, null);/*without exception*/
                
                sName = substring_StringJc(sElement, 0, posBracket, _thCxt)/*J2C:non-persistent*/;
              }
              else 
              { 
                
                sName = sElement/*J2C:non-persistent*/;
              }
              sElement = null_StringJc/*J2C:non-persistent*/;/*clear_StringJc(&sElement);*/
              
              if(equals_StringJc(sName, s0_StringJc("super"))) 
              { 
                
                field = getSuperField_ClassJc(clazz);
              }
              else 
              { 
                do {
                  field = getDeclaredField_ClassJc(clazz, sName);
                } while (field == null && (clazz = getSuperClass_ClassJc(clazz)) != null);  //search sName in all super classes too
              }
              sName = null_StringJc/*J2C:non-persistent*/;/*clear_StringJc(&sName);*/
              
              if(field != null && (posSep > 0 && length_StringJc(sPath) > (posSep + 1))) 
              { /*:a next loop may be necessary because a . is found:*/
                /*:access to the element because it is the base of next loop.*/
                /*:currentObj is the object where the field is searched. */
                
                
                set_MemSegmJc(searchTrc_SearchElement_Inspc[idxSearchTrc].objWhereFieldIsFound, currentObj);
                searchTrc_SearchElement_Inspc[idxSearchTrc].clazzWhereFieldIsFound = clazz;
                searchTrc_SearchElement_Inspc[idxSearchTrc].field = field;
                
                struct ClassJc_t const* retClazz[1] ; retClazz; /*J2C:modeAccess=Q*/
                set_MemSegmJc(nextObj, getObjAndClass_FieldJc(field, currentObj, &retClazz[0], "I", idx));
                clazz = retClazz[0];
                searchTrc_SearchElement_Inspc[idxSearchTrc].typeOfField = clazz;
                set_MemSegmJc(searchTrc_SearchElement_Inspc[idxSearchTrc].objOfField, nextObj);
                if(++idxSearchTrc >= ARRAYLEN_SimpleC(searchTrc_SearchElement_Inspc)) 
                { /*:prevent overflow. Its only a debug helper. The first entries are relevant.*/
                  
                  
                  idxSearchTrc = ARRAYLEN_SimpleC(searchTrc_SearchElement_Inspc) - 1;
                }/*nextObj is the object where the field is member of, */
                /*nextObj is getted started from currentObj, +via offset in field, and access than. */
                if(obj_MemSegmJc(nextObj) == null) { idx = kNullPointerInPath_SearchElement_Inspc; }
              }
              else 
              { }/*the obj and field are found*/
              
            }
          }
          posStart = posSep + 1;/*next level.*/
          
        }while(field != null && posSep > 0 && obj_MemSegmJc(nextObj) != null);
    }_TRY
    CATCH(NoSuchFieldException, exc)
    
      { 
        
        setNull_MemSegmJc(currentObj);
        field = null;
        idx = kFieldNotFound_SearchElement_Inspc;
    }
    CATCH(ExceptionJc, exc)
    
      { 
        
        setNull_MemSegmJc(currentObj);
        field = null;
        idx = kAccessError_SearchElement_Inspc;
      }
    END_TRY
    if (field == null) { //with or without excepton
      idx = kFieldNotFound_SearchElement_Inspc;
    }
    retField[0] = field;
    retIdx[0] = idx;
    { STACKTRC_LEAVE;
      return currentObj;
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_SearchElement_Inspc mtblSearchElement_Inspc = {
{ { sign_Mtbl_SearchElement_Inspc //J2C: Head of methodtable of SearchElement_Inspc
  , (struct Size_Mtbl_t*)((0 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: The superclass's methodtable: 
, { { sign_Mtbl_ObjectJc //J2C: Head of methodtable of ObjectJc
    , (struct Size_Mtbl_t*)((5 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
    }
    //J2C: Dynamic methods of the class :ObjectJc:
  , clone_ObjectJc_F //clone
  , equals_ObjectJc_F //equals
  , finalize_ObjectJc_F //finalize
  , hashCode_ObjectJc_F //hashCode
  , toString_ObjectJc_F //toString
  }
}, { signEnd_Mtbl_ObjectJc, null } }; //Mtbl


 extern_C struct ClassJc_t const reflection_ObjectJc;
 static struct superClasses_SearchElement_Inspc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_SearchElement_Inspc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_SearchElement_Inspc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_SearchElement_Inspc_s;
extern_C struct ClassJc_t const reflection_SearchTrc_SearchElement_Inspc_s;
extern_C struct ClassJc_t const reflection_StringJc;
const struct Reflection_Fields_SearchElement_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[2];
} reflection_Fields_SearchElement_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 2, OBJTYPE_FieldJc, null, &reflection_Fields_SearchElement_Inspc_s)
, {
     { "version"
    , 0 //nrofArrayElements
    , &reflection_StringJc
    , kEnhancedReference_Modifier_reflectJc /*t*/ |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&version_SearchElement_Inspc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((intptr_t)(&version_SearchElement_Inspc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_SearchElement_Inspc_s
    }
   , { "searchTrc"
    , 16 //nrofArrayElements
    , &reflection_SearchTrc_SearchElement_Inspc_s
    , kEmbedded_Modifier_reflectJc |kStaticArray_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&searchTrc_SearchElement_Inspc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((intptr_t)(&searchTrc_SearchElement_Inspc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_SearchElement_Inspc_s
    }
} };
const ClassJc reflection_SearchElement_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "SearchElement_Inspc_s"
,  0 //position of ObjectJc
, sizeof(SearchElement_Inspc_s)
, (FieldJc_Y const*)&reflection_Fields_SearchElement_Inspc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_SearchElement_Inspc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblSearchElement_Inspc.mtbl.head
};

/**Only for debugging: Element to store the trace while searching any element.
* It is use-able if the algorithm itself are debugged.
* */


const char sign_Mtbl_SearchTrc_SearchElement_Inspc[] = "SearchTrc_SearchElement_Inspc"; //to mark method tables of all implementations


/*Constructor *//**J2C: autogenerated as default constructor. */
struct SearchTrc_SearchElement_Inspc_t* ctorM_SearchTrc_SearchElement_Inspc(MemC mthis, ThCxt* _thCxt)
{ SearchTrc_SearchElement_Inspc_s* thiz = PTR_MemC(mthis, SearchTrc_SearchElement_Inspc_s);  //reference casting to the real class.
  int sizeObj = size_MemC(mthis);
  STACKTRC_TENTRY("ctor_SearchTrc_SearchElement_Inspc");
  if(sizeof(SearchTrc_SearchElement_Inspc_s) > sizeObj) THROW1_s0(IllegalArgumentException, "faut size", sizeObj);
  //j2c: Initialize all class variables:
  {
    //J2C: constructor for embedded element
      INIT_MemSegmJc(/*J2C:static method call*/thiz->objWhereFieldIsFound);
    //J2C: constructor for embedded element
      INIT_MemSegmJc(/*J2C:static method call*/thiz->objOfField);
  }/*J2C:No body for constructor*/

  STACKTRC_LEAVE;
  return thiz;
}


extern_C struct ClassJc_t const reflection_SearchTrc_SearchElement_Inspc_s;
extern_C struct ClassJc_t const reflection_ClassJc;
extern_C struct ClassJc_t const reflection_FieldJc;
extern_C struct ClassJc_t const reflection_MemSegmJc;
extern_C struct ClassJc_t const reflection_SearchTrc_SearchElement_Inspc_s;
extern_C struct ClassJc_t const reflection_StringJc;
const struct Reflection_Fields_SearchTrc_SearchElement_Inspc_s_t
{ ObjectArrayJc head; FieldJc data[5];
} reflection_Fields_SearchTrc_SearchElement_Inspc_s =
{ CONST_ObjectArrayJc(FieldJc, 5, OBJTYPE_FieldJc, null, &reflection_Fields_SearchTrc_SearchElement_Inspc_s)
, {
     { "objWhereFieldIsFound"
    , 0 //nrofArrayElements
    , &reflection_MemSegmJc
    , kEmbedded_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((SearchTrc_SearchElement_Inspc_s*)(0x1000))->objWhereFieldIsFound) - 0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_SearchTrc_SearchElement_Inspc_s
    }
   , { "clazzWhereFieldIsFound"
    , 0 //nrofArrayElements
    , &reflection_ClassJc
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((SearchTrc_SearchElement_Inspc_s*)(0x1000))->clazzWhereFieldIsFound) - 0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_SearchTrc_SearchElement_Inspc_s
    }
   , { "field"
    , 0 //nrofArrayElements
    , &reflection_FieldJc
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((SearchTrc_SearchElement_Inspc_s*)(0x1000))->field) - 0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_SearchTrc_SearchElement_Inspc_s
    }
   , { "typeOfField"
    , 0 //nrofArrayElements
    , &reflection_ClassJc
    , kReference_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((SearchTrc_SearchElement_Inspc_s*)(0x1000))->typeOfField) - 0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_SearchTrc_SearchElement_Inspc_s
    }
   , { "objOfField"
    , 0 //nrofArrayElements
    , &reflection_MemSegmJc
    , kEmbedded_Modifier_reflectJc //bitModifiers
    , (int16)((intptr_t)(&((SearchTrc_SearchElement_Inspc_s*)(0x1000))->objOfField) - 0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_SearchTrc_SearchElement_Inspc_s
    }
} };
const ClassJc reflection_SearchTrc_SearchElement_Inspc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "SearchTrc_SearchEl_t_Inspc_s"
,  0 //position of ObjectJc
, sizeof(SearchTrc_SearchElement_Inspc_s)
, (FieldJc_Y const*)&reflection_Fields_SearchTrc_SearchElement_Inspc_s
, null //method
, null //superclass
, null //interfaces
, 0    //modifiers
};
