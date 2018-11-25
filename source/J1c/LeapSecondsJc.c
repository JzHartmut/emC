/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#include "J1c/LeapSecondsJc.h"
#include <string.h>  //because using memset()
#include <Jc/ReflectionJc.h>   //Reflection concept 
  //basic stacktrace concept
#include "Jc/ArraysJc.h"  //reference-association: ArraysJc
#include "Jc/DateJc.h"  //reference-association: date
#include "Jc/StringJc.h"  //string concatenation


/* J2C: Forward declaration of struct ***********************************************/

/**This class supports the handling with Leap seconds.
<br>
Background:
<ul>
<li>UTC (= <a href="http://en.wikipedia.org/wiki/Coordinated_Universal_Time">Coordinated Universal Time</a> ) 
follows the caesium atomic clock, 
but it is coordinated with the earth rotation. respectively it follows the simple division 
of 1 year into 365 * 24* 3600 seconds and 366 * 24 * 3600 seconds in a leap year.
If leap seconds are occurred, the second count of UTC is the same for 2 seconds.
<li>In computer systems, often UTC is used, because the unix-time also count simple seconds
without regarding of leap seconds. Therefore, also the class java.util.Date based on UTC.
<li>The TAI (= <a href="http://en.wikipedia.org/wiki/International_Atomic_Time">en.wikipedia.org/wiki/International_Atomic_Time</a>         
counts uniformly continuous and faster than the earth rotation. 
Thats why leap seconds are necessary to adapt the earth-rotation oriented second count (to UTC).
<li>The time from GPS positioning follows the TAI, with a constant difference of 19 seconds, 
without any leap seconds. Why 19 seconds? It's historical.
<li>In technical systems a strict uniformly continuous time counter is better to than the UTC.
</ul>

This class helps to adapt GPS or other strict uniformly continuous time counter to UTC 
and to java.util.Date. 
A table of leap seconds may be given outside, because there are not defined yet for the future.

@author Hartmut Schorrig

Changes:
* 2009-03-08: Hartmut: new: millisecondsGPSfromUTC(), secondsGPSfromUTC().
* 2008-08-00: Hartmut creation

*/


const char sign_Mtbl_LeapSecondsJc[] = "LeapSecondsJc"; //to mark method tables of all implementations

typedef struct MtblDef_LeapSecondsJc_t { Mtbl_LeapSecondsJc mtbl; MtblHeadJc end; } MtblDef_LeapSecondsJc;
 extern MtblDef_LeapSecondsJc const mtblLeapSecondsJc;
struct LeapSecondsJc_t* singleton_LeapSecondsJc = null;

/*Constructor */
struct LeapSecondsJc_t* ctorO_LeapSecondsJc(ObjectJc* othis, ThCxt* _thCxt)
{ LeapSecondsJc_s* thiz = (LeapSecondsJc_s*)othis;  //upcasting to the real class.
  Mtbl_LeapSecondsJc const* mtthis = &mtblLeapSecondsJc.mtbl;
  STACKTRC_TENTRY("ctorO_LeapSecondsJc");
  checkConsistence_ObjectJc(othis, sizeof(LeapSecondsJc_s), null, _thCxt);  
  setReflection_ObjectJc(othis, &reflection_LeapSecondsJc_s, sizeof(LeapSecondsJc_s));  
  //j2c: Initialize all class variables:
  {ObjectJc *newObj1_1=null, *newObj1_2=null; /*J2C: temporary Objects for new operations
      */
    init0_MemC(build_MemC(&thiz->leapSeconds, 30 * sizeof(int32))); //J2C: init the embedded simple array;
    thiz->millisecondsUTCForLeapSeconds = (int64_Y*)ctorO_ObjectArrayJc((newObj1_1 = alloc_ObjectJc( sizeof(ObjectArrayJc) + (30) * sizeof(int64), mIsLargeSize_objectIdentSize_ObjectJc, _thCxt)), 30, sizeof(int64),REFLECTION_int64, 0);  //J2C: assign a new ObjectArrayJc. ;
    thiz->millisecondsGPSForLeapSeconds = (int64_Y*)ctorO_ObjectArrayJc((newObj1_2 = alloc_ObjectJc( sizeof(ObjectArrayJc) + (30) * sizeof(int64), mIsLargeSize_objectIdentSize_ObjectJc, _thCxt)), 30, sizeof(int64),REFLECTION_int64, 0);  //J2C: assign a new ObjectArrayJc. ;
    activateGC_ObjectJc(newObj1_1, null, _thCxt);
    activateGC_ObjectJc(newObj1_2, null, _thCxt);
  }
  { 
    
    mtthis->initFix(thiz, _thCxt);
  }
  STACKTRC_LEAVE;
  return thiz;
}



/**Sets the leap seconds for a given timestamp. This routine should be called on startup phase*/
void setLeapSeconds_LeapSecondsJc(/*J2C:static method*/ int32 idx, struct DateJc_t* date, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("setLeapSeconds_LeapSecondsJc");
  
  { 
     /*J2C: temporary Stringbuffer for String concatenation*/
    StringBuilderJc_s* _tempString2_1=null; 
    
    if(singleton_LeapSecondsJc == null) 
    { 
      ObjectJc *newObj3_1=null; /*J2C: temporary Objects for new operations
      */
      singleton_LeapSecondsJc = ctorO_LeapSecondsJc(/*J2C:static method call*/(newObj3_1 = alloc_ObjectJc(sizeof_LeapSecondsJc_s, 0, _thCxt)), _thCxt);
      activateGC_ObjectJc(newObj3_1, null, _thCxt);
    }
    if(idx < 0 || idx > ARRAYLEN_SimpleC(singleton_LeapSecondsJc->leapSeconds)) { throw_sJc(ident_IllegalArgumentExceptionJc, 
      ( _tempString2_1 = new_StringBuilderJc(-1, _thCxt)
      , setStringConcatBuffer_StringBuilderJc(_tempString2_1)
      , append_z_StringBuilderJc(_tempString2_1, "The number of leap seconds should be not greater than", _thCxt)
      , append_I_StringBuilderJc(_tempString2_1, (ARRAYLEN_SimpleC(singleton_LeapSecondsJc->leapSeconds) - 1), _thCxt)
      , toStringMarkPersist_StringBuilderJc(&(_tempString2_1)->base.object, _thCxt)
      ), 0, __LINE__, _thCxt); };
    singleton_LeapSecondsJc->leapSeconds[idx] = idx;
    singleton_LeapSecondsJc->millisecondsUTCForLeapSeconds->data[idx] = getTime_DateJc(date);
    singleton_LeapSecondsJc->millisecondsGPSForLeapSeconds->data[idx] = idx + getTime_DateJc(date);
    activateGC_ObjectJc(&_tempString2_1->base.object, null, _thCxt);
  }
  STACKTRC_LEAVE;
}


/**initializes the table of leap seconds with fix dates.*/
void initFix_LeapSecondsJc_F(LeapSecondsJc_s* thiz, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("initFix_LeapSecondsJc_F");
  
  { 
    
    
    int32  idx = -1;
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/72, 6, 30, 23, 59, 59);/*0*/
    
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/72, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/73, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/74, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/75, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/76, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/77, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/78, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/79, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/81, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/82, 6, 30, 23, 59, 59);/*10*/
    
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/83, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/85, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/87, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/89, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/90, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/92, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/93, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/94, 6, 30, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/95, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/97, 6, 30, 23, 59, 59);/*20*/
    
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/98, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/105, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/108, 12, 31, 23, 59, 59);/*NOTE: the next dates are guessed:*/
    
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/111, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/113, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/116, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/119, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/122, 12, 31, 23, 59, 59);
    thiz->millisecondsUTCForLeapSeconds->data[++idx] = UTC_DateJc(/*J2C:static method call*/125, 12, 31, 23, 59, 59);/*29*/
    
    for(idx = 0; idx < ARRAYLEN_SimpleC(thiz->leapSeconds); idx++)
      { 
        
        thiz->leapSeconds[idx] = idx;
        thiz->millisecondsGPSForLeapSeconds->data[idx] = thiz->millisecondsUTCForLeapSeconds->data[idx] + idx;
      }
  }
  STACKTRC_LEAVE;
}

/*J2C: dynamic call variant of the override-able method: */
void initFix_LeapSecondsJc(LeapSecondsJc_s* thiz, ThCxt* _thCxt)
{ Mtbl_LeapSecondsJc const* mtbl = (Mtbl_LeapSecondsJc const*)getMtbl_ObjectJc(&thiz->base.object, sign_Mtbl_LeapSecondsJc);
  mtbl->initFix(thiz, _thCxt);
}


/**Returns a Date object from given GPS-seconds.*/
struct DateJc_t* dateFromGPS_LeapSecondsJc(/*J2C:static method*/ int64 millisecondsGPS, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("dateFromGPS_LeapSecondsJc");
  
  { 
    ObjectJc *newObj2_1=null; /*J2C: temporary Objects for new operations
    */
    if(singleton_LeapSecondsJc == null) 
    { 
      ObjectJc *newObj3_1=null; /*J2C: temporary Objects for new operations
      */
      singleton_LeapSecondsJc = ctorO_LeapSecondsJc(/*J2C:static method call*/(newObj3_1 = alloc_ObjectJc(sizeof_LeapSecondsJc_s, 0, _thCxt)), _thCxt);
      activateGC_ObjectJc(newObj3_1, null, _thCxt);
    }
    
    int32  idx = binarySearch_int64_ArraysJc(/*J2C:static method call*/singleton_LeapSecondsJc->millisecondsGPSForLeapSeconds/*J2C-error testAndChangeAccess: XY*/, millisecondsGPS, _thCxt);
    if(idx < 0) 
    { /*:normal: no leap seconds*/
      
      
      idx = -idx - 1;
    }
    else 
    { }
    { STACKTRC_LEAVE;
      activateGC_ObjectJc(newObj2_1, ctorO_I_DateJc(/*J2C:static method call*/(newObj2_1 = alloc_ObjectJc(sizeof_DateJc_s, 0, _thCxt)), millisecondsGPS - 1000 * idx, _thCxt), _thCxt);
      return ctorO_I_DateJc(/*J2C:static method call*/(newObj2_1 = alloc_ObjectJc(sizeof_DateJc_s, 0, _thCxt)), millisecondsGPS - 1000 * idx, _thCxt);
    }
  }
  STACKTRC_LEAVE;
}

int64 millisecondsGPSfromUTC_LeapSecondsJc(/*J2C:static method*/ int64 millisecondsUTC, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("millisecondsGPSfromUTC_LeapSecondsJc");
  
  { 
    
    if(singleton_LeapSecondsJc == null) 
    { 
      ObjectJc *newObj3_1=null; /*J2C: temporary Objects for new operations
      */
      singleton_LeapSecondsJc = ctorO_LeapSecondsJc(/*J2C:static method call*/(newObj3_1 = alloc_ObjectJc(sizeof_LeapSecondsJc_s, 0, _thCxt)), _thCxt);
      activateGC_ObjectJc(newObj3_1, null, _thCxt);
    }
    
    int32  idx = binarySearch_int64_ArraysJc(/*J2C:static method call*/singleton_LeapSecondsJc->millisecondsUTCForLeapSeconds/*J2C-error testAndChangeAccess: XY*/, millisecondsUTC, _thCxt);
    if(idx < 0) 
    { /*:normal: no leap seconds*/
      
      
      idx = -idx - 1;
    }
    else 
    { }
    { STACKTRC_LEAVE;
      return millisecondsUTC + 1000 * idx;
    }
  }
  STACKTRC_LEAVE;
}

int32 secondsGPSfromUTC_LeapSecondsJc(/*J2C:static method*/ int32 secondsUTC_1970, ThCxt* _thCxt)
{ 
  STACKTRC_TENTRY("secondsGPSfromUTC_LeapSecondsJc");
  
  { 
    
    if(singleton_LeapSecondsJc == null) 
    { 
      ObjectJc *newObj3_1=null; /*J2C: temporary Objects for new operations
      */
      singleton_LeapSecondsJc = ctorO_LeapSecondsJc(/*J2C:static method call*/(newObj3_1 = alloc_ObjectJc(sizeof_LeapSecondsJc_s, 0, _thCxt)), _thCxt);
      activateGC_ObjectJc(newObj3_1, null, _thCxt);
    }
    
    int32  idx = binarySearch_int64_ArraysJc(/*J2C:static method call*/singleton_LeapSecondsJc->millisecondsGPSForLeapSeconds/*J2C-error testAndChangeAccess: XY*/, (int64 /*J2C_cast*/)secondsUTC_1970 * 1000, _thCxt);
    if(idx < 0) 
    { /*:normal: no leap seconds*/
      
      
      idx = -idx - 1;
    }
    else 
    { }
    { STACKTRC_LEAVE;
      return secondsUTC_1970 + idx;
    }
  }
  STACKTRC_LEAVE;
}



/**J2C: Reflections and Method-table *************************************************/
const MtblDef_LeapSecondsJc mtblLeapSecondsJc = {
{ { sign_Mtbl_LeapSecondsJc //J2C: Head of methodtable of LeapSecondsJc
  , (struct Size_Mtbl_t*)((1 +2) * sizeof(void*)) //J2C:size. NOTE: all elements has the size of void*.
  }
  //J2C: Dynamic methods of the class :LeapSecondsJc:
, initFix_LeapSecondsJc_F //initFix
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
 static struct superClasses_LeapSecondsJc_s_t
 { ObjectArrayJc head;
   ClassOffset_idxMtblJc data[1];
 }superclasses_LeapSecondsJc_s =
 { CONST_ObjectArrayJc(ClassOffset_idxMtblJc, 1, OBJTYPE_ClassOffset_idxMtblJc, null, null)
 , { {&reflection_ObjectJc, OFFSET_Mtbl(Mtbl_LeapSecondsJc, ObjectJc) }
   }
 };

extern_C struct ClassJc_t const reflection_LeapSecondsJc_s;
extern_C struct ClassJc_t const reflection_LeapSecondsJc_s;
const struct Reflection_Fields_LeapSecondsJc_s_t
{ ObjectArrayJc head; FieldJc data[4];
} reflection_Fields_LeapSecondsJc_s =
{ CONST_ObjectArrayJc(FieldJc, 4, OBJTYPE_FieldJc, null, &reflection_Fields_LeapSecondsJc_s)
, {
     { "leapSeconds"
    , 30 //nrofArrayElements
    , REFLECTION_int32
    , 4 << kBitPrimitiv_Modifier_reflectJc |kStaticArray_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((LeapSecondsJc_s*)(0x1000))->leapSeconds) - (int32)(LeapSecondsJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_LeapSecondsJc_s
    }
   , { "millisecondsUTCForLeapSeconds"
    , 0 //nrofArrayElements
    , REFLECTION_int64
    , 8 << kBitPrimitiv_Modifier_reflectJc |kObjectArrayJc_Modifier_reflectJc |kReferencedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((LeapSecondsJc_s*)(0x1000))->millisecondsUTCForLeapSeconds) - (int32)(LeapSecondsJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_LeapSecondsJc_s
    }
   , { "millisecondsGPSForLeapSeconds"
    , 0 //nrofArrayElements
    , REFLECTION_int64
    , 8 << kBitPrimitiv_Modifier_reflectJc |kObjectArrayJc_Modifier_reflectJc |kReferencedContainer_Modifier_reflectJc //bitModifiers
    , (int16)((int32)(&((LeapSecondsJc_s*)(0x1000))->millisecondsGPSForLeapSeconds) - (int32)(LeapSecondsJc_s*)0x1000)
    , 0  //offsetToObjectifcBase
    , &reflection_LeapSecondsJc_s
    }
   , { "singleton"
    , 0 //nrofArrayElements
    , &reflection_LeapSecondsJc_s
    , kReference_Modifier_reflectJc |mObjectJc_Modifier_reflectJc |mSTATIC_Modifier_reflectJc //bitModifiers
    , 0 //compiler problem, not a constant,TODO: (int16)(&singleton_LeapSecondsJc) //lo part of memory address of static member
    , 0 //compiler problem, not a constant,TODO: (int16)((int32)(&singleton_LeapSecondsJc)>>16) //hi part of memory address of static member instead offsetToObjectifcBase, TRICKY because compatibilty.
    , &reflection_LeapSecondsJc_s
    }
} };
const ClassJc reflection_LeapSecondsJc_s = 
{ CONST_ObjectJc(OBJTYPE_ClassJc + sizeof(ClassJc), &reflection_ObjectJc, &reflection_ClassJc) 
, "LeapSecondsJc_s"
,  0 //position of ObjectJc
, sizeof(LeapSecondsJc_s)
, (FieldJc_Y const*)&reflection_Fields_LeapSecondsJc_s
, null //method
, (ClassOffset_idxMtblJcARRAY*)&superclasses_LeapSecondsJc_s //superclass
, null //interfaces
, 0    //modifiers
, &mtblLeapSecondsJc.mtbl.head
};
