# Microsoft Developer Studio Project File - Name="TestStringJcSimple" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=TestStringJcSimple - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "TestStringJcSimple.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "TestStringJcSimple.mak" CFG="TestStringJcSimple - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "TestStringJcSimple - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "TestStringJcSimple - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "TestStringJcSimple - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x407 /d "NDEBUG"
# ADD RSC /l 0x407 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "TestStringJcSimple - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /W3 /Gm /ZI /Od /I "S:/Jc/CRuntimeJavalike/incApplSpecific/TagetNumericSimple" /I "S:/Jc/CRuntimeJavalike/source/OSAL" /I "S:/Jc/CRuntimeJavalike/source" /I "S:/Jc/CRuntimeJavalike/sourceSpecials/cc_Msc6" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /FR /YX /FD /GZ /TP /c
# ADD BASE RSC /l 0x407 /d "_DEBUG"
# ADD RSC /l 0x407 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "TestStringJcSimple - Win32 Release"
# Name "TestStringJcSimple - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Group "CRJ"

# PROP Default_Filter ""
# Begin Group "Fwc"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\Fwc\fw_MemC.h
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\Fwc\fw_SimpleC.c
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\Fwc\fw_SimpleC.h
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\Fwc\fw_String.c
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\Fwc\fw_String.h
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\include\Fwc\fw_ThreadContext.h
# End Source File
# End Group
# Begin Group "FwConv_c"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\sourceSpecials\FwConv_c\fw_ExcStacktrcNo.c
# End Source File
# End Group
# Begin Group "cc_Msc6"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\sourceSpecials\cc_Msc6\compl_adaption.h
# End Source File
# End Group
# Begin Group "OSAL_Win32"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\sourceSpecials\osal_Windows32\os_error.c
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\sourceSpecials\osal_Windows32\os_mem.c
# End Source File
# End Group
# Begin Group "FwConv_Appl"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\incApplSpecific\TagetNumericSimple\applstdefJc.h
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\incApplSpecific\TagetNumericSimple\fw_assert.h
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\sourceSpecials\FwConv_c\ObjectJc_simple.c
# End Source File
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\source\FwConv_h\ObjectJc_simple.h
# End Source File
# End Group
# End Group
# Begin Group "Appl"

# PROP Default_Filter ""
# Begin Source File

SOURCE=S:\Jc\CRuntimeJavalike\src_Test\TestStringJcSimple.c
# End Source File
# End Group
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# End Target
# End Project
