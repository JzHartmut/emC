export TMP="../tmp"
export OUTPUT="../source/OSAL/Reflection_OSAL.c"

rm $OUTPUT

export INPUT=""
export INPUT="$INPUT -i:../include/OSAL/os_AtomicAccess.h"
export INPUT="$INPUT -i:../include/OSAL/os_endian.h"
export INPUT="$INPUT -i:../include/OSAL/os_error.h"
export INPUT="$INPUT -i:../include/OSAL/os_file.h"
export INPUT="$INPUT -i:../include/OSAL/os_mem.h"
export INPUT="$INPUT -i:../include/OSAL/os_socket.h"
export INPUT="$INPUT -i:../include/OSAL/os_sync.h"
export INPUT="$INPUT -i:../include/OSAL/os_thread.h"
export INPUT="$INPUT -i:../include/OSAL/os_time.h"
export INPUT="$INPUT -i:../include/OSAL/os_waitnotify.h"

echo $INPUT
echo $OUTPUT

java -cp ../../zbnfjax/zbnf.jar:../../zbnfjax/header2Reflection.jar org.vishia.header2Reflection.CmdHeader2Reflection -out.c:$OUTPUT -c_only $INPUT -b:Reflection.ctr -z:../../zbnfjax/zbnf/Cheader.zbnf --report:$TMP/genReflection.rpt --rlevel:335

#if errorlevel;
                                                                                                                                                                                 