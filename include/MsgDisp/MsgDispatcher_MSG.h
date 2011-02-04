/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __MsgDisp_MsgDispatcher_MSG_h__
#define __MsgDisp_MsgDispatcher_MSG_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct ConcurrentLinkedQueueJc_t;
struct DispatcherThread_MsgDispatcher_MSG_t;
struct Entry_MsgDispatcher_MSG_t;
struct FileWriterJc_t;
struct LogMessageFW_t;
struct MsgDispatcher_MSG_t;
struct Output_MsgDispatcher_MSG_t;
struct StringBuilderJc_t;
struct TestCnt_MsgDispatcher_MSG_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef LogMessageFWREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LogMessageFWREFDEF
  struct LogMessageFW_t;
  DEFINE_EnhancedRefJc(LogMessageFW);
#endif


/* J2C: includes *********************************************************/
#include "Fwc/fw_LogMessage.h"  //interface
#include "Jc/StringJc.h"  //embedded type in class data
#include "Jc/ThreadJc.h"  //superclass
#include "MsgDisp/VaArgBuffer.h"  //embedded type in class data
#include "os_time.h"  //embedded type in class data


/*@CLASS_C Entry_MsgDispatcher_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Entry_MsgDispatcher_MSG_t
{ 
  int32 ident;   /*Bit31 is set if the state is coming, 0 if it is going. */
  int32 dst;   /*The bits of destination dispatching are ascertained already before it is taken in the queue. */
  char const* text;   /*The output and format controlling text*/
  OS_TimeStamp timestamp;   /*Type of the arguments.*/
  VaArgBuffer values;   /*Values from variable argument list*/
} Entry_MsgDispatcher_MSG_s;
  

#define sizeof_Entry_MsgDispatcher_MSG_s sizeof(Entry_MsgDispatcher_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Entry_MsgDispatcher_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Entry_MsgDispatcher_MSGREFDEF
  struct Entry_MsgDispatcher_MSG_t;
  DEFINE_EnhancedRefJc(Entry_MsgDispatcher_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Entry_MsgDispatcher_MSG_X_t { ObjectArrayJc head; Entry_MsgDispatcher_MSGREF data[50]; } Entry_MsgDispatcher_MSG_X;
typedef struct Entry_MsgDispatcher_MSG_Y_t { ObjectArrayJc head; Entry_MsgDispatcher_MSG_s data[50]; } Entry_MsgDispatcher_MSG_Y;

 extern struct ClassJc_t const reflection_Entry_MsgDispatcher_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Entry_MsgDispatcher_MSG(OBJP) { CONST_ObjectJc(sizeof(Entry_MsgDispatcher_MSG_s), OBJP, &reflection_Entry_MsgDispatcher_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Entry_MsgDispatcher_MSG_F(Entry_MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct Entry_MsgDispatcher_MSG_t* ctorM_Entry_MsgDispatcher_MSG(MemC mthis, ThCxt* _thCxt);

METHOD_C int32 _sizeof_Entry_MsgDispatcher_MSG(/*static*/ ThCxt* _thCxt);


#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Entry_MsgDispatcher_MSG : private Entry_MsgDispatcher_MSG_s
{ public:

  int32 _sizeof(){  return _sizeof_Entry_MsgDispatcher_MSG( null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C TestCnt_MsgDispatcher_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct TestCnt_MsgDispatcher_MSG_t
{ 
  union { ObjectJc object; } base; 
  int32 noOutput; 
  int32 tomuchMsgPerThread; 
} TestCnt_MsgDispatcher_MSG_s;
  

#define sizeof_TestCnt_MsgDispatcher_MSG_s sizeof(TestCnt_MsgDispatcher_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef TestCnt_MsgDispatcher_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define TestCnt_MsgDispatcher_MSGREFDEF
  struct TestCnt_MsgDispatcher_MSG_t;
  DEFINE_EnhancedRefJc(TestCnt_MsgDispatcher_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct TestCnt_MsgDispatcher_MSG_X_t { ObjectArrayJc head; TestCnt_MsgDispatcher_MSGREF data[50]; } TestCnt_MsgDispatcher_MSG_X;
typedef struct TestCnt_MsgDispatcher_MSG_Y_t { ObjectArrayJc head; TestCnt_MsgDispatcher_MSG_s data[50]; } TestCnt_MsgDispatcher_MSG_Y;

 extern struct ClassJc_t const reflection_TestCnt_MsgDispatcher_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_TestCnt_MsgDispatcher_MSG(OBJP) { CONST_ObjectJc(sizeof(TestCnt_MsgDispatcher_MSG_s), OBJP, &reflection_TestCnt_MsgDispatcher_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_TestCnt_MsgDispatcher_MSG_F(ObjectJc* othis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct TestCnt_MsgDispatcher_MSG_t* ctorO_TestCnt_MsgDispatcher_MSG(ObjectJc* othis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_TestCnt_MsgDispatcher_MSG[]; //marker for methodTable check
typedef struct Mtbl_TestCnt_MsgDispatcher_MSG_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_TestCnt_MsgDispatcher_MSG;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class TestCnt_MsgDispatcher_MSG : private TestCnt_MsgDispatcher_MSG_s
{ public:

  TestCnt_MsgDispatcher_MSG(){ init_ObjectJc(&this->base.object, sizeof(TestCnt_MsgDispatcher_MSG_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_TestCnt_MsgDispatcher_MSG_s, 0); ctorO_TestCnt_MsgDispatcher_MSG(&this->base.object,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C Output_MsgDispatcher_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Output_MsgDispatcher_MSG_t
{ 
  StringJc name;   /*Short name of the destination, used for {@link #setOutputRange } or {@link #setOutputFromString }*/
  LogMessageFWREF outputIfc;   /*The output interface. */
  bool dstInDispatcherThread;   /*true if this output is processed in the dispatcher thread,*/
} Output_MsgDispatcher_MSG_s;
  

#define sizeof_Output_MsgDispatcher_MSG_s sizeof(Output_MsgDispatcher_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Output_MsgDispatcher_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Output_MsgDispatcher_MSGREFDEF
  struct Output_MsgDispatcher_MSG_t;
  DEFINE_EnhancedRefJc(Output_MsgDispatcher_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Output_MsgDispatcher_MSG_X_t { ObjectArrayJc head; Output_MsgDispatcher_MSGREF data[50]; } Output_MsgDispatcher_MSG_X;
typedef struct Output_MsgDispatcher_MSG_Y_t { ObjectArrayJc head; Output_MsgDispatcher_MSG_s data[50]; } Output_MsgDispatcher_MSG_Y;

 extern struct ClassJc_t const reflection_Output_MsgDispatcher_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Output_MsgDispatcher_MSG(OBJP) { CONST_ObjectJc(sizeof(Output_MsgDispatcher_MSG_s), OBJP, &reflection_Output_MsgDispatcher_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Output_MsgDispatcher_MSG_F(Output_MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct Output_MsgDispatcher_MSG_t* ctorM_Output_MsgDispatcher_MSG(MemC mthis, ThCxt* _thCxt);


#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Output_MsgDispatcher_MSG : private Output_MsgDispatcher_MSG_s
{ public:
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C DispatcherThread_MsgDispatcher_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct DispatcherThread_MsgDispatcher_MSG_t
{ 
  union { ObjectJc object; ThreadJc_s super;} base; 
  struct MsgDispatcher_MSG_t* outer;  //J2C: Reference to outer class, implicit in Java
  int32 cycleMillisec; 
} DispatcherThread_MsgDispatcher_MSG_s;
  

#define sizeof_DispatcherThread_MsgDispatcher_MSG_s sizeof(DispatcherThread_MsgDispatcher_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef DispatcherThread_MsgDispatcher_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define DispatcherThread_MsgDispatcher_MSGREFDEF
  struct DispatcherThread_MsgDispatcher_MSG_t;
  DEFINE_EnhancedRefJc(DispatcherThread_MsgDispatcher_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct DispatcherThread_MsgDispatcher_MSG_X_t { ObjectArrayJc head; DispatcherThread_MsgDispatcher_MSGREF data[50]; } DispatcherThread_MsgDispatcher_MSG_X;
typedef struct DispatcherThread_MsgDispatcher_MSG_Y_t { ObjectArrayJc head; DispatcherThread_MsgDispatcher_MSG_s data[50]; } DispatcherThread_MsgDispatcher_MSG_Y;

 extern struct ClassJc_t const reflection_DispatcherThread_MsgDispatcher_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_DispatcherThread_MsgDispatcher_MSG(OBJP) { CONST_ObjectJc(sizeof(DispatcherThread_MsgDispatcher_MSG_s), OBJP, &reflection_DispatcherThread_MsgDispatcher_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_DispatcherThread_MsgDispatcher_MSG_F(ObjectJc* othis, ThCxt* _thCxt);




/**Initializes the Thread for dispaching messages.*/
METHOD_C struct DispatcherThread_MsgDispatcher_MSG_t* ctorO_DispatcherThread_MsgDispatcher_MSG(struct MsgDispatcher_MSG_t* outer, ObjectJc* othis, int32 cycleMillisec, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void run_DispatcherThread_MsgDispatcher_MSG_F(ObjectJc* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void run_DispatcherThread_MsgDispatcher_MSG(ObjectJc* ithis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_DispatcherThread_MsgDispatcher_MSG[]; //marker for methodTable check
typedef struct Mtbl_DispatcherThread_MsgDispatcher_MSG_t
{ MtblHeadJc head;
  Mtbl_ThreadJc ThreadJc;
} Mtbl_DispatcherThread_MsgDispatcher_MSG;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class DispatcherThread_MsgDispatcher_MSG : private DispatcherThread_MsgDispatcher_MSG_s
{ public:

  virtual void run(){ run_DispatcherThread_MsgDispatcher_MSG_F(&this->base.super.base.RunnableJc.base.object,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C MsgDispatcher_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct MsgDispatcher_MSG_t
{ 
  union { ObjectJc object; LogMessageFW_i LogMessageFW;} base; 
  int32 nrofMixedOutputs;   /*Number of Bits in {@link mDispatchWithBits}, it is the number of destinations dispached via bit mask. */
  int32 mDstMixedOutputs;   /*Calculated mask of bits which are able to mix. */
  int32 mDstOneOutput;   /*Calculated mask of bits which are one index. */
  TestCnt_MsgDispatcher_MSG_s testCnt; 
  struct ConcurrentLinkedQueueJc_t* listOrders;   /*List of messages to process in the dispatcher thread.*/
  struct ConcurrentLinkedQueueJc_t* freeOrders;   /*List of entries for messages to use.*/
  int32 actNrofListIdents;   /*List of idents, its current length. */
  int32_Y* listIdents;   /*List of idents, a array with lengthListIdents elements.*/
  int32_Y* listBitDst;   /*List of destination bits for the idents.*/
  Output_MsgDispatcher_MSG_Y* outputs;   /*up to 30 destinations for output.*/
  struct LogMessageFW_t* outputConsole;   /*A console output is standard everytime..*/
  int32 maxDst; 
} MsgDispatcher_MSG_s;
  

#define sizeof_MsgDispatcher_MSG_s sizeof(MsgDispatcher_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef MsgDispatcher_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define MsgDispatcher_MSGREFDEF
  struct MsgDispatcher_MSG_t;
  DEFINE_EnhancedRefJc(MsgDispatcher_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct MsgDispatcher_MSG_X_t { ObjectArrayJc head; MsgDispatcher_MSGREF data[50]; } MsgDispatcher_MSG_X;
typedef struct MsgDispatcher_MSG_Y_t { ObjectArrayJc head; MsgDispatcher_MSG_s data[50]; } MsgDispatcher_MSG_Y;

 extern struct ClassJc_t const reflection_MsgDispatcher_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_MsgDispatcher_MSG(OBJP) { CONST_ObjectJc(sizeof(MsgDispatcher_MSG_s), OBJP, &reflection_MsgDispatcher_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_MsgDispatcher_MSG_F(ObjectJc* othis, ThCxt* _thCxt);


#define mDispatchInDispatcherThread_MsgDispatcher_MSG 0x80000000  /*If this bit is set in the bitmask for dispatching, the dispatching should be done*/
#define mDispatchInCallingThread_MsgDispatcher_MSG 0x40000000  /*If this bit is set in the bitmask for dispatching, the dispatching should only be done*/
#define mDispatchBits_MsgDispatcher_MSG 0x3fffffff  /*Only this bits are used to indicate the destination via some Bits*/
#define mConsole_MsgDispatcher_MSG 0x1  /*Mask for dispatch the message to console directly in the calling thread.*/
#define mConsoleQueued_MsgDispatcher_MSG 0x2  /*queued Console output, it is a fix part of the Message dispatcher. */
#define mAdd_MsgDispatcher_MSG 0xcadd  /*Used for argument mode from {@link #setOutputRange(int, int, int, int, int)} to add an output.*/
#define mSet_MsgDispatcher_MSG 0xc5ed  /*Used for argument mode from {@link #setOutputRange(int, int, int, int, int)} to set an output.*/
#define mRemove_MsgDispatcher_MSG 0xcde1  /*Used for argument mode from {@link #setOutputRange(int, int, int, int, int)} to remove an output.*/


/**Initializes the instance.*/
METHOD_C struct MsgDispatcher_MSG_t* ctorO_MsgDispatcher_MSG(ObjectJc* othis, int32 maxDispatchEntries, int32 maxQueue, int32 maxOutputs, int32 nrofMixedOutputs, ThCxt* _thCxt);

/**Gets the internal free entries for sharing with an other log output,*/
METHOD_C struct ConcurrentLinkedQueueJc_t* getSharedFreeEntries_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);

METHOD_C void setDefaults_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, StringJc fileOut, ThCxt* _thCxt);

METHOD_C int32 searchDispatchBits_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 ident, ThCxt* _thCxt);

/**inserts an ident range after given position:*/
METHOD_C int32 insertIdent_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 idx, int32 fromIdent, int32 toIdent, ThCxt* _thCxt);

/**Sets a destination interface to a index for dispatching.*/
METHOD_C void setOutputRoutine_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 dstIdx, StringJc name, bool bQueued, struct LogMessageFW_t* dst, ThCxt* _thCxt);

/**Sets the output dispatch bits for the given message number range.*/
METHOD_C int32 setOutputRange_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 fromIdent, int32 toIdent, int32 dst, int32 mode, int32 level, ThCxt* _thCxt);

/**Sets the output from a String content.*/
METHOD_C StringJc setOutputFromString_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, StringJc ctrl, struct StringBuilderJc_t* errorBuffer, ThCxt* _thCxt);

/**Writes the msg dispatching outputs in file.*/
METHOD_C bool reportOutput_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, struct FileWriterJc_t* file, ThCxt* _thCxt);

/**Completes a destination bit mask with the information, whether any destinations are used*/
METHOD_C int32 completeDispatchInThreadBits_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 dstBits, ThCxt* _thCxt);

/**Dispatches a message*/
METHOD_C int32 dispatchMsg_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, int32 dstBits, bool bDispatchInDispatcherThread, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);

/**Sends a message*/
METHOD_C bool sendMsg_izv_MsgDispatcher_MSG(LogMessageFW_i* ithis, int32 identNumber, char const* text, char const* args, ...);

/**Sends a message*/
METHOD_C bool sendMsgTime_iDtzv_MsgDispatcher_MSG(LogMessageFW_i* ithis, int32 identNumber, OS_TimeStamp creationTime, char const* text, char const* args, ...);

/**Sends a message*/
METHOD_C bool sendMsgVaList_iDtzv_MsgDispatcher_MSG(LogMessageFW_i* ithis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);

/**Dispatches all messages, which are stored in the queue.*/
METHOD_C int32 dispatchQueuedMsg_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);

/**It's a debug helper. The method is empty, but it is a mark to set a breakpoint. */
METHOD_C void stop_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);

/**close and flush forces the dispatching of the messages in the queue.*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void close_MsgDispatcher_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void close_MsgDispatcher_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);

/**flush forces the dispatching of the messages in the queue.*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void flush_MsgDispatcher_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void flush_MsgDispatcher_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C bool isOnline_MsgDispatcher_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C bool isOnline_MsgDispatcher_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);

/**Outputs the queued messages calling {@link LogMessage#flush()} for all queued outputs.*/
METHOD_C void tickAndFlushOrClose_MsgDispatcher_MSG(MsgDispatcher_MSG_s* ythis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_MsgDispatcher_MSG[]; //marker for methodTable check
typedef struct Mtbl_MsgDispatcher_MSG_t
{ MtblHeadJc head;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_LogMessageFW LogMessageFW;
} Mtbl_MsgDispatcher_MSG;



#if defined(XXX__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class MsgDispatcher_MSG : private MsgDispatcher_MSG_s
{ public:

  virtual void close(){ close_MsgDispatcher_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  int32 completeDispatchInThreadBits(int32 dstBits){  return completeDispatchInThreadBits_MsgDispatcher_MSG(this, dstBits,  null/*_thCxt*/); }

  MsgDispatcher_MSG(int32 cycleMillisec){ init_ObjectJc(&this->base.object, sizeof(MsgDispatcher_MSG_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_MsgDispatcher_MSG_s, 0); ctorO_DispatcherThread_MsgDispatcher_MSG(&this->base.object, cycleMillisec,  null/*_thCxt*/); }

  MsgDispatcher_MSG(int32 maxDispatchEntries, int32 maxQueue, int32 maxOutputs, int32 nrofMixedOutputs){ init_ObjectJc(&this->base.object, sizeof(MsgDispatcher_MSG_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_MsgDispatcher_MSG_s, 0); ctorO_MsgDispatcher_MSG(&this->base.object, maxDispatchEntries, maxQueue, maxOutputs, nrofMixedOutputs,  null/*_thCxt*/); }

  int32 dispatchMsg(int32 dstBits, bool bDispatchInDispatcherThread, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args){  return dispatchMsg_MsgDispatcher_MSG(this, dstBits, bDispatchInDispatcherThread, identNumber, creationTime, text, args,  null/*_thCxt*/); }

  int32 dispatchQueuedMsg(){  return dispatchQueuedMsg_MsgDispatcher_MSG(this,  null/*_thCxt*/); }

  virtual void flush(){ flush_MsgDispatcher_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  struct ConcurrentLinkedQueueJc_t* getSharedFreeEntries(){  return getSharedFreeEntries_MsgDispatcher_MSG(this,  null/*_thCxt*/); }

  int32 insertIdent(int32 idx, int32 fromIdent, int32 toIdent){  return insertIdent_MsgDispatcher_MSG(this, idx, fromIdent, toIdent,  null/*_thCxt*/); }

  virtual bool isOnline(){  return isOnline_MsgDispatcher_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  bool reportOutput(struct FileWriterJc_t* file){  return reportOutput_MsgDispatcher_MSG(this, file,  null/*_thCxt*/); }

  int32 searchDispatchBits(int32 ident){  return searchDispatchBits_MsgDispatcher_MSG(this, ident,  null/*_thCxt*/); }

  bool sendMsgTime(int32 identNumber, OS_TimeStamp creationTime, char const* text, char const* args, ...){  return sendMsgTime_iDtzv_MsgDispatcher_MSG(&this->base.LogMessageFW, identNumber, creationTime, text, args); }

  bool sendMsgVaList(int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args){  return sendMsgVaList_iDtzv_MsgDispatcher_MSG(&this->base.LogMessageFW, identNumber, creationTime, text, args,  null/*_thCxt*/); }

  bool sendMsg(int32 identNumber, char const* text, char const* args, ...){  return sendMsg_izv_MsgDispatcher_MSG(&this->base.LogMessageFW, identNumber, text, args); }

  void setDefaults(StringJcpp fileOut){ setDefaults_MsgDispatcher_MSG(this, fileOut,  null/*_thCxt*/); }

  StringJc setOutputFromString(StringJcpp ctrl, struct StringBuilderJc_t* errorBuffer){  return setOutputFromString_MsgDispatcher_MSG(this, ctrl, errorBuffer,  null/*_thCxt*/); }

  int32 setOutputRange(int32 fromIdent, int32 toIdent, int32 dst, int32 mode, int32 level){  return setOutputRange_MsgDispatcher_MSG(this, fromIdent, toIdent, dst, mode, level,  null/*_thCxt*/); }

  void setOutputRoutine(int32 dstIdx, StringJcpp name, bool bQueued, struct LogMessageFW_t* dst){ setOutputRoutine_MsgDispatcher_MSG(this, dstIdx, name, bQueued, dst,  null/*_thCxt*/); }

  void stop(){ stop_MsgDispatcher_MSG(this,  null/*_thCxt*/); }

  void tickAndFlushOrClose(){ tickAndFlushOrClose_MsgDispatcher_MSG(this,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__MsgDisp_MsgDispatcher_MSG_h__
