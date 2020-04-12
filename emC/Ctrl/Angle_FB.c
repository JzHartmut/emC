#include "Angle_FB.h"
#include <applstdef_emC.h>
#include <emC/base/Object_emC.h>

#ifdef DEF_REFLECTION_FULL
  #include "emC_Ctrl/Ctrl/genRefl/Angle_FB.crefl"
#elif defined(XXXDEF_REFLECTION_OFFS)
  //The classes are defined in a project specific ...refloffs.c file:
  extern_C ClassJc const reflection_Angle_abwmf_FB_CtrlemC;
#else
  //Class definition only as type marker:
  ClassJc const reflection_Angle_abwmf_FB_CtrlemC = INIZtypeOnly_ClassJc(reflection_Angle_abwmf_FB_CtrlemC, "Angle_abwmf_FB_CtrlemC");
#endif

//const ClassJc reflection_Angle_abwmf_FB = { CONST_ObjectJc(0, (ObjectJc*)&reflection_Angle_abwmf_FB.object, null), "Angle_abwmf_FB_CtrlemC", 0};


void ctor_Angle_abwmf_FB(Angle_abwmf_FB_CtrlemC* thiz, int32 identObj, float Tstep)
{ memset(thiz, 0, sizeof(*thiz)); 
  iniz_ObjectJc(&thiz->obj, thiz, sizeof(*thiz), &reflection_Angle_abwmf_FB_CtrlemC, identObj);
  setInitialized_ObjectJc(&thiz->obj);
  thiz->m = 1.0f;  //default for only-angle
}


