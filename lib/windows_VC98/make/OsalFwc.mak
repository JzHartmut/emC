# Microsoft Developer Studio Generated NMAKE File, Based on OsalFwc.dsp
!IF "$(CFG)" == ""
CFG=CRuntimeJavalike_OSALlib - Win32 Release
!MESSAGE No configuration specified. Defaulting to CRuntimeJavalike_OSALlib - Win32 Release.
!ENDIF 

!IF "$(CFG)" != "CRuntimeJavalike_OSALlib - Win32 Release" && "$(CFG)" != "CRuntimeJavalike_OSALlib - Win32 Debug" && "$(CFG)" != "CRuntimeJavalike_OSALlib - Win32 DebugCpp"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "OsalFwc.mak" CFG="CRuntimeJavalike_OSALlib - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "CRuntimeJavalike_OSALlib - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "CRuntimeJavalike_OSALlib - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE "CRuntimeJavalike_OSALlib - Win32 DebugCpp" (based on "Win32 (x86) Static Library")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

ALL : "..\OsalFwc.lib" "$(OUTDIR)\OsalFwc.bsc"


CLEAN :
	-@erase "$(INTDIR)\fw_Exception.obj"
	-@erase "$(INTDIR)\fw_Exception.sbr"
	-@erase "$(INTDIR)\fw_ExceptionPrintStacktrace.obj"
	-@erase "$(INTDIR)\fw_ExceptionPrintStacktrace.sbr"
	-@erase "$(INTDIR)\fw_formatter.obj"
	-@erase "$(INTDIR)\fw_formatter.sbr"
	-@erase "$(INTDIR)\fw_MemC.obj"
	-@erase "$(INTDIR)\fw_MemC.sbr"
	-@erase "$(INTDIR)\fw_Readline.obj"
	-@erase "$(INTDIR)\fw_Readline.sbr"
	-@erase "$(INTDIR)\fw_SimpleC.obj"
	-@erase "$(INTDIR)\fw_SimpleC.sbr"
	-@erase "$(INTDIR)\fw_String.obj"
	-@erase "$(INTDIR)\fw_String.sbr"
	-@erase "$(INTDIR)\fw_threadContext.obj"
	-@erase "$(INTDIR)\fw_threadContext.sbr"
	-@erase "$(INTDIR)\fw_timeconversions.obj"
	-@erase "$(INTDIR)\fw_timeconversions.sbr"
	-@erase "$(INTDIR)\os_atomic.obj"
	-@erase "$(INTDIR)\os_atomic.sbr"
	-@erase "$(INTDIR)\os_common.obj"
	-@erase "$(INTDIR)\os_common.sbr"
	-@erase "$(INTDIR)\os_endian.obj"
	-@erase "$(INTDIR)\os_endian.sbr"
	-@erase "$(INTDIR)\os_error.obj"
	-@erase "$(INTDIR)\os_error.sbr"
	-@erase "$(INTDIR)\os_file.obj"
	-@erase "$(INTDIR)\os_file.sbr"
	-@erase "$(INTDIR)\os_mem.obj"
	-@erase "$(INTDIR)\os_mem.sbr"
	-@erase "$(INTDIR)\os_mutex.obj"
	-@erase "$(INTDIR)\os_mutex.sbr"
	-@erase "$(INTDIR)\os_socket.obj"
	-@erase "$(INTDIR)\os_socket.sbr"
	-@erase "$(INTDIR)\os_sync.obj"
	-@erase "$(INTDIR)\os_sync.sbr"
	-@erase "$(INTDIR)\os_thread.obj"
	-@erase "$(INTDIR)\os_thread.sbr"
	-@erase "$(INTDIR)\os_time.obj"
	-@erase "$(INTDIR)\os_time.sbr"
	-@erase "$(INTDIR)\Reflection_OSAL.obj"
	-@erase "$(INTDIR)\Reflection_OSAL.sbr"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(OUTDIR)\OsalFwc.bsc"
	-@erase "..\OsalFwc.lib"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /W3 /GX /O2 /I "includeEmptyRef" /I "../../../include" /I "../../../include/OSAL" /I "../../../includeSpecials/os_Windows_Msc6" /I "../../../includeSpecials/FwConvC32" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /FAcs /Fa"$(INTDIR)\\" /FR"$(INTDIR)\\" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\OsalFwc.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\fw_Exception.sbr" \
	"$(INTDIR)\fw_ExceptionPrintStacktrace.sbr" \
	"$(INTDIR)\fw_formatter.sbr" \
	"$(INTDIR)\fw_MemC.sbr" \
	"$(INTDIR)\fw_Readline.sbr" \
	"$(INTDIR)\fw_SimpleC.sbr" \
	"$(INTDIR)\fw_String.sbr" \
	"$(INTDIR)\fw_threadContext.sbr" \
	"$(INTDIR)\fw_timeconversions.sbr" \
	"$(INTDIR)\os_time.sbr" \
	"$(INTDIR)\os_atomic.sbr" \
	"$(INTDIR)\os_endian.sbr" \
	"$(INTDIR)\os_error.sbr" \
	"$(INTDIR)\os_file.sbr" \
	"$(INTDIR)\os_mem.sbr" \
	"$(INTDIR)\os_mutex.sbr" \
	"$(INTDIR)\os_socket.sbr" \
	"$(INTDIR)\os_sync.sbr" \
	"$(INTDIR)\os_thread.sbr" \
	"$(INTDIR)\os_common.sbr" \
	"$(INTDIR)\Reflection_OSAL.sbr"

"$(OUTDIR)\OsalFwc.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LIB32=link.exe -lib
LIB32_FLAGS=/nologo /out:"..\OsalFwc.lib" 
LIB32_OBJS= \
	"$(INTDIR)\fw_Exception.obj" \
	"$(INTDIR)\fw_ExceptionPrintStacktrace.obj" \
	"$(INTDIR)\fw_formatter.obj" \
	"$(INTDIR)\fw_MemC.obj" \
	"$(INTDIR)\fw_Readline.obj" \
	"$(INTDIR)\fw_SimpleC.obj" \
	"$(INTDIR)\fw_String.obj" \
	"$(INTDIR)\fw_threadContext.obj" \
	"$(INTDIR)\fw_timeconversions.obj" \
	"$(INTDIR)\os_time.obj" \
	"$(INTDIR)\os_atomic.obj" \
	"$(INTDIR)\os_endian.obj" \
	"$(INTDIR)\os_error.obj" \
	"$(INTDIR)\os_file.obj" \
	"$(INTDIR)\os_mem.obj" \
	"$(INTDIR)\os_mutex.obj" \
	"$(INTDIR)\os_socket.obj" \
	"$(INTDIR)\os_sync.obj" \
	"$(INTDIR)\os_thread.obj" \
	"$(INTDIR)\os_common.obj" \
	"$(INTDIR)\Reflection_OSAL.obj"

"..\OsalFwc.lib" : "$(OUTDIR)" $(DEF_FILE) $(LIB32_OBJS)
    $(LIB32) @<<
  $(LIB32_FLAGS) $(DEF_FLAGS) $(LIB32_OBJS)
<<

!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"

OUTDIR=T:\CRuntimeJavalike\lib\OSALJcD
INTDIR=T:\CRuntimeJavalike\lib\OSALJcD

ALL : "..\OsalFwcD.lib" "..\OsalFwcD.bsc"


CLEAN :
	-@erase "$(INTDIR)\fw_Exception.obj"
	-@erase "$(INTDIR)\fw_ExceptionPrintStacktrace.obj"
	-@erase "$(INTDIR)\fw_formatter.obj"
	-@erase "$(INTDIR)\fw_MemC.obj"
	-@erase "$(INTDIR)\fw_Readline.obj"
	-@erase "$(INTDIR)\fw_SimpleC.obj"
	-@erase "$(INTDIR)\fw_String.obj"
	-@erase "$(INTDIR)\fw_threadContext.obj"
	-@erase "$(INTDIR)\fw_timeconversions.obj"
	-@erase "$(INTDIR)\os_atomic.obj"
	-@erase "$(INTDIR)\os_common.obj"
	-@erase "$(INTDIR)\os_endian.obj"
	-@erase "$(INTDIR)\os_error.obj"
	-@erase "$(INTDIR)\os_file.obj"
	-@erase "$(INTDIR)\os_mem.obj"
	-@erase "$(INTDIR)\os_mutex.obj"
	-@erase "$(INTDIR)\os_socket.obj"
	-@erase "$(INTDIR)\os_sync.obj"
	-@erase "$(INTDIR)\os_thread.obj"
	-@erase "$(INTDIR)\os_time.obj"
	-@erase "$(INTDIR)\Reflection_OSAL.obj"
	-@erase "$(INTDIR)\vc60.idb"
	-@erase "$(INTDIR)\vc60.pdb"
	-@erase "..\OsalFwcD.bsc"
	-@erase "..\OsalFwcD.lib"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_Exception.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_ExceptionPrintStacktrace.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_formatter.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_MemC.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_Readline.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_SimpleC.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_String.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_threadContext.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\fw_timeconversions.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_atomic.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_common.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_endian.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_error.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_file.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_mem.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_mutex.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_socket.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_sync.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_thread.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\os_time.sbr"
	-@erase "T:\CRuntimeJavalike\lib\OsalFwcD\Reflection_OSAL.sbr"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /Zp1 /MTd /W4 /Gm /GX /ZI /Od /I "includeEmptyRef" /I "../../../include" /I "../../../include/OSAL" /I "../../../includeSpecials/os_Windows_Msc6" /I "../../../includeSpecials/FwConvC32" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FAcs /Fa"$(INTDIR)\\" /FR"T:\CRuntimeJavalike\lib\OsalFwcD/" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /GZ /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"..\OsalFwcD.bsc" 
BSC32_SBRS= \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_Exception.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_ExceptionPrintStacktrace.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_formatter.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_MemC.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_Readline.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_SimpleC.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_String.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_threadContext.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_timeconversions.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_time.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_atomic.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_endian.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_error.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_file.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_mem.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_mutex.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_socket.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_sync.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_thread.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\os_common.sbr" \
	"T:\CRuntimeJavalike\lib\OsalFwcD\Reflection_OSAL.sbr"

"..\OsalFwcD.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LIB32=link.exe -lib
LIB32_FLAGS=/nologo /out:"..\OsalFwcD.lib" 
LIB32_OBJS= \
	"$(INTDIR)\fw_Exception.obj" \
	"$(INTDIR)\fw_ExceptionPrintStacktrace.obj" \
	"$(INTDIR)\fw_formatter.obj" \
	"$(INTDIR)\fw_MemC.obj" \
	"$(INTDIR)\fw_Readline.obj" \
	"$(INTDIR)\fw_SimpleC.obj" \
	"$(INTDIR)\fw_String.obj" \
	"$(INTDIR)\fw_threadContext.obj" \
	"$(INTDIR)\fw_timeconversions.obj" \
	"$(INTDIR)\os_time.obj" \
	"$(INTDIR)\os_atomic.obj" \
	"$(INTDIR)\os_endian.obj" \
	"$(INTDIR)\os_error.obj" \
	"$(INTDIR)\os_file.obj" \
	"$(INTDIR)\os_mem.obj" \
	"$(INTDIR)\os_mutex.obj" \
	"$(INTDIR)\os_socket.obj" \
	"$(INTDIR)\os_sync.obj" \
	"$(INTDIR)\os_thread.obj" \
	"$(INTDIR)\os_common.obj" \
	"$(INTDIR)\Reflection_OSAL.obj"

"..\OsalFwcD.lib" : "$(OUTDIR)" $(DEF_FILE) $(LIB32_OBJS)
    $(LIB32) @<<
  $(LIB32_FLAGS) $(DEF_FLAGS) $(LIB32_OBJS)
<<

!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"

OUTDIR=.\..
INTDIR=T:\CRuntimeJavalike_OSALlib\DebugCpp
# Begin Custom Macros
OutDir=.\..
# End Custom Macros

ALL : "$(OUTDIR)\OsalFwcppD.lib" "$(OUTDIR)\OSALD.bsc"


CLEAN :
	-@erase "$(INTDIR)\fw_Exception.obj"
	-@erase "$(INTDIR)\fw_Exception.sbr"
	-@erase "$(INTDIR)\fw_ExceptionPrintStacktrace.obj"
	-@erase "$(INTDIR)\fw_ExceptionPrintStacktrace.sbr"
	-@erase "$(INTDIR)\fw_formatter.obj"
	-@erase "$(INTDIR)\fw_formatter.sbr"
	-@erase "$(INTDIR)\fw_MemC.obj"
	-@erase "$(INTDIR)\fw_MemC.sbr"
	-@erase "$(INTDIR)\fw_Readline.obj"
	-@erase "$(INTDIR)\fw_Readline.sbr"
	-@erase "$(INTDIR)\fw_SimpleC.obj"
	-@erase "$(INTDIR)\fw_SimpleC.sbr"
	-@erase "$(INTDIR)\fw_String.obj"
	-@erase "$(INTDIR)\fw_String.sbr"
	-@erase "$(INTDIR)\fw_threadContext.obj"
	-@erase "$(INTDIR)\fw_threadContext.sbr"
	-@erase "$(INTDIR)\fw_timeconversions.obj"
	-@erase "$(INTDIR)\fw_timeconversions.sbr"
	-@erase "$(INTDIR)\os_atomic.obj"
	-@erase "$(INTDIR)\os_atomic.sbr"
	-@erase "$(INTDIR)\os_common.obj"
	-@erase "$(INTDIR)\os_common.sbr"
	-@erase "$(INTDIR)\os_endian.obj"
	-@erase "$(INTDIR)\os_endian.sbr"
	-@erase "$(INTDIR)\os_error.obj"
	-@erase "$(INTDIR)\os_error.sbr"
	-@erase "$(INTDIR)\os_file.obj"
	-@erase "$(INTDIR)\os_file.sbr"
	-@erase "$(INTDIR)\os_mem.obj"
	-@erase "$(INTDIR)\os_mem.sbr"
	-@erase "$(INTDIR)\os_mutex.obj"
	-@erase "$(INTDIR)\os_mutex.sbr"
	-@erase "$(INTDIR)\os_socket.obj"
	-@erase "$(INTDIR)\os_socket.sbr"
	-@erase "$(INTDIR)\os_sync.obj"
	-@erase "$(INTDIR)\os_sync.sbr"
	-@erase "$(INTDIR)\os_thread.obj"
	-@erase "$(INTDIR)\os_thread.sbr"
	-@erase "$(INTDIR)\os_time.obj"
	-@erase "$(INTDIR)\os_time.sbr"
	-@erase "$(INTDIR)\Reflection_OSAL.obj"
	-@erase "$(INTDIR)\Reflection_OSAL.sbr"
	-@erase "$(OUTDIR)\OSALD.bsc"
	-@erase "$(OUTDIR)\OsalFwcppD.lib"
	-@erase "..\OsalFwcppD.idb"
	-@erase "..\OsalFwcppD.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

"$(INTDIR)" :
    if not exist "$(INTDIR)/$(NULL)" mkdir "$(INTDIR)"

CPP_PROJ=/nologo /Zp1 /MTd /W4 /Gm /GX /ZI /Od /I "includeEmptyRef" /I "../../../include" /I "../../../include/OSAL" /I "../../../includeSpecials/os_Windows_Msc6" /I "../../../includeSpecials/FwConvC32" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /FR"$(INTDIR)\\" /Fo"$(INTDIR)\\" /Fd"..\OsalFwcppD.pdb" /FD /GZ /TP /c 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\OSALD.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\fw_Exception.sbr" \
	"$(INTDIR)\fw_ExceptionPrintStacktrace.sbr" \
	"$(INTDIR)\fw_formatter.sbr" \
	"$(INTDIR)\fw_MemC.sbr" \
	"$(INTDIR)\fw_Readline.sbr" \
	"$(INTDIR)\fw_SimpleC.sbr" \
	"$(INTDIR)\fw_String.sbr" \
	"$(INTDIR)\fw_threadContext.sbr" \
	"$(INTDIR)\fw_timeconversions.sbr" \
	"$(INTDIR)\os_time.sbr" \
	"$(INTDIR)\os_atomic.sbr" \
	"$(INTDIR)\os_endian.sbr" \
	"$(INTDIR)\os_error.sbr" \
	"$(INTDIR)\os_file.sbr" \
	"$(INTDIR)\os_mem.sbr" \
	"$(INTDIR)\os_mutex.sbr" \
	"$(INTDIR)\os_socket.sbr" \
	"$(INTDIR)\os_sync.sbr" \
	"$(INTDIR)\os_thread.sbr" \
	"$(INTDIR)\os_common.sbr" \
	"$(INTDIR)\Reflection_OSAL.sbr"

"$(OUTDIR)\OSALD.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LIB32=link.exe -lib
LIB32_FLAGS=/nologo /out:"$(OUTDIR)\OsalFwcppD.lib" 
LIB32_OBJS= \
	"$(INTDIR)\fw_Exception.obj" \
	"$(INTDIR)\fw_ExceptionPrintStacktrace.obj" \
	"$(INTDIR)\fw_formatter.obj" \
	"$(INTDIR)\fw_MemC.obj" \
	"$(INTDIR)\fw_Readline.obj" \
	"$(INTDIR)\fw_SimpleC.obj" \
	"$(INTDIR)\fw_String.obj" \
	"$(INTDIR)\fw_threadContext.obj" \
	"$(INTDIR)\fw_timeconversions.obj" \
	"$(INTDIR)\os_time.obj" \
	"$(INTDIR)\os_atomic.obj" \
	"$(INTDIR)\os_endian.obj" \
	"$(INTDIR)\os_error.obj" \
	"$(INTDIR)\os_file.obj" \
	"$(INTDIR)\os_mem.obj" \
	"$(INTDIR)\os_mutex.obj" \
	"$(INTDIR)\os_socket.obj" \
	"$(INTDIR)\os_sync.obj" \
	"$(INTDIR)\os_thread.obj" \
	"$(INTDIR)\os_common.obj" \
	"$(INTDIR)\Reflection_OSAL.obj"

"$(OUTDIR)\OsalFwcppD.lib" : "$(OUTDIR)" $(DEF_FILE) $(LIB32_OBJS)
    $(LIB32) @<<
  $(LIB32_FLAGS) $(DEF_FLAGS) $(LIB32_OBJS)
<<

!ENDIF 

.c{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(INTDIR)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("OsalFwc.dep")
!INCLUDE "OsalFwc.dep"
!ELSE 
!MESSAGE Warning: cannot find "OsalFwc.dep"
!ENDIF 
!ENDIF 


!IF "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release" || "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug" || "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"
SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_atomic.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_atomic.obj"	"$(INTDIR)\os_atomic.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_atomic.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_atomic.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_atomic.obj"	"$(INTDIR)\os_atomic.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_endian.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_endian.obj"	"$(INTDIR)\os_endian.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_endian.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_endian.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_endian.obj"	"$(INTDIR)\os_endian.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_error.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_error.obj"	"$(INTDIR)\os_error.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_error.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_error.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_error.obj"	"$(INTDIR)\os_error.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_file.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_file.obj"	"$(INTDIR)\os_file.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_file.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_file.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_file.obj"	"$(INTDIR)\os_file.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_mem.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_mem.obj"	"$(INTDIR)\os_mem.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_mem.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_mem.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_mem.obj"	"$(INTDIR)\os_mem.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_mutex.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_mutex.obj"	"$(INTDIR)\os_mutex.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_mutex.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_mutex.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_mutex.obj"	"$(INTDIR)\os_mutex.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_socket.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_socket.obj"	"$(INTDIR)\os_socket.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_socket.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_socket.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_socket.obj"	"$(INTDIR)\os_socket.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_sync.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_sync.obj"	"$(INTDIR)\os_sync.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_sync.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_sync.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_sync.obj"	"$(INTDIR)\os_sync.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_thread.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_thread.obj"	"$(INTDIR)\os_thread.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_thread.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_thread.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_thread.obj"	"$(INTDIR)\os_thread.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\sourceSpecials\os_Windows_Msc6\os_time.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_time.obj"	"$(INTDIR)\os_time.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_time.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_time.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_time.obj"	"$(INTDIR)\os_time.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_Exception.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_Exception.obj"	"$(INTDIR)\fw_Exception.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_Exception.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_Exception.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_Exception.obj"	"$(INTDIR)\fw_Exception.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_ExceptionPrintStacktrace.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_ExceptionPrintStacktrace.obj"	"$(INTDIR)\fw_ExceptionPrintStacktrace.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_ExceptionPrintStacktrace.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_ExceptionPrintStacktrace.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_ExceptionPrintStacktrace.obj"	"$(INTDIR)\fw_ExceptionPrintStacktrace.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_formatter.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_formatter.obj"	"$(INTDIR)\fw_formatter.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_formatter.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_formatter.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_formatter.obj"	"$(INTDIR)\fw_formatter.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_MemC.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_MemC.obj"	"$(INTDIR)\fw_MemC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_MemC.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_MemC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_MemC.obj"	"$(INTDIR)\fw_MemC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_Readline.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_Readline.obj"	"$(INTDIR)\fw_Readline.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_Readline.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_Readline.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_Readline.obj"	"$(INTDIR)\fw_Readline.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_SimpleC.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_SimpleC.obj"	"$(INTDIR)\fw_SimpleC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_SimpleC.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_SimpleC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_SimpleC.obj"	"$(INTDIR)\fw_SimpleC.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_String.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_String.obj"	"$(INTDIR)\fw_String.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_String.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_String.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_String.obj"	"$(INTDIR)\fw_String.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_threadContext.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_threadContext.obj"	"$(INTDIR)\fw_threadContext.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_threadContext.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_threadContext.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_threadContext.obj"	"$(INTDIR)\fw_threadContext.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\Fwc\fw_timeconversions.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\fw_timeconversions.obj"	"$(INTDIR)\fw_timeconversions.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\fw_timeconversions.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\fw_timeconversions.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\fw_timeconversions.obj"	"$(INTDIR)\fw_timeconversions.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\OSAL\os_common.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\os_common.obj"	"$(INTDIR)\os_common.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\os_common.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\os_common.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\os_common.obj"	"$(INTDIR)\os_common.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\..\..\source\OSAL\Reflection_OSAL.c

!IF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Release"


"$(INTDIR)\Reflection_OSAL.obj"	"$(INTDIR)\Reflection_OSAL.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 Debug"


"$(INTDIR)\Reflection_OSAL.obj"	"T:\CRuntimeJavalike\lib\OsalFwcD\Reflection_OSAL.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "CRuntimeJavalike_OSALlib - Win32 DebugCpp"


"$(INTDIR)\Reflection_OSAL.obj"	"$(INTDIR)\Reflection_OSAL.sbr" : $(SOURCE) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 


!ENDIF 

