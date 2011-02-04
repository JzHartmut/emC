/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __MsgDisp_LogMessageFile_MSG_h__
#define __MsgDisp_LogMessageFile_MSG_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct ConcurrentLinkedQueueJc_t;
struct Dbg_LogMessageFile_MSG_t;
struct LocaleJc_t;
struct LogMessageFW_t;
struct LogMessageFile_MSG_t;
struct TimeZoneJc_t;


/* J2C: Enhanced references *********************************************************
 * In this part all here used enhanced references are defined conditionally.
 * The inclusion of all that header files isn't necessary, to prevent circular inclusion.
 * It is adequate a struct pointer forward declaration.
 */
#ifndef LocaleJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LocaleJcREFDEF
  struct LocaleJc_t;
  DEFINE_EnhancedRefJc(LocaleJc);
#endif
#ifndef LogMessageFWREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LogMessageFWREFDEF
  struct LogMessageFW_t;
  DEFINE_EnhancedRefJc(LogMessageFW);
#endif
#ifndef TimeZoneJcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define TimeZoneJcREFDEF
  struct TimeZoneJc_t;
  DEFINE_EnhancedRefJc(TimeZoneJc);
#endif


/* J2C: includes *********************************************************/
#include "Fwc/fw_LogMessage.h"  //interface
#include "Jc/DateJc.h"  //embedded type in class data
#include "Jc/FileIoJc.h"  //embedded type in class data
#include "Jc/StringJc.h"  //embedded type in class data
#include "os_time.h"  //embedded type in class data


/*@CLASS_C Dbg_LogMessageFile_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct Dbg_LogMessageFile_MSG_t
{ 
  int32 cntWriteError; 
  int32 cntCloseError; 
  int32 cntOpenFailed; 
  int32 cntCreateNewBecauseOpenFailed; 
  int32 cntFilePathIncorrect; 
} Dbg_LogMessageFile_MSG_s;
  

#define sizeof_Dbg_LogMessageFile_MSG_s sizeof(Dbg_LogMessageFile_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef Dbg_LogMessageFile_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define Dbg_LogMessageFile_MSGREFDEF
  struct Dbg_LogMessageFile_MSG_t;
  DEFINE_EnhancedRefJc(Dbg_LogMessageFile_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct Dbg_LogMessageFile_MSG_X_t { ObjectArrayJc head; Dbg_LogMessageFile_MSGREF data[50]; } Dbg_LogMessageFile_MSG_X;
typedef struct Dbg_LogMessageFile_MSG_Y_t { ObjectArrayJc head; Dbg_LogMessageFile_MSG_s data[50]; } Dbg_LogMessageFile_MSG_Y;

 extern struct ClassJc_t const reflection_Dbg_LogMessageFile_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_Dbg_LogMessageFile_MSG(OBJP) { CONST_ObjectJc(sizeof(Dbg_LogMessageFile_MSG_s), OBJP, &reflection_Dbg_LogMessageFile_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_Dbg_LogMessageFile_MSG_F(Dbg_LogMessageFile_MSG_s* ythis, ThCxt* _thCxt);




/**Default constructor. */
METHOD_C struct Dbg_LogMessageFile_MSG_t* ctorM_Dbg_LogMessageFile_MSG(MemC mthis, ThCxt* _thCxt);


#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class Dbg_LogMessageFile_MSG : private Dbg_LogMessageFile_MSG_s
{ public:
};

#endif /*__CPLUSPLUSJcpp*/



/*@CLASS_C LogMessageFile_MSG @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct LogMessageFile_MSG_t
{ 
  union { ObjectJc object; LogMessageFW_i LogMessageFW;} base; 
  struct SbY_sFilenameBuffer_t { StringBufferJc sb; char _b[116]; }sFilenameBuffer;   /**/
  struct SbY_sDateformatBuffer_t { StringBufferJc sb; char _b[28]; }sDateformatBuffer;   /*StringBuffer to store the converted timeStamp for file time. */
  StringJc sFormatTimestampFilename;   /*TODO  */
  SimpleDateFormatJc_s formatTimestamp; 
  int32 counterMultifile;   /*Actual counter of multiFile*/
  TextFieldPositionJc_s formatField; 
  struct charsFormatTimestampFilename_Y { ObjectArrayJc head; char data[32]; }charsFormatTimestampFilename;   /*xxxjava2c=simpleArray. */
  int32 posTimestampInFilename; 
  int32 posMultifileInFilename;   /** If it is -1, no multiFile designation is used.*/
  int32 currentLengthMultifileNr; 
  FileWriterJc_s file; 
  OS_TimeStamp timeOpen;   /*All OS:TimeStamp are simple embedded instances in C,*/
  bool bNewFile; 
  OS_TimeStamp timeWrite; 
  OS_TimeStamp timeClose;   /*The last close time. */
  int32 nrofSecondsToFlush; 
  int32 nrofSecondsToClose; 
  int32 cntAllNonFlushedWrite;   /*Counts all non flushed writes (seconds without flush). */
  int32 cntNonFlushedWrite;   /*Counts all non flushed writes in a flush period. */
  int32 maxCntNonFlushedWrite;   /*Little statistic: max nr of writes without flush. */
  bool shouldFlushed; 
  LogMessageFWREF msgOpenClose;   /*An open or close operation may be logged. See setLogMessageOpenClose(). */
  int32 msgIdentOpenClose;   /*Number for open and close message. The close messages have offsets see kMsg....*/
  int32 nrofHoursPerFile;   /** -1 than close never automaticly.*/
  Dbg_LogMessageFile_MSG_s dbg; 
  struct ConcurrentLinkedQueueJc_t* parkedOrders;   /*List of messages to process if the file is able to open.*/
  struct ConcurrentLinkedQueueJc_t* freeEntries;   /*Common poop of entries to save messages.*/
  SimpleDateFormatJc_s dateFormat;   /*The date format is fix.*/
  LocaleJcREF localization; 
  TimeZoneJcREF timeZone; 
  struct SbY_sBuffer_t { StringBufferJc sb; char _b[996]; }sBuffer;   /*Buffer for the current line to assign. Don't use dynamic memory! */
} LogMessageFile_MSG_s;
  

#define sizeof_LogMessageFile_MSG_s sizeof(LogMessageFile_MSG_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef LogMessageFile_MSGREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define LogMessageFile_MSGREFDEF
  struct LogMessageFile_MSG_t;
  DEFINE_EnhancedRefJc(LogMessageFile_MSG);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct LogMessageFile_MSG_X_t { ObjectArrayJc head; LogMessageFile_MSGREF data[50]; } LogMessageFile_MSG_X;
typedef struct LogMessageFile_MSG_Y_t { ObjectArrayJc head; LogMessageFile_MSG_s data[50]; } LogMessageFile_MSG_Y;

 extern struct ClassJc_t const reflection_LogMessageFile_MSG_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_LogMessageFile_MSG(OBJP) { CONST_ObjectJc(sizeof(LogMessageFile_MSG_s), OBJP, &reflection_LogMessageFile_MSG_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_LogMessageFile_MSG_F(ObjectJc* othis, ThCxt* _thCxt);


#define kMsgOpen_LogMessageFile_MSG 0
#define kMsgNewFile_LogMessageFile_MSG 1
#define kMsgOpenError_LogMessageFile_MSG 2
#define kMsgClose_LogMessageFile_MSG 3


/**Constructs the instance.*/
METHOD_C struct LogMessageFile_MSG_t* ctorO_LogMessageFile_MSG(ObjectJc* othis, StringJc sFilename, int32 nrofSecondsToFlush, int32 nrofHoursPerFile, struct LocaleJc_t* localization, struct TimeZoneJc_t* timeZoneP, struct ConcurrentLinkedQueueJc_t* freeEntriesP, ThCxt* _thCxt);

/**Sets a log output if a open or close action is done*/
typedef void MT_setLogMessageOpenClose_LogMessageFile_MSG(LogMessageFile_MSG_s* ythis, struct LogMessageFW_t* msg, int32 msgIdentOpenClose, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void setLogMessageOpenClose_LogMessageFile_MSG_F(LogMessageFile_MSG_s* ythis, struct LogMessageFW_t* msg, int32 msgIdentOpenClose, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setLogMessageOpenClose_LogMessageFile_MSG(LogMessageFile_MSG_s* ythis, struct LogMessageFW_t* msg, int32 msgIdentOpenClose, ThCxt* _thCxt);

/**Sends a message*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C bool sendMsg_izv_LogMessageFile_MSG_F(LogMessageFW_i* ithis, int32 identNumber, char const* text, char const* args, ...);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C bool sendMsg_izv_LogMessageFile_MSG(LogMessageFW_i* ithis, int32 identNumber, char const* text, char const* args, ...);

/**Sends a message*/
METHOD_C bool sendMsgTime_iDtzv_LogMessageFile_MSG(LogMessageFW_i* ithis, int32 identNumber, OS_TimeStamp creationTime, char const* text, char const* args, ...);

/**Sends a message*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C bool sendMsgVaList_iDtzv_LogMessageFile_MSG_F(LogMessageFW_i* ithis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C bool sendMsgVaList_iDtzv_LogMessageFile_MSG(LogMessageFW_i* ithis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);

/**This method can be called after a cyclic time less than the nrofSecondsToFlush,*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void flush_LogMessageFile_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void flush_LogMessageFile_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);

/**Tests*/
typedef void MT_writeInFile_LogMessageFile_MSG(LogMessageFile_MSG_s* ythis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void writeInFile_LogMessageFile_MSG_F(LogMessageFile_MSG_s* ythis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void writeInFile_LogMessageFile_MSG(LogMessageFile_MSG_s* ythis, int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args, ThCxt* _thCxt);

/**Closes the file and forces usage of a new file on next open.*/
/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C void close_LogMessageFile_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void close_LogMessageFile_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);

/* J2C:Implementation of the method, used for an immediate non-dynamic call: */
METHOD_C bool isOnline_LogMessageFile_MSG_F(LogMessageFW_i* ithis, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C bool isOnline_LogMessageFile_MSG(LogMessageFW_i* ithis, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_LogMessageFile_MSG[]; //marker for methodTable check
typedef struct Mtbl_LogMessageFile_MSG_t
{ MtblHeadJc head;
  MT_setLogMessageOpenClose_LogMessageFile_MSG* setLogMessageOpenClose;
  MT_writeInFile_LogMessageFile_MSG* writeInFile;
  Mtbl_ObjectJc ObjectJc;
  //Method table of interfaces:
  Mtbl_LogMessageFW LogMessageFW;
} Mtbl_LogMessageFile_MSG;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class LogMessageFile_MSG : private LogMessageFile_MSG_s
{ public:

  virtual void close(){ close_LogMessageFile_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  LogMessageFile_MSG(StringJcpp sFilename, int32 nrofSecondsToFlush, int32 nrofHoursPerFile, struct LocaleJc_t* localization, struct TimeZoneJc_t* timeZoneP, struct ConcurrentLinkedQueueJc_t* freeEntriesP){ init_ObjectJc(&this->base.object, sizeof(LogMessageFile_MSG_s), 0); setReflection_ObjectJc(&this->base.object, &reflection_LogMessageFile_MSG_s, 0); ctorO_LogMessageFile_MSG(&this->base.object, sFilename, nrofSecondsToFlush, nrofHoursPerFile, localization, timeZoneP, freeEntriesP,  null/*_thCxt*/); }

  virtual void flush(){ flush_LogMessageFile_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  virtual bool isOnline(){  return isOnline_LogMessageFile_MSG_F(&this->base.LogMessageFW,  null/*_thCxt*/); }

  bool sendMsgTime(int32 identNumber, OS_TimeStamp creationTime, char const* text, char const* args, ...){  return sendMsgTime_iDtzv_LogMessageFile_MSG(&this->base.LogMessageFW, identNumber, creationTime, text, args); }

  virtual bool sendMsgVaList(int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args){  return sendMsgVaList_iDtzv_LogMessageFile_MSG_F(&this->base.LogMessageFW, identNumber, creationTime, text, args,  null/*_thCxt*/); }

  virtual bool sendMsg(int32 identNumber, char const* text, char const* args, ...){  return sendMsg_izv_LogMessageFile_MSG_F(&this->base.LogMessageFW, identNumber, text, args); }

  virtual void setLogMessageOpenClose(struct LogMessageFW_t* msg, int32 msgIdentOpenClose){ setLogMessageOpenClose_LogMessageFile_MSG_F(this, msg, msgIdentOpenClose,  null/*_thCxt*/); }

  virtual void writeInFile(int32 identNumber, OS_TimeStamp creationTime, char const* text, Va_listFW args){ writeInFile_LogMessageFile_MSG_F(this, identNumber, creationTime, text, args,  null/*_thCxt*/); }
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__MsgDisp_LogMessageFile_MSG_h__
