/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __J1c_LeapSecondsJc_h__
#define __J1c_LeapSecondsJc_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct DateJc_t;
struct LeapSecondsJc_t;


/* J2C: includes *********************************************************/


/*@CLASS_C LeapSecondsJc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct LeapSecondsJc_t
{ 
  union { ObjectJc object; } base; 
  int32 leapSeconds[30];   /*Array of number of leap seconds. */
  int64_Y* millisecondsUTCForLeapSeconds;   /*Array of values of seconds after 1970, which are UTC seconds.*/
  int64_Y* millisecondsGPSForLeapSeconds;   /*Array of values of seconds after 1970, which are leap seconds.*/
} LeapSecondsJc_s;
  

#define sizeof_LeapSecondsJc_s sizeof(LeapSecondsJc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef LeapSecondsJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LeapSecondsJcREFDEF
  struct LeapSecondsJc_t;
  DEFINE_EnhancedRefJc(LeapSecondsJc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct LeapSecondsJc_X_t { ObjectArrayJc head; LeapSecondsJcREF data[50]; } LeapSecondsJc_X;
typedef struct LeapSecondsJc_Y_t { ObjectArrayJc head; LeapSecondsJc_s data[50]; } LeapSecondsJc_Y;

 extern struct ClassJc_t const reflection_LeapSecondsJc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_LeapSecondsJc(OBJP) { CONST_ObjectJc(sizeof(LeapSecondsJc_s), OBJP, &reflection_LeapSecondsJc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_LeapSecondsJc_F(ObjectJc* othis, ThCxt* _thCxt);


 extern struct LeapSecondsJc_t* singleton_LeapSecondsJc;   /*All methods are static, but uses internally data of this class.*/


METHOD_C struct LeapSecondsJc_t* ctorO_LeapSecondsJc(ObjectJc* othis, ThCxt* _thCxt);

/**Sets the leap seconds for a given timestamp*/
METHOD_C void setLeapSeconds_LeapSecondsJc(/*static*/ int32 idx, struct DateJc_t* date, ThCxt* _thCxt);

/**initializes the table of leap seconds with fix dates.*/
typedef void MT_initFix_LeapSecondsJc(LeapSecondsJc_s* ythis, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void initFix_LeapSecondsJc_F(LeapSecondsJc_s* ythis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void initFix_LeapSecondsJc(LeapSecondsJc_s* ythis, ThCxt* _thCxt);

/**Returns a Date object from given GPS-seconds.*/
METHOD_C struct DateJc_t* dateFromGPS_LeapSecondsJc(/*static*/ int64 millisecondsGPS, ThCxt* _thCxt);

METHOD_C int64 millisecondsGPSfromUTC_LeapSecondsJc(/*static*/ int64 millisecondsUTC, ThCxt* _thCxt);

METHOD_C int32 secondsGPSfromUTC_LeapSecondsJc(/*static*/ int32 secondsUTC_1970, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_LeapSecondsJc[]; //marker for methodTable check
typedef struct Mtbl_LeapSecondsJc_t
{ MtblHeadJc head;
  MT_initFix_LeapSecondsJc* initFix;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_LeapSecondsJc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class LeapSecondsJc : private LeapSecondsJc_s
{ public:

  LeapSecondsJc(){ init_ObjectJc(&this->base.object, sizeof(LeapSecondsJc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_LeapSecondsJc_s, 0); ctorO_LeapSecondsJc(&this->base.object,  null/*_thCxt*/); }

  struct DateJc_t* dateFromGPS(int64 millisecondsGPS){  return dateFromGPS_LeapSecondsJc(millisecondsGPS,  null/*_thCxt*/); }

  virtual void initFix(){ initFix_LeapSecondsJc_F(this,  null/*_thCxt*/); }

  int64 millisecondsGPSfromUTC(int64 millisecondsUTC){  return millisecondsGPSfromUTC_LeapSecondsJc(millisecondsUTC,  null/*_thCxt*/); }

  int32 secondsGPSfromUTC(int32 secondsUTC_1970){  return secondsGPSfromUTC_LeapSecondsJc(secondsUTC_1970,  null/*_thCxt*/); }

  void setLeapSeconds(int32 idx, struct DateJc_t* date){ setLeapSeconds_LeapSecondsJc(idx, date,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__J1c_LeapSecondsJc_h__
