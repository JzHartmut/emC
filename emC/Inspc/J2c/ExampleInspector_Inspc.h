/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __InspcJ2c_ExampleInspector_Inspc_h__
#define __InspcJ2c_ExampleInspector_Inspc_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct Data_ExampleInspector_Inspc_t;
struct ExampleInspector_Inspc_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef LinkedListJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LinkedListJcREFDEF
  struct LinkedListJc_t;
  DEFINE_EnhancedRefJc(LinkedListJc);
#endif


/* J2C: includes *********************************************************/
#include "InspcJ2c/Inspector_Inspc.h"  //embedded type in class data
#include "InspcJ2c/WorkingThread_Inspc.h"  //embedded type in class data


/*@CLASS_C Data_ExampleInspector_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Data_ExampleInspector_Inspc_t
{ 
  ObjectJc object; 
  int32 x; 
  int32 y; 
  int16 s1; 
  int16 s2; 
  float f1; 
  float f2; 
  double d1; 
  double d2; 
} Data_ExampleInspector_Inspc_s;
  

#define sizeof_Data_ExampleInspector_Inspc_s sizeof(Data_ExampleInspector_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Data_ExampleInspector_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Data_ExampleInspector_InspcREFDEF
  struct Data_ExampleInspector_Inspc_t;
  DEFINE_EnhancedRefJc(Data_ExampleInspector_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Data_ExampleInspector_Inspc_X_t { ObjectArrayJc head; Data_ExampleInspector_InspcREF data[50]; } Data_ExampleInspector_Inspc_X;
typedef struct Data_ExampleInspector_Inspc_Y_t { ObjectArrayJc head; Data_ExampleInspector_Inspc_s data[50]; } Data_ExampleInspector_Inspc_Y;

 extern struct ClassJc_t const reflection_Data_ExampleInspector_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Data_ExampleInspector_Inspc(OBJP) { CONST_ObjectJc(sizeof(Data_ExampleInspector_Inspc_s), OBJP, &reflection_Data_ExampleInspector_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Data_ExampleInspector_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




METHOD_C struct Data_ExampleInspector_Inspc_t* ctorO_Data_ExampleInspector_Inspc(ObjectJc* othis, int32 val, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_Data_ExampleInspector_Inspc[]; //marker for methodTable check
typedef struct Mtbl_Data_ExampleInspector_Inspc_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_Data_ExampleInspector_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Data_ExampleInspector_Inspc : private Data_ExampleInspector_Inspc_s
{ public:

  Data_ExampleInspector_Inspc(int32 val){ init_ObjectJc(&this->base.object, sizeof(Data_ExampleInspector_Inspc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_Data_ExampleInspector_Inspc_s, 0); ctorO_Data_ExampleInspector_Inspc(&this->base.object, val,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C ExampleInspector_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct ExampleInspector_Inspc_t
{ 
  ObjectJc object; 
  WorkingThread_Inspc_s workingThread; 
  Data_ExampleInspector_Inspc_s data; 
  bool run; 
  int32 intVal; 
  float floatVal; 
  struct intArray_Y { ObjectArrayJc head; int32 data[20]; }intArray; 
  int32_Y* dynamicIntArray; 
  LinkedListJcREF list; 
  double_Y* dArray; 
  int16_Y* sArray; 
  int32 sizeList; 
  Inspector_Inspc_s inspector; 
} ExampleInspector_Inspc_s;
  

#define sizeof_ExampleInspector_Inspc_s sizeof(ExampleInspector_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef ExampleInspector_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define ExampleInspector_InspcREFDEF
  struct ExampleInspector_Inspc_t;
  DEFINE_EnhancedRefJc(ExampleInspector_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct ExampleInspector_Inspc_X_t { ObjectArrayJc head; ExampleInspector_InspcREF data[50]; } ExampleInspector_Inspc_X;
typedef struct ExampleInspector_Inspc_Y_t { ObjectArrayJc head; ExampleInspector_Inspc_s data[50]; } ExampleInspector_Inspc_Y;

 extern struct ClassJc_t const reflection_ExampleInspector_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_ExampleInspector_Inspc(OBJP) { CONST_ObjectJc(sizeof(ExampleInspector_Inspc_s), OBJP, &reflection_ExampleInspector_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_ExampleInspector_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




METHOD_C struct ExampleInspector_Inspc_t* ctorO_ExampleInspector_Inspc(ObjectJc* othis, ThCxt* _thCxt);

METHOD_C void main_ExampleInspector_Inspc(/*static*/ StringJc_Y* args, ThCxt* _thCxt);

typedef void MT_setExampleData_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void setExampleData_ExampleInspector_Inspc_F(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setExampleData_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);

typedef void MT_execute_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void execute_ExampleInspector_Inspc_F(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void execute_ExampleInspector_Inspc(ExampleInspector_Inspc_s* ythis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_ExampleInspector_Inspc[]; //marker for methodTable check
typedef struct Mtbl_ExampleInspector_Inspc_t
{ MtblHeadJc head;
  MT_setExampleData_ExampleInspector_Inspc* setExampleData;
  MT_execute_ExampleInspector_Inspc* execute;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_ExampleInspector_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class ExampleInspector_Inspc : private ExampleInspector_Inspc_s
{ public:

  ExampleInspector_Inspc(){ init_ObjectJc(&this->base.object, sizeof(ExampleInspector_Inspc_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_ExampleInspector_Inspc_s, 0); ctorO_ExampleInspector_Inspc(&this->base.object,  null/*_thCxt*/); }

  virtual void execute(){ execute_ExampleInspector_Inspc_F(this,  null/*_thCxt*/); }

  void main(StringJc_Y* args){ main_ExampleInspector_Inspc(args,  null/*_thCxt*/); }

  virtual void setExampleData(){ setExampleData_ExampleInspector_Inspc_F(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__InspcJ2c_ExampleInspector_Inspc_h__
