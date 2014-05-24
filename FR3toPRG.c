/*
 * xHarbour build 1.2.1 Intl. (SimpLex) (Rev. 6406)
 * Generated C source code from <C:\\des\\FR3toPRG\\FR3toPRG.prg>
 * Command: C:\des\FR3toPRG\FR3toPRG.prg /q /oC:\des\FR3toPRG\FR3toPRG.c /M /N 
 * Created: 2013.08.28 13:22:55 (Borland C++ 5.8.2 (32 bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "C:\\des\\FR3toPRG\\FR3toPRG.prg"

HB_FUNC( MAIN );
HB_FUNC( ESCREVEFR3 );
HB_FUNC( TEXTOMEMO );
HB_FUNC( LOG10 );
HB_FUNC( FLOOR );

/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( TICON );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CGETFILE );
HB_FUNC_EXTERN( TBUTTONBMP );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( HB_ATOKENS );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_EXTERN( WINEXEC );
HB_FUNC_EXTERN( TTXTFILE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( LEFT );
HB_FUNC_EXTERN( TRANSFORM );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FR3TOPRG )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "MAIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( MAIN )}, &ModuleFakeDyn },
{ "LINHA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FILELOCAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FILIACAO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "FILEDIR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LSAVE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ABREBAND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TICON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TICON )}, NULL },
{ "OICO", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "ODLG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "REDEFINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CGETFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CGETFILE )}, NULL },
{ "REFRESH", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGET", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TBUTTONBMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTONBMP )}, NULL },
{ "END", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OF", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OBTNBMP1", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OBTNBMP2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "ESCREVEFR3", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ESCREVEFR3 )}, &ModuleFakeDyn },
{ "HB_ATOKENS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ATOKENS )}, NULL },
{ "VFILELOCAL", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "X", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "FILENAME", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "WINEXEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( WINEXEC )}, NULL },
{ "TTXTFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( TTXTFILE )}, NULL },
{ "OTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "NPAGEATUA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "READLINE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "MTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SKIP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "LEFT", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEFT )}, NULL },
{ "VTEXT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SLINHA", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "SPAGE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TIPBAND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TEXTOMEMO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TEXTOMEMO )}, &ModuleFakeDyn },
{ "SPROP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "LOG10", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( LOG10 )}, &ModuleFakeDyn },
{ "FLOOR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FLOOR )}, &ModuleFakeDyn }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_FR3TOPRG )

#if defined(__ICL)
   #pragma warning(disable:177)
#endif

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_FR3TOPRG
#elif defined(HB_MSC_STARTUP)
   #if defined( HB_OS_WIN_64 )
      #pragma section( HB_MSC_START_SEGMENT, long, read )
   #endif
   #pragma data_seg( HB_MSC_START_SEGMENT )
   static HB_$INITSYM hb_vm_auto_SymbolInit_FR3TOPRG = hb_vm_SymbolInit_FR3TOPRG;
   #pragma data_seg()
#endif

HB_FUNC( MAIN )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ':', 92, 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* LINHA */
	HB_P_PUSHSYMNEAR, 6,	/* FILELOCAL */
	HB_P_PUSHSYMNEAR, 7,	/* FILIACAO */
	HB_P_PUSHSYMNEAR, 8,	/* FILEDIR */
	HB_P_PUSHSYMNEAR, 9,	/* LSAVE */
	HB_P_PUSHSYMNEAR, 10,	/* ABREBAND */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 10, 0,	/* ABREBAND */
	HB_P_POPVARIABLE, 9, 0,	/* LSAVE */
	HB_P_POPVARIABLE, 8, 0,	/* FILEDIR */
	HB_P_POPVARIABLE, 7, 0,	/* FILIACAO */
	HB_P_POPVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00055 */ HB_P_LINEOFFSET, 2,	/* 6 */
	HB_P_MESSAGE, 12, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 13,	/* TICON */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'F', 'R', '3', 'T', 'O', 'P', 'R', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 5,
	HB_P_POPVARIABLE, 14, 0,	/* OICO */
/* 00085 */ HB_P_LINEOFFSET, 3,	/* 7 */
	HB_P_MESSAGE, 12, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 15,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'F', 'R', '3', 't', 'o', 'P', 'R', 'G', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'D', 'L', 'G', '_', 'G', 'E', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 14, 0,	/* OICO */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 21,
	HB_P_POPVARIABLE, 16, 0,	/* ODLG */
/* 00142 */ HB_P_LINEOFFSET, 4,	/* 8 */
	HB_P_MESSAGE, 17, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 18,	/* TGET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 162, 15,	/* 4002 */
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 19,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00176) */
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00182) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_ENDBLOCK,
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 20,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 54, 0,	/* 54 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 21,	/* CGETFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'*', '.', 'F', 'r', '3', 0, 
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'e', 'l', 'e', 'c', 'i', 'o', 'n', 'e', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_MESSAGE, 22, 0,	/* REFRESH */
	HB_P_PUSHVARIABLE, 23, 0,	/* OGET */
	HB_P_SENDSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'U', 'P', 'A', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'F', 'i', 'l', 'e', 'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 24,
	HB_P_POPVARIABLE, 23, 0,	/* OGET */
/* 00298 */ HB_P_LINEOFFSET, 5,	/* 9 */
	HB_P_MESSAGE, 17, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 24,	/* TBUTTONBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 163, 15,	/* 4003 */
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 25, 0,	/* END */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_TRUE,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* LSAVE */
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 13,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* OWND */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 27, 0,	/* OF */
	HB_P_POPVARIABLE, 28, 0,	/* OBTNBMP1 */
/* 00357 */ HB_P_LINEOFFSET, 6,	/* 10 */
	HB_P_MESSAGE, 17, 0,	/* REDEFINE */
	HB_P_PUSHSYMNEAR, 24,	/* TBUTTONBMP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 164, 15,	/* 4004 */
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_MESSAGE, 25, 0,	/* END */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_FALSE,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* LSAVE */
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 13,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* OWND */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 27, 0,	/* OF */
	HB_P_POPVARIABLE, 29, 0,	/* OBTNBMP2 */
/* 00416 */ HB_P_LINEOFFSET, 7,	/* 11 */
	HB_P_MESSAGE, 30, 0,	/* ACTIVATE */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_MESSAGE, 31, 0,	/* BLCLICKED */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 32, 0,	/* BMOVED */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 33, 0,	/* BPAINTED */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 34, 0,	/* BRCLICKED */
	HB_P_PUSHVARIABLE, 16, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 11,
	HB_P_POP,
/* 00466 */ HB_P_LINEOFFSET, 8,	/* 12 */
	HB_P_PUSHVARIABLE, 9, 0,	/* LSAVE */
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00478) */
/* 00473 */ HB_P_LINEOFFSET, 9,	/* 13 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00478 */ HB_P_LINEOFFSET, 12,	/* 16 */
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_RIGHT, 3, 0,	/* 3 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'r', '3', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 00582) */
/* 00495 */ HB_P_LINEOFFSET, 13,	/* 17 */
	HB_P_PUSHSYMNEAR, 35,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'c', 'a', 'd', 'o', ' ', 'n', 227, 'o', ' ', 233, ' ', 'c', 'o', 'm', 'p', 'a', 't', 'i', 'v', 'e', 'l', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'a', 'p', 'l', 'i', 'c', 'a', 231, 227, 'o', '.', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00577 */ HB_P_LINEOFFSET, 14,	/* 18 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00582 */ HB_P_LINEOFFSET, 17,	/* 21 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00676 */ HB_P_LINEOFFSET, 18,	/* 22 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'/', '/', ' ', ' ', ' ', 'F', 'R', '3', ' ', ' ', 'T', 'O', ' ', ' ', 'P', 'R', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, 9, 9, 'B', 'y', ':', ' ', 'A', 'r', 't', 'h', 'u', 'r', ' ', 'S', 'i', 'l', 'v', 'e', 's', 't', 'r', 'e', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00765 */ HB_P_LINEOFFSET, 19,	/* 23 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'/', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, 9, 9, 9, 9, 9, ' ', ' ', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00848 */ HB_P_LINEOFFSET, 20,	/* 24 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00942 */ HB_P_LINEOFFSET, 21,	/* 25 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'/', '/', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'G', 'e', 'r', 'a', 231, 227, 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01051 */ HB_P_LINEOFFSET, 22,	/* 26 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'/', '/', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'm', 'p', 'o', 'r', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01132 */ HB_P_LINEOFFSET, 23,	/* 27 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01226 */ HB_P_LINEOFFSET, 24,	/* 28 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'#', 'I', 'n', 'c', 'l', 'u', 'd', 'e', ' ', 34, 'F', 'i', 'v', 'e', 'W', 'i', 'n', '.', 'C', 'H', 34, 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01261 */ HB_P_LINEOFFSET, 25,	/* 29 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'#', 'I', 'n', 'c', 'l', 'u', 'd', 'e', ' ', 34, 'F', 'a', 's', 't', 'R', 'e', 'p', 'H', '.', 'C', 'H', 34, 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01297 */ HB_P_LINEOFFSET, 26,	/* 30 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01311 */ HB_P_LINEOFFSET, 27,	/* 31 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01325 */ HB_P_LINEOFFSET, 28,	/* 32 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ', 'M', 'a', 'i', 'n', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01354 */ HB_P_LINEOFFSET, 29,	/* 33 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	9, 'F', 'r', 'P', 'r', 'n', ':', '=', 'f', 'r', 'R', 'e', 'p', 'o', 'r', 't', 'M', 'a', 'n', 'a', 'g', 'e', 'r', '(', ')', ':', 'n', 'e', 'w', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01399 */ HB_P_LINEOFFSET, 30,	/* 34 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01413 */ HB_P_LINEOFFSET, 31,	/* 35 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	9, 'A', 'd', 'd', 'V', 'a', 'r', 'i', 'a', 'v', 'e', 'l', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01441 */ HB_P_LINEOFFSET, 32,	/* 36 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01455 */ HB_P_LINEOFFSET, 33,	/* 37 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	9, 'F', 'r', 'P', 'r', 'n', ':', 'S', 'h', 'o', 'w', 'R', 'e', 'p', 'o', 'r', 't', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01488 */ HB_P_LINEOFFSET, 34,	/* 38 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	9, 'F', 'r', 'P', 'r', 'n', ':', 'D', 'e', 's', 't', 'r', 'o', 'y', 'F', 'R', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01520 */ HB_P_LINEOFFSET, 35,	/* 39 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'e', 't', 'u', 'r', 'n', ' ', '.', 'T', '.', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01544 */ HB_P_LINEOFFSET, 36,	/* 40 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01558 */ HB_P_LINEOFFSET, 37,	/* 41 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01572 */ HB_P_LINEOFFSET, 38,	/* 42 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ', 'A', 'd', 'd', 'V', 'a', 'r', 'i', 'a', 'v', 'e', 'l', '(', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01608 */ HB_P_LINEOFFSET, 41,	/* 45 */
	HB_P_PUSHSYMNEAR, 38,	/* ESCREVEFR3 */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_DOSHORT, 1,
/* 01618 */ HB_P_LINEOFFSET, 44,	/* 48 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'e', 't', 'u', 'r', 'n', ' ', '.', 't', '.', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01642 */ HB_P_LINEOFFSET, 45,	/* 49 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01656 */ HB_P_LINEOFFSET, 46,	/* 50 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01670 */ HB_P_LINEOFFSET, 47,	/* 51 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01684 */ HB_P_LINEOFFSET, 48,	/* 52 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 'o', 'B', 'j', ',', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01739 */ HB_P_LINEOFFSET, 49,	/* 53 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	9, 'L', 'o', 'c', 'a', 'l', ' ', 'a', 'P', 'r', 'o', ':', '=', '{', '}', ' ', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01769 */ HB_P_LINEOFFSET, 50,	/* 54 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	9, 'L', 'o', 'c', 'a', 'l', ' ', 'a', 'P', 'r', 'o', 'p', ':', '=', '{', '}', ' ', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01800 */ HB_P_LINEOFFSET, 51,	/* 55 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01814 */ HB_P_LINEOFFSET, 52,	/* 56 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	9, 'a', 'P', 'r', 'o', ':', '=', 'H', 'B', '_', 'A', 'T', 'o', 'k', 'e', 'n', 's', '(', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', ',', 34, ';', 34, ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01863 */ HB_P_LINEOFFSET, 53,	/* 57 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01877 */ HB_P_LINEOFFSET, 54,	/* 58 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	9, 'f', 'o', 'r', ' ', 'x', ':', '=', '1', ' ', 't', 'o', ' ', 'l', 'e', 'n', '(', 'a', 'P', 'r', 'o', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01913 */ HB_P_LINEOFFSET, 55,	/* 59 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	9, 9, 'i', 'f', ' ', '(', 'A', 'T', '(', 34, '.', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', ')', '>', '0', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01951 */ HB_P_LINEOFFSET, 56,	/* 60 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	9, 9, 9, ' ', 'a', 'a', 'd', 'd', '(', 'a', 'P', 'r', 'o', 'p', ',', 'S', 'u', 'b', 's', 't', 'r', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ',', '1', ',', 'A', 'T', '(', 34, '.', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '-', '1', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02016 */ HB_P_LINEOFFSET, 57,	/* 61 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	9, 9, ' ', ' ', ' ', ' ', 'a', 'a', 'd', 'd', '(', 'a', 'P', 'r', 'o', 'p', ',', 'S', 'u', 'b', 's', 't', 'r', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ',', 'A', 'T', '(', 34, '.', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '+', '1', ',', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '-', '(', '1', '+', 'A', 'T', '(', 34, '.', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', ')', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02117 */ HB_P_LINEOFFSET, 58,	/* 62 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	9, 9, ' ', ' ', ' ', ' ', 'a', 'a', 'd', 'd', '(', 'a', 'P', 'r', 'o', 'p', ',', 'S', 'u', 'b', 's', 't', 'r', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ',', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '+', '1', ',', 'L', 'e', 'n', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '-', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02211 */ HB_P_LINEOFFSET, 59,	/* 63 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	9, 9, ' ', ' ', ' ', ' ', 'I', 'F', ' ', 'r', 'i', 'g', 'h', 't', '(', 'a', 'P', 'r', 'o', 'p', '[', '3', ']', ',', '2', ')', ' ', '=', '=', ' ', 34, 'N', '*', 34, 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02259 */ HB_P_LINEOFFSET, 60,	/* 64 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	9, 9, 9, ' ', 9, 'F', 'r', 'P', 'r', 'n', ':', 'S', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', '(', 'o', 'B', 'j', '+', 34, '.', 34, '+', 'a', 'P', 'r', 'o', 'p', '[', '1', ']', ',', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ',', 'V', 'a', 'l', '(', 'S', 'u', 'b', 's', 't', 'r', '(', 'S', 't', 'r', 'T', 'r', 'a', 'n', '(', 'a', 'P', 'r', 'o', 'p', '[', '3', ']', ',', 34, ',', 34, ',', 34, '.', 34, ')', ',', '1', ',', 'L', 'e', 'n', '(', 'a', 'P', 'r', 'o', 'p', '[', '3', ']', ')', '-', '2', ')', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02379 */ HB_P_LINEOFFSET, 61,	/* 65 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	9, 9, ' ', ' ', ' ', ' ', 'E', 'L', 'S', 'E', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02403 */ HB_P_LINEOFFSET, 62,	/* 66 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	9, 9, 9, ' ', 9, 'F', 'r', 'P', 'r', 'n', ':', 'S', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', '(', 'o', 'B', 'j', '+', 34, '.', 34, '+', 'a', 'P', 'r', 'o', 'p', '[', '1', ']', ',', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ',', 'a', 'P', 'r', 'o', 'p', '[', '3', ']', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02475 */ HB_P_LINEOFFSET, 63,	/* 67 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	9, 9, ' ', ' ', ' ', ' ', 'E', 'N', 'D', 'I', 'F', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02500 */ HB_P_LINEOFFSET, 64,	/* 68 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	9, 9, 9, ' ', 'a', 'P', 'r', 'o', 'p', ':', '=', '{', '}', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02527 */ HB_P_LINEOFFSET, 65,	/* 69 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	9, 9, 'e', 'l', 's', 'e', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02547 */ HB_P_LINEOFFSET, 66,	/* 70 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	9, 9, ' ', ' ', ' ', ' ', 'a', 'a', 'd', 'd', '(', 'a', 'P', 'r', 'o', 'p', ',', 'S', 'u', 'b', 's', 't', 'r', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ',', '1', ',', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '-', '1', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02614 */ HB_P_LINEOFFSET, 67,	/* 71 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	9, 9, ' ', ' ', ' ', ' ', 'a', 'a', 'd', 'd', '(', 'a', 'P', 'r', 'o', 'p', ',', 'S', 'u', 'b', 's', 't', 'r', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ',', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '+', '1', ',', 'L', 'e', 'n', '(', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', '-', 'A', 'T', '(', 34, '=', 34, ',', 'a', 'P', 'r', 'o', '[', 'x', ']', ')', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02708 */ HB_P_LINEOFFSET, 68,	/* 72 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	9, 9, ' ', ' ', ' ', ' ', 'I', 'F', ' ', 'r', 'i', 'g', 'h', 't', '(', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ',', '2', ')', ' ', '=', '=', ' ', 34, 'N', '*', 34, 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02756 */ HB_P_LINEOFFSET, 69,	/* 73 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 96,	/* 96 */
	9, 9, 9, ' ', 9, 'F', 'r', 'P', 'r', 'n', ':', 'S', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', '(', 'o', 'B', 'j', ',', 'a', 'P', 'r', 'o', 'p', '[', '1', ']', ',', 'V', 'a', 'l', '(', 'S', 'u', 'b', 's', 't', 'r', '(', 'S', 't', 'r', 'T', 'r', 'a', 'n', '(', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ',', 34, ',', 34, ',', 34, '.', 34, ')', ',', '1', ',', 'L', 'e', 'n', '(', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ')', '-', '2', ')', ')', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02863 */ HB_P_LINEOFFSET, 70,	/* 74 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	9, 9, ' ', ' ', ' ', ' ', 'E', 'L', 'S', 'E', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02887 */ HB_P_LINEOFFSET, 71,	/* 75 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	9, 9, 9, ' ', 9, 'F', 'r', 'P', 'r', 'n', ':', 'S', 'e', 't', 'P', 'r', 'o', 'p', 'e', 'r', 't', 'y', '(', 'o', 'B', 'j', ',', 'a', 'P', 'r', 'o', 'p', '[', '1', ']', ',', 'a', 'P', 'r', 'o', 'p', '[', '2', ']', ')', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02946 */ HB_P_LINEOFFSET, 72,	/* 76 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	9, 9, ' ', ' ', ' ', ' ', 'E', 'N', 'D', 'I', 'F', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02971 */ HB_P_LINEOFFSET, 73,	/* 77 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	9, 9, 9, ' ', 'a', 'P', 'r', 'o', 'p', ':', '=', '{', '}', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 02998 */ HB_P_LINEOFFSET, 74,	/* 78 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	9, 9, 'e', 'n', 'd', 'i', 'f', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03019 */ HB_P_LINEOFFSET, 75,	/* 79 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	9, 'n', 'e', 'x', 't', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03038 */ HB_P_LINEOFFSET, 76,	/* 80 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03052 */ HB_P_LINEOFFSET, 77,	/* 81 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'e', 't', 'u', 'r', 'n', ' ', '.', 't', '.', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03076 */ HB_P_LINEOFFSET, 78,	/* 82 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03090 */ HB_P_LINEOFFSET, 79,	/* 83 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03104 */ HB_P_LINEOFFSET, 80,	/* 84 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03198 */ HB_P_LINEOFFSET, 81,	/* 85 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'/', '/', ' ', ' ', ' ', 'F', 'R', '3', ' ', ' ', 'T', 'O', ' ', ' ', 'P', 'R', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, 9, 9, 'B', 'y', ':', ' ', 'A', 'r', 't', 'h', 'u', 'r', ' ', 'S', 'i', 'l', 'v', 'e', 's', 't', 'r', 'e', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03287 */ HB_P_LINEOFFSET, 82,	/* 86 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03381 */ HB_P_LINEOFFSET, 83,	/* 87 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'/', '/', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 13, 10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03475 */ HB_P_LINEOFFSET, 84,	/* 88 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'/', '/', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'G', 'e', 'r', 'a', 231, 227, 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03584 */ HB_P_LINEOFFSET, 85,	/* 89 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'/', '/', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'm', 'p', 'o', 'r', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '/', '/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03665 */ HB_P_LINEOFFSET, 86,	/* 90 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'/', '/', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '=', '/', '/', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03757 */ HB_P_LINEOFFSET, 88,	/* 92 */
	HB_P_PUSHSYMNEAR, 39,	/* HB_ATOKENS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* FILELOCAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 40, 0,	/* VFILELOCAL */
/* 03774 */ HB_P_LINEOFFSET, 89,	/* 93 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* VFILELOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 03860) */
/* 03797 */ HB_P_LINEOFFSET, 90,	/* 94 */
	HB_P_PUSHVARIABLE, 8, 0,	/* FILEDIR */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ONE,
	HB_P_NOTEQUAL,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 03828) */
	HB_P_PUSHSYMNEAR, 43,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* VFILELOCAL */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 03845) */
	HB_P_PUSHSYMNEAR, 44,	/* LOWER */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* VFILELOCAL */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* FILEDIR */
/* 03849 */ HB_P_LINEOFFSET, 91,	/* 95 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 41, 0,	/* X */
	HB_P_JUMPNEAR, 178,	/* -78 (abs: 03780) */
/* 03860 */ HB_P_LINEOFFSET, 92,	/* 96 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* VFILELOCAL */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* VFILELOCAL */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 252, 255,	/* -4*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 46, 0,	/* FILENAME */
/* 03891 */ HB_P_LINEOFFSET, 93,	/* 97 */
	HB_P_PUSHSYMNEAR, 47,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* FILEDIR */
	HB_P_PUSHVARIABLE, 46, 0,	/* FILENAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'p', 'r', 'g', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_DOSHORT, 2,
/* 03916 */ HB_P_LINEOFFSET, 94,	/* 98 */
	HB_P_PUSHSYMNEAR, 35,	/* MSGINFO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 8, 0,	/* FILEDIR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 46, 0,	/* FILENAME */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'.', 'p', 'r', 'g', ' ', 'F', 'o', 'i', ' ', 'G', 'e', 'r', 'a', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 'S', 'u', 'c', 'e', 's', 's', 'o', '.', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
/* 03977 */ HB_P_LINEOFFSET, 95,	/* 99 */
	HB_P_PUSHSYMNEAR, 48,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'x', 'p', 'l', 'o', 'r', 'e', 'r', ' ', 0, 
	HB_P_PUSHVARIABLE, 8, 0,	/* FILEDIR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04000 */ HB_P_LINEOFFSET, 96,	/* 100 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04005 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( ESCREVEFR3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 104, 0,	/* 104 */
	HB_P_MESSAGE, 12, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 49,	/* TTXTFILE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 1,	/* FILELOCAL */
	HB_P_SENDSHORT, 1,
	HB_P_POPVARIABLE, 50, 0,	/* OTEXT */
/* 00021 */ HB_P_LINEOFFSET, 1,	/* 105 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* NPAGE */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 106 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 52, 0,	/* NPAGEATUA */
/* 00033 */ HB_P_LINEOFFSET, 3,	/* 107 */
	HB_P_MESSAGE, 53, 0,	/* EOF */
	HB_P_PUSHVARIABLE, 50, 0,	/* OTEXT */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPTRUE, 61, 26,	/* 6717 (abs: 06760) */
/* 00046 */ HB_P_LINEOFFSET, 4,	/* 108 */
	HB_P_MESSAGE, 54, 0,	/* READLINE */
	HB_P_PUSHVARIABLE, 50, 0,	/* OTEXT */
	HB_P_SENDSHORT, 0,
	HB_P_POPVARIABLE, 55, 0,	/* MTEXT */
	HB_P_MESSAGE, 56, 0,	/* SKIP */
	HB_P_PUSHVARIABLE, 50, 0,	/* OTEXT */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 109 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 55, 0,	/* MTEXT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'<', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'>', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'?', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 55, 0,	/* MTEXT */
/* 00117 */ HB_P_LINEOFFSET, 6,	/* 110 */
	HB_P_PUSHSYMNEAR, 39,	/* HB_ATOKENS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 55, 0,	/* MTEXT */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 55, 0,	/* MTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 60, 0,	/* VTEXT */
/* 00150 */ HB_P_LINEOFFSET, 8,	/* 112 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'P', 'a', 'g', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00191) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 00427) */
/* 00194 */ HB_P_LINEOFFSET, 9,	/* 113 */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	13, 10, '/', '/', 'N', 'o', 'v', 'a', ' ', 'P', 'a', 'g', 'i', 'n', 'a', '/', '/', 13, 10, 'F', 'r', 'P', 'r', 'n', ':', 'N', 'e', 'w', 'R', 'e', 'p', 'o', 'r', 't', '(', 34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	34, ',', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 00342 */ HB_P_LINEOFFSET, 10,	/* 114 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00348 */ HB_P_LINEOFFSET, 11,	/* 115 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUENEAR, 62,	/* 62 (abs: 00427) */
/* 00367 */ HB_P_LINEOFFSET, 12,	/* 116 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00378 */ HB_P_LINEOFFSET, 13,	/* 117 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMPNEAR, 179,	/* -77 (abs: 00348) */
/* 00427 */ HB_P_LINEOFFSET, 17,	/* 121 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'P', 'a', 'g', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00470) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 240, 0,	/* 240 (abs: 00710) */
/* 00473 */ HB_P_LINEOFFSET, 18,	/* 122 */
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_RIGHT, 5, 0,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 00507 */ HB_P_LINEOFFSET, 19,	/* 123 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00513 */ HB_P_LINEOFFSET, 20,	/* 124 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUENEAR, 62,	/* 62 (abs: 00592) */
/* 00532 */ HB_P_LINEOFFSET, 21,	/* 125 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00543 */ HB_P_LINEOFFSET, 22,	/* 126 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMPNEAR, 179,	/* -77 (abs: 00513) */
/* 00592 */ HB_P_LINEOFFSET, 24,	/* 128 */
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 00642 */ HB_P_LINEOFFSET, 25,	/* 129 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* SPAGE */
/* 00681 */ HB_P_LINEOFFSET, 26,	/* 130 */
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* NPAGE */
/* 00690 */ HB_P_LINEOFFSET, 27,	/* 131 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 00702 */ HB_P_LINEOFFSET, 28,	/* 132 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 7, 0,	/* FILIACAO */
/* 00710 */ HB_P_LINEOFFSET, 31,	/* 135 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'P', 'a', 'g', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00753) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_ONE,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 116, 1,	/* 372 (abs: 01125) */
/* 00756 */ HB_P_LINEOFFSET, 32,	/* 136 */
	HB_P_PUSHVARIABLE, 52, 0,	/* NPAGEATUA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 88, 1,	/* 344 (abs: 01108) */
/* 00767 */ HB_P_LINEOFFSET, 33,	/* 137 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	13, 10, '/', '/', 'N', 'o', 'v', 'a', ' ', 'P', 'a', 'g', 'i', 'n', 'a', '/', '/', 13, 10, 'F', 'r', 'P', 'r', 'n', ':', 'A', 'd', 'd', 'P', 'a', 'g', 'e', '(', 34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', ' ', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	34, ',', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 00913 */ HB_P_LINEOFFSET, 34,	/* 138 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00919 */ HB_P_LINEOFFSET, 35,	/* 139 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUENEAR, 62,	/* 62 (abs: 00998) */
/* 00938 */ HB_P_LINEOFFSET, 36,	/* 140 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 00949 */ HB_P_LINEOFFSET, 37,	/* 141 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMPNEAR, 179,	/* -77 (abs: 00919) */
/* 00998 */ HB_P_LINEOFFSET, 39,	/* 143 */
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 01048 */ HB_P_LINEOFFSET, 40,	/* 144 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	34, 'P', 'a', 'g', 'e', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'E', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* SPAGE */
/* 01087 */ HB_P_LINEOFFSET, 41,	/* 145 */
	HB_P_PUSHVARIABLE, 51, 0,	/* NPAGE */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* NPAGE */
/* 01096 */ HB_P_LINEOFFSET, 42,	/* 146 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 01108 */ HB_P_LINEOFFSET, 44,	/* 148 */
	HB_P_PUSHVARIABLE, 52, 0,	/* NPAGEATUA */
	HB_P_INC,
	HB_P_POPVARIABLE, 52, 0,	/* NPAGEATUA */
/* 01117 */ HB_P_LINEOFFSET, 45,	/* 149 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 7, 0,	/* FILIACAO */
/* 01125 */ HB_P_LINEOFFSET, 48,	/* 152 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 10, 0,	/* ABREBAND */
	HB_P_TRUE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 144, 2,	/* 656 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'T', 'i', 't', 'l', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 106, 2,	/* 618 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'S', 'u', 'm', 'm', 'a', 'r', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 66, 2,	/* 578 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 29, 2,	/* 541 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 248, 1,	/* 504 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 215, 1,	/* 471 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 182, 1,	/* 438 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'M', 'a', 's', 't', 'e', 'r', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 145, 1,	/* 401 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'D', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 108, 1,	/* 364 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'S', 'u', 'b', 'd', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 68, 1,	/* 324 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '4', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 32, 1,	/* 288 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '5', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 252, 0,	/* 252 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '6', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 216, 0,	/* 216 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 178, 0,	/* 178 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 140, 0,	/* 140 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'f', 'r', 'x', 'C', 'h', 'i', 'l', 'd', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 108,	/* 108 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 70,	/* 70 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 01789) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'f', 'r', 'x', 'O', 'v', 'e', 'r', 'l', 'a', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01805) */
/* 01791 */ HB_P_LINEOFFSET, 49,	/* 153 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 7, 0,	/* FILIACAO */
/* 01799 */ HB_P_LINEOFFSET, 50,	/* 154 */
	HB_P_FALSE,
	HB_P_POPVARIABLE, 10, 0,	/* ABREBAND */
/* 01805 */ HB_P_LINEOFFSET, 55,	/* 159 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 10, 0,	/* ABREBAND */
	HB_P_FALSE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 144, 2,	/* 656 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'T', 'i', 't', 'l', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 106, 2,	/* 618 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'S', 'u', 'm', 'm', 'a', 'r', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 66, 2,	/* 578 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 29, 2,	/* 541 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 248, 1,	/* 504 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 215, 1,	/* 471 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 182, 1,	/* 438 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'M', 'a', 's', 't', 'e', 'r', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 145, 1,	/* 401 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'D', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 108, 1,	/* 364 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'S', 'u', 'b', 'd', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 68, 1,	/* 324 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '4', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 32, 1,	/* 288 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '5', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 252, 0,	/* 252 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '6', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 216, 0,	/* 216 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 178, 0,	/* 178 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 140, 0,	/* 140 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'f', 'r', 'x', 'C', 'h', 'i', 'l', 'd', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 108,	/* 108 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 70,	/* 70 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 02469) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'f', 'r', 'x', 'O', 'v', 'e', 'r', 'l', 'a', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 218, 5,	/* 1498 (abs: 03967) */
/* 02472 */ HB_P_LINEOFFSET, 56,	/* 160 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'T', 'i', 't', 'l', 'e', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 02534) */
/* 02509 */ HB_P_LINEOFFSET, 57,	/* 161 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'T', 'i', 't', 'l', 'e', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 246, 3,	/* 1014 (abs: 03545) */
/* 02534 */ HB_P_LINEOFFSET, 58,	/* 162 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'S', 'u', 'm', 'm', 'a', 'r', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 02600) */
/* 02573 */ HB_P_LINEOFFSET, 59,	/* 163 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'f', 'r', 'x', 'R', 'e', 'p', 'o', 'r', 't', 'S', 'u', 'm', 'm', 'a', 'r', 'y', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 180, 3,	/* 948 (abs: 03545) */
/* 02600 */ HB_P_LINEOFFSET, 60,	/* 164 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02660) */
/* 02636 */ HB_P_LINEOFFSET, 61,	/* 165 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'f', 'r', 'x', 'P', 'a', 'g', 'e', 'H', 'e', 'a', 'd', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 120, 3,	/* 888 (abs: 03545) */
/* 02660 */ HB_P_LINEOFFSET, 62,	/* 166 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'P', 'a', 'g', 'e', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02720) */
/* 02696 */ HB_P_LINEOFFSET, 63,	/* 167 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'f', 'r', 'x', 'P', 'a', 'g', 'e', 'F', 'o', 'o', 't', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 60, 3,	/* 828 (abs: 03545) */
/* 02720 */ HB_P_LINEOFFSET, 64,	/* 168 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02772) */
/* 02752 */ HB_P_LINEOFFSET, 65,	/* 169 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'f', 'r', 'x', 'H', 'e', 'a', 'd', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 8, 3,	/* 776 (abs: 03545) */
/* 02772 */ HB_P_LINEOFFSET, 66,	/* 170 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'T', 'f', 'r', 'x', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02824) */
/* 02804 */ HB_P_LINEOFFSET, 67,	/* 171 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'f', 'r', 'x', 'F', 'o', 'o', 't', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 212, 2,	/* 724 (abs: 03545) */
/* 02824 */ HB_P_LINEOFFSET, 68,	/* 172 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'M', 'a', 's', 't', 'e', 'r', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02884) */
/* 02860 */ HB_P_LINEOFFSET, 69,	/* 173 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'f', 'r', 'x', 'M', 'a', 's', 't', 'e', 'r', 'D', 'a', 't', 'a', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 152, 2,	/* 664 (abs: 03545) */
/* 02884 */ HB_P_LINEOFFSET, 70,	/* 174 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'f', 'r', 'x', 'D', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 02944) */
/* 02920 */ HB_P_LINEOFFSET, 71,	/* 175 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'f', 'r', 'x', 'D', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 92, 2,	/* 604 (abs: 03545) */
/* 02944 */ HB_P_LINEOFFSET, 72,	/* 176 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'f', 'r', 'x', 'S', 'u', 'b', 'd', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 03010) */
/* 02983 */ HB_P_LINEOFFSET, 73,	/* 177 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'f', 'r', 'x', 'S', 'u', 'b', 'd', 'e', 't', 'a', 'i', 'l', 'D', 'a', 't', 'a', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 26, 2,	/* 538 (abs: 03545) */
/* 03010 */ HB_P_LINEOFFSET, 74,	/* 178 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '4', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03068) */
/* 03045 */ HB_P_LINEOFFSET, 75,	/* 179 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '4', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 224, 1,	/* 480 (abs: 03545) */
/* 03068 */ HB_P_LINEOFFSET, 76,	/* 180 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '5', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03126) */
/* 03103 */ HB_P_LINEOFFSET, 77,	/* 181 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '5', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 166, 1,	/* 422 (abs: 03545) */
/* 03126 */ HB_P_LINEOFFSET, 78,	/* 182 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '6', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03184) */
/* 03161 */ HB_P_LINEOFFSET, 79,	/* 183 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'f', 'r', 'x', 'D', 'a', 't', 'a', 'B', 'a', 'n', 'd', '6', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 108, 1,	/* 364 (abs: 03545) */
/* 03184 */ HB_P_LINEOFFSET, 80,	/* 184 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 03246) */
/* 03221 */ HB_P_LINEOFFSET, 81,	/* 185 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'H', 'e', 'a', 'd', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 46, 1,	/* 302 (abs: 03545) */
/* 03246 */ HB_P_LINEOFFSET, 82,	/* 186 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 03308) */
/* 03283 */ HB_P_LINEOFFSET, 83,	/* 187 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'f', 'r', 'x', 'G', 'r', 'o', 'u', 'p', 'F', 'o', 'o', 't', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 240, 0,	/* 240 (abs: 03545) */
/* 03308 */ HB_P_LINEOFFSET, 84,	/* 188 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'f', 'r', 'x', 'C', 'h', 'i', 'l', 'd', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 03358) */
/* 03339 */ HB_P_LINEOFFSET, 85,	/* 189 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'f', 'r', 'x', 'C', 'h', 'i', 'l', 'd', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMP, 190, 0,	/* 190 (abs: 03545) */
/* 03358 */ HB_P_LINEOFFSET, 86,	/* 190 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'H', 'e', 'a', 'd', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 03421) */
/* 03396 */ HB_P_LINEOFFSET, 87,	/* 191 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'H', 'e', 'a', 'd', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMPNEAR, 126,	/* 126 (abs: 03545) */
/* 03421 */ HB_P_LINEOFFSET, 88,	/* 192 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'F', 'o', 'o', 't', 'e', 'r', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 03484) */
/* 03459 */ HB_P_LINEOFFSET, 89,	/* 193 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'f', 'r', 'x', 'C', 'o', 'l', 'u', 'm', 'n', 'F', 'o', 'o', 't', 'e', 'r', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 03545) */
/* 03484 */ HB_P_LINEOFFSET, 90,	/* 194 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'f', 'r', 'x', 'O', 'v', 'e', 'r', 'l', 'a', 'y', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03537) */
/* 03517 */ HB_P_LINEOFFSET, 91,	/* 195 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'f', 'r', 'x', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 03545) */
/* 03537 */ HB_P_LINEOFFSET, 93,	/* 197 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 64, 0,	/* TIPBAND */
/* 03545 */ HB_P_LINEOFFSET, 96,	/* 200 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'F', 'r', 'P', 'r', 'n', ':', 'A', 'd', 'd', 'B', 'a', 'n', 'd', '(', 34, 0, 
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 63, 0,	/* SPAGE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 64, 0,	/* TIPBAND */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', ' ', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	34, ',', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 03646 */ HB_P_LINEOFFSET, 97,	/* 201 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 03652 */ HB_P_LINEOFFSET, 98,	/* 202 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUE, 209, 0,	/* 209 (abs: 03878) */
/* 03672 */ HB_P_LINEOFFSET, 99,	/* 203 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 03683 */ HB_P_LINEOFFSET, 100,	/* 204 */
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'L', 'e', 'f', 't', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 64,	/* 64 (abs: 03767) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'T', 'o', 'p', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03767) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'W', 'i', 'd', 't', 'h', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 03767) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'H', 'e', 'i', 'g', 'h', 't', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 03797) */
/* 03769 */ HB_P_LINEOFFSET, 101,	/* 205 */
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPOP,
/* 03797 */ HB_P_LINEOFFSET, 103,	/* 207 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', 'S', 'e', 't', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03828) */
	HB_P_JUMP, 83, 255,	/* -173 (abs: 03652) */
/* 03828 */ HB_P_LINEOFFSET, 106,	/* 210 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMP, 33, 255,	/* -223 (abs: 03652) */
/* 03878 */ HB_P_LINEOFFSET, 108,	/* 212 */
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 03928 */ HB_P_LINEOFFSET, 109,	/* 213 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 03940 */ HB_P_LINEOFFSET, 110,	/* 214 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 7, 0,	/* FILIACAO */
/* 03961 */ HB_P_LINEOFFSET, 111,	/* 215 */
	HB_P_TRUE,
	HB_P_POPVARIABLE, 10, 0,	/* ABREBAND */
/* 03967 */ HB_P_LINEOFFSET, 113,	/* 217 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'f', 'r', 'x', 'M', 'e', 'm', 'o', 'V', 'i', 'e', 'w', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 54, 8,	/* 2102 (abs: 06101) */
/* 04002 */ HB_P_LINEOFFSET, 114,	/* 218 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'F', 'r', 'P', 'r', 'n', ':', 'A', 'd', 'd', 'M', 'e', 'm', 'o', '(', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* FILIACAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 04036) */
	HB_P_PUSHVARIABLE, 7, 0,	/* FILIACAO */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 04039) */
	HB_P_PUSHVARIABLE, 63, 0,	/* SPAGE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* TEXTOMEMO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	39, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', ' ', ' ', ' ', ' ', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	34, ',', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 04239 */ HB_P_LINEOFFSET, 115,	/* 219 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 04245 */ HB_P_LINEOFFSET, 116,	/* 220 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUE, 233, 6,	/* 1769 (abs: 06031) */
/* 04265 */ HB_P_LINEOFFSET, 117,	/* 221 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 04276 */ HB_P_LINEOFFSET, 118,	/* 222 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'e', 'f', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 130, 0,	/* 130 (abs: 04437) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'T', 'o', 'p', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 98,	/* 98 (abs: 04437) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'W', 'i', 'd', 't', 'h', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 65,	/* 65 (abs: 04437) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'H', 'e', 'i', 'g', 'h', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 04437) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'T', 'e', 'x', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04442) */
	HB_P_JUMP, 62, 255,	/* -194 (abs: 04245) */
/* 04442 */ HB_P_LINEOFFSET, 121,	/* 225 */
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'F', 'r', 'a', 'm', 'e', '.', 'T', 'y', 'p', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 190, 3,	/* 958 (abs: 05424) */
/* 04469 */ HB_P_LINEOFFSET, 122,	/* 226 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04523) */
/* 04493 */ HB_P_LINEOFFSET, 123,	/* 227 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04523 */ HB_P_LINEOFFSET, 125,	/* 229 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04578) */
/* 04547 */ HB_P_LINEOFFSET, 126,	/* 230 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'[', 'f', 't', 'R', 'i', 'g', 'h', 't', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04578 */ HB_P_LINEOFFSET, 128,	/* 232 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 04640) */
/* 04602 */ HB_P_LINEOFFSET, 129,	/* 233 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'R', 'i', 'g', 'h', 't', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04640 */ HB_P_LINEOFFSET, 131,	/* 235 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 04693) */
/* 04664 */ HB_P_LINEOFFSET, 132,	/* 236 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'[', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04693 */ HB_P_LINEOFFSET, 134,	/* 238 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 04753) */
/* 04717 */ HB_P_LINEOFFSET, 135,	/* 239 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04753 */ HB_P_LINEOFFSET, 137,	/* 241 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 04814) */
/* 04777 */ HB_P_LINEOFFSET, 138,	/* 242 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'[', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04814 */ HB_P_LINEOFFSET, 140,	/* 244 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 04882) */
/* 04838 */ HB_P_LINEOFFSET, 141,	/* 245 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04882 */ HB_P_LINEOFFSET, 143,	/* 247 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 04938) */
/* 04906 */ HB_P_LINEOFFSET, 144,	/* 248 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'[', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 04938 */ HB_P_LINEOFFSET, 146,	/* 250 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 05001) */
/* 04962 */ HB_P_LINEOFFSET, 147,	/* 251 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05001 */ HB_P_LINEOFFSET, 149,	/* 253 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '0', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 05066) */
/* 05026 */ HB_P_LINEOFFSET, 150,	/* 254 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'[', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05066 */ HB_P_LINEOFFSET, 152,	/* 256 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '1', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 05138) */
/* 05091 */ HB_P_LINEOFFSET, 153,	/* 257 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05138 */ HB_P_LINEOFFSET, 155,	/* 259 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '2', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 05201) */
/* 05163 */ HB_P_LINEOFFSET, 156,	/* 260 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'[', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05201 */ HB_P_LINEOFFSET, 158,	/* 262 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '3', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 05271) */
/* 05226 */ HB_P_LINEOFFSET, 159,	/* 263 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05271 */ HB_P_LINEOFFSET, 161,	/* 265 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '4', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 05342) */
/* 05296 */ HB_P_LINEOFFSET, 162,	/* 266 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'[', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05342 */ HB_P_LINEOFFSET, 164,	/* 268 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 103, 2,	/* 615 (abs: 05980) */
/* 05368 */ HB_P_LINEOFFSET, 165,	/* 269 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'[', 'f', 't', 'L', 'e', 'f', 't', ',', 'f', 't', 'R', 'i', 'g', 'h', 't', ',', 'f', 't', 'B', 'o', 't', 't', 'o', 'm', ',', 'f', 't', 'T', 'o', 'p', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
	HB_P_JUMP, 47, 2,	/* 559 (abs: 05980) */
/* 05424 */ HB_P_LINEOFFSET, 167,	/* 271 */
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'F', 'o', 'n', 't', '.', 'S', 't', 'y', 'l', 'e', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 237, 1,	/* 493 (abs: 05942) */
/* 05452 */ HB_P_LINEOFFSET, 168,	/* 272 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 05499) */
/* 05476 */ HB_P_LINEOFFSET, 169,	/* 273 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05499 */ HB_P_LINEOFFSET, 171,	/* 275 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05553) */
/* 05523 */ HB_P_LINEOFFSET, 172,	/* 276 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'f', 's', 'B', 'o', 'l', 'd', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05553 */ HB_P_LINEOFFSET, 174,	/* 278 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 05609) */
/* 05577 */ HB_P_LINEOFFSET, 175,	/* 279 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'[', 'f', 's', 'I', 't', 'a', 'l', 'i', 'c', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05609 */ HB_P_LINEOFFSET, 177,	/* 281 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 05672) */
/* 05633 */ HB_P_LINEOFFSET, 178,	/* 282 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'[', 'f', 's', 'B', 'o', 'l', 'd', ',', 'f', 's', 'I', 't', 'a', 'l', 'i', 'c', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05672 */ HB_P_LINEOFFSET, 180,	/* 284 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05731) */
/* 05696 */ HB_P_LINEOFFSET, 181,	/* 285 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'[', 'f', 's', 'U', 'n', 'd', 'e', 'r', 'l', 'i', 'n', 'e', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05731 */ HB_P_LINEOFFSET, 183,	/* 287 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 05797) */
/* 05755 */ HB_P_LINEOFFSET, 184,	/* 288 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'[', 'f', 's', 'B', 'o', 'l', 'd', ',', 'f', 's', 'U', 'n', 'd', 'e', 'r', 'l', 'i', 'n', 'e', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05797 */ HB_P_LINEOFFSET, 186,	/* 290 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 05865) */
/* 05821 */ HB_P_LINEOFFSET, 187,	/* 291 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'[', 'f', 's', 'I', 't', 'a', 'l', 'i', 'c', ',', 'f', 's', 'U', 'n', 'd', 'e', 'r', 'l', 'i', 'n', 'e', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05865 */ HB_P_LINEOFFSET, 189,	/* 293 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 05980) */
/* 05889 */ HB_P_LINEOFFSET, 190,	/* 294 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'[', 'f', 's', 'B', 'o', 'l', 'd', ',', 'f', 's', 'I', 't', 'a', 'l', 'i', 'c', ',', 'f', 's', 'U', 'n', 'd', 'e', 'r', 'l', 'i', 'n', 'e', ']', ';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 05980) */
/* 05942 */ HB_P_LINEOFFSET, 193,	/* 297 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 66, 0,	/* SPROP */
/* 05980 */ HB_P_LINEOFFSET, 195,	/* 299 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', 'S', 'e', 't', '=', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06011) */
	HB_P_JUMP, 29, 249,	/* -1763 (abs: 04245) */
/* 06011 */ HB_P_LINEOFFSET, 198,	/* 302 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 66, 0,	/* SPROP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMP, 9, 249,	/* -1783 (abs: 04245) */
/* 06031 */ HB_P_LINEOFFSET, 200,	/* 304 */
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 06081 */ HB_P_LINEOFFSET, 201,	/* 305 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
/* 06101 */ HB_P_LINEOFFSET, 203,	/* 307 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'f', 'r', 'x', 'P', 'i', 'c', 't', 'u', 'r', 'e', 'V', 'i', 'e', 'w', ' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 41, 232,	/* -6103 (abs: 00033) */
/* 06139 */ HB_P_LINEOFFSET, 204,	/* 308 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	13, 10, 'F', 'r', 'P', 'r', 'n', ':', 'A', 'd', 'd', 'P', 'i', 'c', 't', 'u', 'r', 'e', '(', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* FILIACAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 06178) */
	HB_P_PUSHVARIABLE, 7, 0,	/* FILIACAO */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06181) */
	HB_P_PUSHVARIABLE, 63, 0,	/* SPAGE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'I', 'G', 'I', 'T', 'E', ' ', 'O', ' ', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'A', ' ', 'I', 'M', 'A', 'G', 'E', 'M', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', ' ', ' ', ' ', ' ', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 'd', 'a', 'd', 'e', 's', 'F', 'R', '(', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	34, ',', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 06389 */ HB_P_LINEOFFSET, 205,	/* 309 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 06395 */ HB_P_LINEOFFSET, 206,	/* 310 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 60, 0,	/* VTEXT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPTRUE, 19, 1,	/* 275 (abs: 06687) */
/* 06415 */ HB_P_LINEOFFSET, 207,	/* 311 */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_POPVARIABLE, 41, 0,	/* X */
/* 06426 */ HB_P_LINEOFFSET, 208,	/* 312 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'L', 'e', 'f', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 175, 0,	/* 175 (abs: 06632) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'T', 'o', 'p', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUE, 143, 0,	/* 143 (abs: 06632) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'W', 'i', 'd', 't', 'h', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 109,	/* 109 (abs: 06632) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'H', 'e', 'i', 'g', 'h', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 75,	/* 75 (abs: 06632) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'T', 'e', 'x', 't', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 06632) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'i', 'c', 't', 'u', 'r', 'e', '.', 'P', 'r', 'o', 'p', 'D', 'a', 't', 'a', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06637) */
	HB_P_JUMP, 17, 255,	/* -239 (abs: 06395) */
/* 06637 */ HB_P_LINEOFFSET, 211,	/* 315 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 60, 0,	/* VTEXT */
	HB_P_PUSHVARIABLE, 41, 0,	/* X */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	';', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
	HB_P_JUMP, 223, 254,	/* -289 (abs: 06395) */
/* 06687 */ HB_P_LINEOFFSET, 213,	/* 317 */
	HB_P_PUSHSYMNEAR, 59,	/* LEFT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PUSHSYMNEAR, 42,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	13, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* SLINHA */
/* 06737 */ HB_P_LINEOFFSET, 214,	/* 318 */
	HB_P_PUSHVARIABLE, 5, 0,	/* LINHA */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHVARIABLE, 62, 0,	/* SLINHA */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 5, 0,	/* LINHA */
	HB_P_JUMP, 188, 229,	/* -6724 (abs: 00033) */
/* 06760 */ HB_P_LINEOFFSET, 217,	/* 321 */
	HB_P_ENDPROC
/* 06763 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( TEXTOMEMO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 58,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* STEXTO */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'&', '#', '3', '4', ';', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* STEXTO */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 327 */
	HB_P_PUSHLOCALNEAR, 1,	/* STEXTO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00033 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( LOG10 )
{
   static const BYTE pcode[] =
   {
	HB_P_ENDPROC
/* 00001 */
   };

   hb_vmExecute( pcode, symbols );
}

HB_FUNC( FLOOR )
{
   static const BYTE pcode[] =
   {
	HB_P_ENDPROC
/* 00001 */
   };

   hb_vmExecute( pcode, symbols );
}

