/**************************************************************************
 * This file is generated by Java2C
 **copyright***************************************************************
 *************************************************************************/
#ifndef __InspcJ2c_CmdConsumer_ifc_Inspc_h__
#define __InspcJ2c_CmdConsumer_ifc_Inspc_h__

#include "Jc/ObjectJc.h"        //basic concept

#include "Jc/StringJc.h"        //used often

#include "Fwc/fw_Exception.h"   //basic concept


/* J2C: Forward declaration of struct ***********************************************/
struct AnswerComm_ifc_Inspc_t;
struct InspcDatagram_InspcDataExchangeAccess_Inspc_t;
struct Inspcitem_InspcDataExchangeAccess_Inspc_t;


/* J2C: includes *********************************************************/


/*@CLASS_C CmdConsumer_ifc_Inspc @@@@@@@@@@@@@@@@@@@@@@@@*/

typedef struct CmdConsumer_ifc_Inspc_t
{ 
  union { ObjectJc object; } base; 
} CmdConsumer_ifc_Inspc_s;
  

#define sizeof_CmdConsumer_ifc_Inspc_s sizeof(CmdConsumer_ifc_Inspc_s)


/**J2c: Definitions of the enhanced reference. It's conditinally because it may be defined in a included header before. */
#ifndef CmdConsumer_ifc_InspcREFDEF
  //J2C: definition of enhanced reference where it was need firstly: 
  #define CmdConsumer_ifc_InspcREFDEF
  struct CmdConsumer_ifc_Inspc_t;
  DEFINE_EnhancedRefJc(CmdConsumer_ifc_Inspc);
#endif

/**J2c: Definitions of the array forms. NOTE: The number of elements are a helper for debug, the really used number depends on the memory size! */
typedef struct CmdConsumer_ifc_Inspc_X_t { ObjectArrayJc head; CmdConsumer_ifc_InspcREF data[50]; } CmdConsumer_ifc_Inspc_X;
typedef struct CmdConsumer_ifc_Inspc_Y_t { ObjectArrayJc head; CmdConsumer_ifc_Inspc_s data[50]; } CmdConsumer_ifc_Inspc_Y;

 extern_C struct ClassJc_t const reflection_CmdConsumer_ifc_Inspc_s;
  


/**CONST_Type useable as initializer for embedded/stack-instances*/
#define CONST_CmdConsumer_ifc_Inspc(OBJP) { CONST_ObjectJc(sizeof(CmdConsumer_ifc_Inspc_s), OBJP, &reflection_CmdConsumer_ifc_Inspc_s), 0 }

/**J2C: finalize declaration. It is called by Garbage collector and inside other finalized methods.
 * It should be called by the user if the instance is removed. */
void finalize_CmdConsumer_ifc_Inspc_F(ObjectJc* othis, ThCxt* _thCxt);




/**Executes a command, writes the answer in the answer datagram.*/
typedef int32 MT_executeMonitorCmd_CmdConsumer_ifc_Inspc(ObjectJc* ithis, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C int32 executeMonitorCmd_CmdConsumer_ifc_Inspc(ObjectJc* ithis, struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes, ThCxt* _thCxt);

/**Sets the aggregation for the answer.*/
typedef void MT_setAnswerComm_CmdConsumer_ifc_Inspc(ObjectJc* ithis, struct AnswerComm_ifc_Inspc_t* answerComm, ThCxt* _thCxt);
/* J2C:Call of the method at this class level, executes a dynamic call of the override-able method: */
METHOD_C void setAnswerComm_CmdConsumer_ifc_Inspc(ObjectJc* ithis, struct AnswerComm_ifc_Inspc_t* answerComm, ThCxt* _thCxt);


/* J2C: Method table contains all dynamic linked (virtual) methods
 * of the class and all super classes and interfaces. */
 extern const char sign_Mtbl_CmdConsumer_ifc_Inspc[]; //marker for methodTable check
typedef struct Mtbl_CmdConsumer_ifc_Inspc_t
{ MtblHeadJc head;
  MT_executeMonitorCmd_CmdConsumer_ifc_Inspc* executeMonitorCmd;
  MT_setAnswerComm_CmdConsumer_ifc_Inspc* setAnswerComm;
  Mtbl_ObjectJc ObjectJc;
} Mtbl_CmdConsumer_ifc_Inspc;



#if defined(__CPLUSPLUSJcpp) && defined(__cplusplus)
/* J2C: The C++-class-definition. */
class CmdConsumer_ifc_Inspc : private CmdConsumer_ifc_Inspc_s
{ public:

  virtual int32 executeMonitorCmd(struct Inspcitem_InspcDataExchangeAccess_Inspc_t* cmd, struct InspcDatagram_InspcDataExchangeAccess_Inspc_t* answer, int32 maxNrofAnswerBytes)=0;

  virtual void setAnswerComm(struct AnswerComm_ifc_Inspc_t* answerComm)=0;
};

#endif /*__CPLUSPLUSJcpp*/

#endif //__InspcJ2c_CmdConsumer_ifc_Inspc_h__
