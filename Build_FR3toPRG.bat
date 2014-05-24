@ECHO OFF
REM Gerado pela xDev Studio v0.72 as 28/08/2013 @ 13:22:55
REM Compilador .: xHB build 1.2.1 (SimpLex) & BCC 5.82 & FW 13.02
REM Destino ....: C:\des\FR3toPRG\F3toPRG.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\bcc582\Bin;C:\FWH.13.02;C:\xhb121\bin;C:\Inprise\vbroker\bin;C:\Arquivos de programas\Borland\Delphi7\Bin;C:\Arquivos de programas\Borland\Delphi7\Projects\Bpl\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;c:\fox;C:\Arquivos de programas\TortoiseSVN\bin
 SET INCLUDE=C:\bcc582\include;C:\FWH.13.02\include;C:\xhb121\include;;
 SET LIB=C:\bcc582\lib;C:\bcc582\lib\psdk;C:\FWH.13.02\lib;C:\xhb121\lib;;
 SET OBJ=C:\BCC582\LIB;C:\BCC582\lib\psdk;C:\FWH.13.02\LIB;C:\XHB121\lib;;

REM - FiveWin.xCompiler.prg(77) @ 13:22:55:328
ECHO .ÿ
ECHO * (1/3) Compilando FR3toPRG.prg
 harbour.exe ".\FR3toPRG.prg" /q /o".\FR3toPRG.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(112) @ 13:22:55:453
 echo -I"C:\bcc582\include;C:\FWH.13.02\include;C:\xhb121\include;;" > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\FWH.13.02\lib;C:\xhb121\lib;;;C:\BCC582\LIB;C:\BCC582\lib\psdk;C:\FWH.13.02\LIB;C:\XHB121\lib;;" >> "b32.bc"
 echo -o".\FR3toPRG.obj" >> "b32.bc"
 echo ".\FR3toPRG.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(113) @ 13:22:55:453
ECHO .ÿ
ECHO * (2/3) Compilando FR3toPRG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(245) @ 13:22:55:546
 echo -I"C:\bcc582\include;C:\FWH.13.02\include;C:\xhb121\include;;" + > "b32.bc"
 echo -L"C:\bcc582\lib;C:\bcc582\lib\psdk;C:\FWH.13.02\lib;C:\xhb121\lib;;;C:\BCC582\LIB;C:\BCC582\lib\psdk;C:\FWH.13.02\LIB;C:\XHB121\lib;;" + >> "b32.bc"
 echo -aa + >> "b32.bc"
 echo -Gn -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\FR3toPRG.obj", +  >> "b32.bc"
 echo ".\F3toPRG.EXE", +    >> "b32.bc"
 echo ".\F3toPRG.map", +    >> "b32.bc"
 echo FiveHx.lib FiveHC.lib + >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo gtgui.lib +  >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo "C:\xhb121\lib\pcrepos.lib" +   >> "b32.bc"
 echo "C:\bcc582\Lib\PSDK\psapi.lib" +   >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo , >> "b32.bc"
 echo ".\FR3toPRG.RES"  >> "b32.bc"

REM - FiveWin.xCompiler.prg(246) @ 13:22:55:546
ECHO .ÿ
ECHO * (3/3) Linkando F3toPRG.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
