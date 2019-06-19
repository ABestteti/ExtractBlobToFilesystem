
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[13];
};
static const struct sqlcxp sqlfpn =
{
    12,
    "reference.pc"
};


static unsigned int sqlctx = 311539;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
            void  *sqhstv[8];
   unsigned int   sqhstl[8];
            int   sqhsts[8];
            void  *sqindv[8];
            int   sqinds[8];
   unsigned int   sqharm[8];
   unsigned int   *sqharc[8];
   unsigned short  sqadto[8];
   unsigned short  sqtdso[8];
} sqlstm = {12,8};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{12,4274,46,0,0,
5,0,0,0,0,0,27,192,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,29,195,0,0,0,0,0,1,0,
51,0,0,0,0,0,69,350,0,0,1,1,0,1,0,3,113,0,0,
70,0,0,3,255,0,4,353,0,0,8,5,0,1,0,2,113,0,0,2,9,0,0,2,3,0,0,1,3,0,0,1,3,0,0,1,
3,0,0,1,3,0,0,1,9,0,0,
117,0,0,0,0,0,110,409,0,0,5,3,0,1,0,3,3,0,0,1,113,0,0,0,10,0,0,3,23,0,0,0,10,0,
0,
152,0,0,0,0,0,110,428,0,0,5,3,0,1,0,3,3,0,0,1,113,0,0,0,10,0,0,3,23,0,0,0,10,0,
0,
187,0,0,0,0,0,69,459,0,0,1,1,0,1,0,3,113,0,0,
206,0,0,4,206,0,4,462,0,0,6,5,0,1,0,2,9,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,
9,0,0,
245,0,0,5,228,0,5,529,0,0,6,5,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,9,0,0,2,
113,0,0,
284,0,0,0,0,0,112,565,0,0,5,3,0,1,0,3,68,0,0,1,23,1,0,0,10,0,0,3,113,0,0,0,10,
0,0,
319,0,0,0,0,0,112,577,0,0,5,3,0,1,0,3,68,0,0,1,23,0,0,0,10,0,0,3,113,0,0,0,10,
0,0,
354,0,0,0,0,0,112,593,0,0,5,3,0,1,0,3,68,0,0,1,23,3,0,0,10,0,0,3,113,0,0,0,10,
0,0,
389,0,0,0,0,0,112,605,0,0,5,3,0,1,0,3,68,0,0,1,23,2,0,0,10,0,0,3,113,0,0,0,10,
0,0,
424,0,0,0,0,0,112,632,0,0,5,3,0,1,0,3,3,0,0,1,23,3,0,0,10,0,0,3,113,0,0,0,10,0,
0,
459,0,0,0,0,0,112,644,0,0,5,3,0,1,0,3,3,0,0,1,23,0,0,0,10,0,0,3,113,0,0,0,10,0,
0,
494,0,0,6,0,0,30,661,0,0,0,0,0,1,0,
};


// Bibliotecas do programa:
#include <stdio.h>
#include <string.h>
#include <oci.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Versão do programa:
#define VERSAO_PROGRAMA "14.03.2012"

/* EXEC SQL INCLUDE ORACA;
 */ 
/*
 * $Header: oraca.h 24-apr-2003.12:50:59 mkandarp Exp $ oraca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  ORACA : Oracle Communications Area.
FUNCTION
  Contains no code. Provides supplementary communications to/from
  Oracle (in addition to standard SQLCA).
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  oracchf : Check cursor cache consistency flag. If set AND oradbgf
            is set, then directs SQLLIB to perform cursor cache
            consistency checks before every cursor operation
            (OPEN, FETCH, SELECT, INSERT, etc.).
  oradbgf : Master DEBUG flag. Used to turn all DEBUG options
            on or off.
  orahchf : Check Heap consistency flag. If set AND oradbgf is set,
            then directs SQLLIB to perform heap consistency checks
            everytime memory is dynamically allocated/free'd via
            sqlalc/sqlfre/sqlrlc. MUST BE SET BEFORE 1ST CONNECT
            and once set cannot be cleared (subsequent requests
            to change it are ignored).
  orastxtf: Save SQL stmt text flag. If set, then directs SQLLIB
            to save the text of the current SQL stmt in orastxt
            (in VARCHAR format).
  orastxt : Saved len and text of current SQL stmt (in VARCHAR
            format).
  orasfnm : Saved len and text of filename containing current SQL
            stmt (in VARCHAR format).
  oraslnr : Saved line nr within orasfnm of current SQL stmt.
 
  Cursor cache statistics. Set after COMMIT or ROLLBACK. Each
  CONNECT'd DATABASE has its own set of statistics.
 
  orahoc  : Highest Max Open OraCursors requested. Highest value
            for MAXOPENCURSORS by any CONNECT to this DATABASE.
  oramoc  : Max Open OraCursors required. Specifies the max nr
            of OraCursors required to run this pgm. Can be higher
            than orahoc if working set (MAXOPENCURSORS) was set
            too low, thus forcing the PCC to expand the cache.
  oracoc  : Current nr of OraCursors used.
  oranor  : Nr of OraCursor cache reassignments. Can show the
            degree of "thrashing" in the cache. Optimally, this
            nr should be kept as low as possible (time vs space
            optimization).
  oranpr  : Nr of SQL stmt "parses".
  oranex  : Nr of SQL stmt "executes". Optimally, the relation-
            ship of oranex to oranpr should be kept as high as
            possible.
 
 
  If the symbol ORACA_NONE is defined, then there will be no ORACA
  *variable*, although there will still be a struct defined.  This
  macro should not normally be defined in application code.

  If the symbol ORACA_INIT is defined, then the ORACA will be
  statically initialized. Although this is not necessary in order
  to use the ORACA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the ORACA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then ORACA_INIT should be left undefined --
  all others can define ORACA_INIT if they wish.
 
OWNER
  Clare
DATE
  10/19/85
MODIFIED
    apopat     05/08/02  - [2362423] MVS PE to make lines shorter than 79
    apopat     07/31/99 -  [707588] TAB to blanks for OCCS
    lvbcheng   10/27/98 -  change long to int for oraca
    pccint     10/03/96 -  Add IS_OSD for linting
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   09/04/92 -  Make oraca variable optional 
    Osborne    05/24/90 - Add ORACA_STORAGE_CLASS construct
  Clare      02/20/86 - PCC [10101l] Feature: Heap consistency check.
  Clare      03/04/86 - PCC [10101r] Port: ORACA init ifdef.
  Clare      03/12/86 - PCC [10101ab] Feature: ORACA cuc statistics.
*/
/* IS_OSD */ 
#ifndef  ORACA
#define  ORACA     1
 
struct   oraca
         {
    /* text */ char oracaid[8];      /* Reserved                            */
    /* ub4  */ int oracabc;          /* Reserved                            */
 
    /*       Flags which are setable by User. */
 
   /* ub4 */ int  oracchf;           /* <> 0 if "check cur cache consistncy"*/
   /* ub4 */ int  oradbgf;           /* <> 0 if "do DEBUG mode checking"    */
   /* ub4 */ int  orahchf;           /* <> 0 if "do Heap consistency check" */
   /* ub4 */ int  orastxtf;          /* SQL stmt text flag                  */
#define  ORASTFNON 0                 /* = don't save text of SQL stmt       */
#define  ORASTFERR 1                 /* = only save on SQLERROR             */
#define  ORASTFWRN 2                 /* = only save on SQLWARNING/SQLERROR  */
#define  ORASTFANY 3                 /* = always save                       */
         struct
           {
  /* ub2  */ unsigned short orastxtl;
  /* text */ char  orastxtc[70];
           } orastxt;                /* text of last SQL stmt               */
         struct
           {
  /* ub2  */   unsigned short orasfnml;
  /* text */   char       orasfnmc[70];
           } orasfnm;                /* name of file containing SQL stmt    */
  /* ub4 */ int   oraslnr;           /* line nr-within-file of SQL stmt     */

  /* ub4 */ int   orahoc;            /* highest max open OraCurs requested  */
  /* ub4 */ int   oramoc;            /* max open OraCursors required        */
  /* ub4 */ int   oracoc;            /* current OraCursors open             */
  /* ub4 */ int   oranor;            /* nr of OraCursor re-assignments      */
  /* ub4 */ int   oranpr;            /* nr of parses                        */
  /* ub4 */ int   oranex;            /* nr of executes                      */
         };

#ifndef ORACA_NONE

#ifdef ORACA_STORAGE_CLASS
ORACA_STORAGE_CLASS struct oraca oraca
#else
struct oraca oraca
#endif
#ifdef ORACA_INIT
         =
         {
         {'O','R','A','C','A',' ',' ',' '},
         sizeof(struct oraca),
         0,0,0,0,
         {0,{0}},
         {0,{0}},
         0,
         0,0,0,0,0,0
         }
#endif
         ;

#endif

#endif
/* end oraca.h */


/* EXEC SQL BEGIN DECLARE SECTION; */ 


/**
*   Maior tamanho possível de um arquivo dentro
* de uma coluna BLOB em bytes (4GB = 4294967296
* bytes ).
*/
#define MAX_TAMANHO_BLOB 4294967296

// Tamanho do buffer para obter a mensagem de erro do banco:
#define TAMANHO_BUFFER_MENSAGEM 1024

// Tamanho de caracteres possíveis em um nome de usuário:
#define UNAME_LEN 30

// Tamanho de caracteres possíveis em uma senha:
#define PWD_LEN 30

// Variável para obter o nome do usuário:
/* VARCHAR username[UNAME_LEN]; */ 
struct { unsigned short len; unsigned char arr[30]; } username;


// Variável para obter a senha do usuário:
/* VARCHAR password[PWD_LEN]; */ 
struct { unsigned short len; unsigned char arr[30]; } password;


/* EXEC SQL END DECLARE SECTION; */ 


/* EXEC SQL include sqlca;
 */ 
/*
 * $Header: sqlca.h 24-apr-2003.12:50:58 mkandarp Exp $ sqlca.h 
 */

/* Copyright (c) 1985, 2003, Oracle Corporation.  All rights reserved.  */
 
/*
NAME
  SQLCA : SQL Communications Area.
FUNCTION
  Contains no code. Oracle fills in the SQLCA with status info
  during the execution of a SQL stmt.
NOTES
  **************************************************************
  ***                                                        ***
  *** This file is SOSD.  Porters must change the data types ***
  *** appropriately on their platform.  See notes/pcport.doc ***
  *** for more information.                                  ***
  ***                                                        ***
  **************************************************************

  If the symbol SQLCA_STORAGE_CLASS is defined, then the SQLCA
  will be defined to have this storage class. For example:
 
    #define SQLCA_STORAGE_CLASS extern
 
  will define the SQLCA as an extern.
 
  If the symbol SQLCA_INIT is defined, then the SQLCA will be
  statically initialized. Although this is not necessary in order
  to use the SQLCA, it is a good pgming practice not to have
  unitialized variables. However, some C compilers/OS's don't
  allow automatic variables to be init'd in this manner. Therefore,
  if you are INCLUDE'ing the SQLCA in a place where it would be
  an automatic AND your C compiler/OS doesn't allow this style
  of initialization, then SQLCA_INIT should be left undefined --
  all others can define SQLCA_INIT if they wish.

  If the symbol SQLCA_NONE is defined, then the SQLCA variable will
  not be defined at all.  The symbol SQLCA_NONE should not be defined
  in source modules that have embedded SQL.  However, source modules
  that have no embedded SQL, but need to manipulate a sqlca struct
  passed in as a parameter, can set the SQLCA_NONE symbol to avoid
  creation of an extraneous sqlca variable.
 
MODIFIED
    lvbcheng   07/31/98 -  long to int
    jbasu      12/12/94 -  Bug 217878: note this is an SOSD file
    losborne   08/11/92 -  No sqlca var if SQLCA_NONE macro set 
  Clare      12/06/84 - Ch SQLCA to not be an extern.
  Clare      10/21/85 - Add initialization.
  Bradbury   01/05/86 - Only initialize when SQLCA_INIT set
  Clare      06/12/86 - Add SQLCA_STORAGE_CLASS option.
*/
 
#ifndef SQLCA
#define SQLCA 1
 
struct   sqlca
         {
         /* ub1 */ char    sqlcaid[8];
         /* b4  */ int     sqlabc;
         /* b4  */ int     sqlcode;
         struct
           {
           /* ub2 */ unsigned short sqlerrml;
           /* ub1 */ char           sqlerrmc[70];
           } sqlerrm;
         /* ub1 */ char    sqlerrp[8];
         /* b4  */ int     sqlerrd[6];
         /* ub1 */ char    sqlwarn[8];
         /* ub1 */ char    sqlext[8];
         };

#ifndef SQLCA_NONE 
#ifdef   SQLCA_STORAGE_CLASS
SQLCA_STORAGE_CLASS struct sqlca sqlca
#else
         struct sqlca sqlca
#endif
 
#ifdef  SQLCA_INIT
         = {
         {'S', 'Q', 'L', 'C', 'A', ' ', ' ', ' '},
         sizeof(struct sqlca),
         0,
         { 0, {0}},
         {'N', 'O', 'T', ' ', 'S', 'E', 'T', ' '},
         {0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0},
         {0, 0, 0, 0, 0, 0, 0, 0}
         }
#endif
         ;
#endif
 
#endif
 
/* end SQLCA */


void proc_cria_log(string, unsigned short);
void proc_connect(unsigned short);
void proc_connect_error(unsigned short);
extern void sqlglm(char*, size_t*, size_t*);
int main(int, char **);


/**************************************
*  Função para gerar o log dos erros *
**************************************/
void proc_cria_log(string mensagem_execucao, unsigned short ponto_execucao)
{
    // Variável para trabalhar com o arquivo de log:
    FILE * arquivo_log;

    // Cabeçalho do arquivo de log:
    string cabecalho = "Ação Sistemas de Informática LTDA\nSUP8110 - Programa para anexar e desanexar arquivos do sistema de suporte.\nDireitos Autorais (c) 1994-2012";

    // Parâmetros para a execução do programa:
    string parametros = "Parâmetros para a execução do programa:\n\tSUP8110 {usuario@host} {senha} {0 | 1} {aten_repe_soli_numero} {aten_repe_pape_cod} {aten_repe_pess_cod} {aten_dt_ini_atend} {seq}";

    // Nome do arquivo de log do programa:
    char nome_arquivo_log[32];

    // Variáveis para obter a data e hora de execução do programa:
    time_t rawtime;
    struct tm* timeinfo;

    // Variável para obter as informações de data e hora do sistema convertidos em caractere:
    char aux[16];

    // Variáveis para obter a mensagem de erro do banco:
    int tamanho_buffer = TAMANHO_BUFFER_MENSAGEM;
    char buffer_mensagem_banco[TAMANHO_BUFFER_MENSAGEM];
    int tamanho_mensagem_banco;


    time(&rawtime);
    timeinfo = localtime(&rawtime);

    // Monta o nome do arquivo de log:
    memset(nome_arquivo_log, '\0', 32);
    strcat(nome_arquivo_log, "SUP8110-");

    // Obtém o ano de execução do programa:
    sprintf(aux, "%04d\0", timeinfo->tm_year + 1900);
    strcat(nome_arquivo_log, aux);
    strcat(nome_arquivo_log, "-");

    // Obtém o mês de execução do programa:
    sprintf(aux, "%02d\0", timeinfo->tm_mon + 1);
    strcat(nome_arquivo_log, aux);
    strcat(nome_arquivo_log, "-");

    // Obtém o dia de execução do programa:
    sprintf(aux, "%02d\0", timeinfo->tm_mday);
    strcat(nome_arquivo_log, aux);
    strcat(nome_arquivo_log, "-");

    // Obtém a hora de execução do programa:
    sprintf(aux, "%02d\0", timeinfo->tm_hour);
    strcat(nome_arquivo_log, aux);
    strcat(nome_arquivo_log, "-");

    // Obtém a hora de execução do programa:
    sprintf(aux, "%02d\0", timeinfo->tm_min);
    strcat(nome_arquivo_log, aux);
    strcat(nome_arquivo_log, "-");

    // Obtém a hora de execução do programa:
    sprintf(aux, "%02d\0", timeinfo->tm_sec);
    strcat(nome_arquivo_log, aux);

    // Informa o sufixo do arquivo de log:
    strcat(nome_arquivo_log, ".LOG");

    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 


    // Obtém a mensagem do erro ocorrido do banco de dados (caso exista):
    sqlglm(buffer_mensagem_banco, &tamanho_buffer, &tamanho_mensagem_banco);
    buffer_mensagem_banco[tamanho_mensagem_banco] = '\0';

    // Abre o arquivo de log:
    arquivo_log = fopen(nome_arquivo_log, "w");

    // Verifica se o arquivo de log foi aberto com sucesso:
    if (arquivo_log == NULL)
    {
        printf("Não foi possivel criar arquivo de log.\n");
        exit(1);
    }

    /**
    *   Informa no arquivo de log o cabeçalho, a versão, a data
    * e hora da execução e os parâmetros que devem ser utilizados
    * no programa:
    */
    fputs(cabecalho, arquivo_log);
    fputs("\n", arquivo_log);
    fputs("Versão do programa: ", arquivo_log);
    fputs(VERSAO_PROGRAMA, arquivo_log);
    fputs("\n", arquivo_log);
    fputs("\n", arquivo_log);

    // Verifica se o programa foi concluído com sucesso.
    if (ponto_execucao == 0)
    {
        fputs(mensagem_execucao, arquivo_log);
        fputs("\n", arquivo_log);
        fputs("Programa \"SUP8110\" concluído com sucesso.", arquivo_log);
    }
    // Caso tenha ocorrido um erro durante a execução do programa:
    else
    {
        // Informa o ponto onde o programa foi abortado:
        fputs("Programa abortado no ponto ", arquivo_log);
        sprintf(aux, "%d.\n", ponto_execucao);
        fputs(aux, arquivo_log);

        // Se há uma mensagem de erro do programa, informa no log:
        if (strcmp(mensagem_execucao, "") != 0)
        {
            fputs(mensagem_execucao, arquivo_log);
            fputs("\n", arquivo_log);
        }

        // Se há uma mensagem de erro do banco, informa no log:
        if (tamanho_mensagem_banco > 0)
        {
            fputs("Mensagem de erro do banco de dados: ", arquivo_log);
            fputs(buffer_mensagem_banco, arquivo_log);
            fputs("\n", arquivo_log);
        }

    }

    // Fecha o arquivo de log do programa:
    fclose(arquivo_log);

    if (ponto_execucao == 0) exit(0);
    else exit(1);
}


/*********************************
* Função para conectar no banco *
*********************************/
void proc_connect(unsigned short ponto_execucao)
{
    /* EXEC SQL WHENEVER SQLERROR DO proc_connect_error(ponto_execucao); */ 

    /* EXEC SQL CONNECT :username IDENTIFIED BY :password; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )10;
    sqlstm.offset = (unsigned int  )5;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlstm.sqhstv[0] = (         void  *)&username;
    sqlstm.sqhstl[0] = (unsigned int  )32;
    sqlstm.sqhsts[0] = (         int  )32;
    sqlstm.sqindv[0] = (         void  *)0;
    sqlstm.sqinds[0] = (         int  )0;
    sqlstm.sqharm[0] = (unsigned int  )0;
    sqlstm.sqadto[0] = (unsigned short )0;
    sqlstm.sqtdso[0] = (unsigned short )0;
    sqlstm.sqhstv[1] = (         void  *)&password;
    sqlstm.sqhstl[1] = (unsigned int  )32;
    sqlstm.sqhsts[1] = (         int  )32;
    sqlstm.sqindv[1] = (         void  *)0;
    sqlstm.sqinds[1] = (         int  )0;
    sqlstm.sqharm[1] = (unsigned int  )0;
    sqlstm.sqadto[1] = (unsigned short )0;
    sqlstm.sqtdso[1] = (unsigned short )0;
    sqlstm.sqphsv = sqlstm.sqhstv;
    sqlstm.sqphsl = sqlstm.sqhstl;
    sqlstm.sqphss = sqlstm.sqhsts;
    sqlstm.sqpind = sqlstm.sqindv;
    sqlstm.sqpins = sqlstm.sqinds;
    sqlstm.sqparm = sqlstm.sqharm;
    sqlstm.sqparc = sqlstm.sqharc;
    sqlstm.sqpadto = sqlstm.sqadto;
    sqlstm.sqptdso = sqlstm.sqtdso;
    sqlstm.sqlcmax = (unsigned int )100;
    sqlstm.sqlcmin = (unsigned int )2;
    sqlstm.sqlcincr = (unsigned int )1;
    sqlstm.sqlctimeout = (unsigned int )0;
    sqlstm.sqlcnowait = (unsigned int )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
    if (sqlca.sqlcode < 0) proc_connect_error(ponto_execucao);
}



    /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

    /* EXEC SQL COMMIT WORK; */ 

{
    struct sqlexd sqlstm;
    sqlstm.sqlvsn = 12;
    sqlstm.arrsiz = 4;
    sqlstm.sqladtp = &sqladt;
    sqlstm.sqltdsp = &sqltds;
    sqlstm.iters = (unsigned int  )1;
    sqlstm.offset = (unsigned int  )36;
    sqlstm.cud = sqlcud0;
    sqlstm.sqlest = (unsigned char  *)&sqlca;
    sqlstm.sqlety = (unsigned short)4352;
    sqlstm.occurs = (unsigned int  )0;
    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


}

/************************************************
* Função de tratamento de erros para a conexão *
************************************************/
void proc_connect_error(unsigned short ponto_execucao)
{
    string mensagem_execucao = "Erro durante a conexão com o banco de dados.";
    proc_cria_log(mensagem_execucao, ponto_execucao);
}


int main(int argc, char *argv[])
{
    // Variável para indicar o ponto de execução do programa:
    unsigned short ponto_execucao = 0;

    // Variável para informar a mensagem de execução do programa:
    string mensagem_execucao = "";

    // Variável para manipular o arquivo a ser lido ou escrito:
    FILE *arquivo;

    /* EXEC SQL BEGIN DECLARE SECTION; */ 


    /**
    *   Valor da variável calculada de acordo com
    * o tamanho médio dos arquivos anexados no
    * sistema de suporte até o dia 07/03/2012.
    */
#define TAMANHO_BUFFER 278353

    // Variável para manipular a coluna BLOB da tabela "ANEXOS":
    OCIBlobLocator *v_texto;

    // Buffer para manipulação de dados entre o blob e o arquivo:
    unsigned char buffer[TAMANHO_BUFFER];

    /* EXEC SQL VAR buffer IS RAW(TAMANHO_BUFFER); */ 


    // Variável para armazenar o total de leituras que o buffer deverá realizar:
    unsigned int total_leituras_buffer;

    // Variável para armazenar o tamanho restante do arquivo após as leituras do buffer:
    int tamanho_final_arquivo = 0;

    // Variável para armazenar o tamanho do blob em bytes:
    int tamanho_blob;

    // Variável para informar o tamanho máximo de um arquivo BLOB:
    unsigned int tamanho_maximo_blob = MAX_TAMANHO_BLOB - 1;

    // Variável para armazenar o nome do arquivo obtido da tabela "ANEXOS":
    /* VARCHAR v_nome_arquivo[255]; */ 
struct { unsigned short len; unsigned char arr[255]; } v_nome_arquivo;


    // Variável para armazenar a data de início do atendimento ao qual o arquivo está anexado:
    /* VARCHAR v_aten_dt_ini_atend[19]; */ 
struct { unsigned short len; unsigned char arr[19]; } v_aten_dt_ini_atend;


    // Variável para armaznear o número da solicitação:
    int v_aten_repe_soli_numero;

    // Variável para armazenar o código do papel do atendente:
    int v_aten_repe_pape_cod;

    // Variável para armazenar o código do atendente:
    int v_aten_repe_pess_cod;

    // Variável para armazenar o código sequencial do arquivo no atendimento:
    int seq;

    /**
    *   Variável para armazenar o tamanho máximo do buffer
    * Obs: Necessário porque os comandos do Pro*C devem receber
    * o tamanho do buffer através de uma variável.
    */
    unsigned int tamanho_buffer = TAMANHO_BUFFER;

    // Variável para armazenar o tamanho do arquivo:
    unsigned int tamanho_arquivo;

    // Variável para contar o número de leituras do arquivo:
    unsigned int contador = 0;

    /* EXEC SQL END DECLARE SECTION; */ 


    // Verifica foram passados oito parâmetros para o programa (mais o nome deste) ao todo.
    if (argc != 9)
    {
        ponto_execucao = 1;
        mensagem_execucao = "Erro: São necessarios oito parâmetros para executar este programa.";
        proc_cria_log(mensagem_execucao, ponto_execucao);
    }
    else
    {
        // Verifica se o tipo de dados dos paramêtros estão corretos.
        if
            (
            (isdigit(argv[4][0]) == FALSE) ||
            (isdigit(argv[5][0]) == FALSE) ||
            (isdigit(argv[6][0]) == FALSE) ||
            (isdigit(argv[8][0]) == FALSE)
            )
        {
            ponto_execucao = 2;
            mensagem_execucao = "Erro: Os parâmetros \"aten_repe_soli_numero\", \"aten_repe_pess_cod\", \"aten_repe_pape_cod\" e \"seq\" devem ser numéricos.";
            proc_cria_log(mensagem_execucao, ponto_execucao);
        }
        else
        {
            // Verifica se a data está sendo passada com 19 digitos.   
            if (strlen(argv[7]) != 19)
            {
                ponto_execucao = 3;
                mensagem_execucao = "Erro: O parâmetro \"aten_dt_ini_atend\" deve estar no formato \"DD/MM/YYYY HH24:MI:SS\".";
                proc_cria_log(mensagem_execucao, ponto_execucao);
            }
        }
    }

    // Obtém o nome do usuário:
    strncpy((char *)username.arr, argv[1], UNAME_LEN);
    username.len = strlen((char *)username.arr);

    // Obtém a senha do usuário:
    strncpy((char *)password.arr, argv[2], PWD_LEN);
    password.len = strlen((char *)password.arr);

    // Obtém a data de início de atendimento da solicitação:
    strcpy((char *)v_aten_dt_ini_atend.arr, argv[7]);
    v_aten_dt_ini_atend.len = strlen((char *)v_aten_dt_ini_atend.arr);

    // Obtém o número da solicitação:
    v_aten_repe_soli_numero = atoi(argv[4]);

    // Obtém o código do papel da pessoa:
    v_aten_repe_pape_cod = atoi(argv[5]);

    // Obtém o código da pessoa:
    v_aten_repe_pess_cod = atoi(argv[6]);

    // Obtém o código sequencial do arquivo solicitado:
    seq = atoi(argv[8]);

    ponto_execucao = 4;

    // Solicita a conexão ao banco:
    proc_connect(ponto_execucao);

    // Verifica se foi solicitado uma leitura do banco e escrita no arquivo:
    if (strcmp(argv[3], "0") == 0)
    {
        ponto_execucao = 5;
        /* EXEC SQL WHENEVER SQLERROR DO proc_cria_log("", ponto_execucao); */ 


        /* EXEC SQL ALLOCATE : v_texto; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 4;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )51;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&v_texto;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(void *);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        // Busca o nome e o conteúdo do arquivo solicitado:
        /* EXEC SQL SELECT
            texto
            , nome_arquivo
            , NVL(dbms_lob.getlength(texto), 0)
            INTO
            :v_texto
            , : v_nome_arquivo
            , : tamanho_blob
            FROM
            anexos
            WHERE
            aten_repe_soli_numero = : v_aten_repe_soli_numero AND
            aten_repe_pape_cod = : v_aten_repe_pape_cod    AND
            aten_repe_pess_cod = : v_aten_repe_pess_cod    AND
            seq = : seq
            AND
            aten_dt_ini_atend = TO_DATE(:v_aten_dt_ini_atend, 'DD/MM/YYYY HH24:MI:SS'); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select texto ,nome_arquivo ,NVL(dbms_lob.getlength(te\
xto),0) into :b0,:b1,:b2  from anexos where ((((aten_repe_soli_numero=:b3 and \
aten_repe_pape_cod=:b4) and aten_repe_pess_cod=:b5) and seq=:b6) and aten_dt_i\
ni_atend=TO_DATE(:b7,'DD/MM/YYYY HH24:MI:SS'))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )70;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&v_texto;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(void *);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_nome_arquivo;
        sqlstm.sqhstl[1] = (unsigned int  )257;
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&tamanho_blob;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_aten_repe_soli_numero;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_aten_repe_pape_cod;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_aten_repe_pess_cod;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqhstv[6] = (         void  *)&seq;
        sqlstm.sqhstl[6] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[6] = (         int  )0;
        sqlstm.sqindv[6] = (         void  *)0;
        sqlstm.sqinds[6] = (         int  )0;
        sqlstm.sqharm[6] = (unsigned int  )0;
        sqlstm.sqadto[6] = (unsigned short )0;
        sqlstm.sqtdso[6] = (unsigned short )0;
        sqlstm.sqhstv[7] = (         void  *)&v_aten_dt_ini_atend;
        sqlstm.sqhstl[7] = (unsigned int  )21;
        sqlstm.sqhsts[7] = (         int  )0;
        sqlstm.sqindv[7] = (         void  *)0;
        sqlstm.sqinds[7] = (         int  )0;
        sqlstm.sqharm[7] = (unsigned int  )0;
        sqlstm.sqadto[7] = (unsigned short )0;
        sqlstm.sqtdso[7] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        // Encerra a string do nome do arquivo:
        v_nome_arquivo.arr[v_nome_arquivo.len] = '\0';

        ponto_execucao = 6;

        // Verifica se o arquivo foi encontrado:
        if (strcmp(v_nome_arquivo.arr, argv[4]) == 0)
        {
            mensagem_execucao = "Erro: O arquivo \"";
            strcat(mensagem_execucao, v_nome_arquivo.arr);
            strcat(mensagem_execucao, "\" não foi encontrado.");
            proc_cria_log(mensagem_execucao, ponto_execucao);
        }

        // Verifica se o arquivo está anexado no sistema:
        if (tamanho_blob == 0)
        {
            mensagem_execucao = "Erro: O arquivo \"";
            strcat(mensagem_execucao, v_nome_arquivo.arr);
            strcat(mensagem_execucao, "\" foi cadastrado no sistema, mas seus dados não foram anexados.");
            proc_cria_log(mensagem_execucao, ponto_execucao);
        }

        // Calcula o total de leituras que devem ser feitas pelo buffer:
        total_leituras_buffer = tamanho_blob / TAMANHO_BUFFER;

        // Calcula o tamanho dos dados que sobraram do arquivo após todas as leituras do buffer:
        tamanho_final_arquivo = tamanho_blob % TAMANHO_BUFFER;

        // Abre o arquivo para escrita:
        arquivo = fopen((const char *)v_nome_arquivo.arr, (const char *)"w+b");

        ponto_execucao = 7;

        // Permanece lendo o conteúdo da coluna BLOB até chegar ao seu final:
        while (total_leituras_buffer-- > 0)
        {
            // Lê um bloco do arquivo:
            /* EXEC SQL LOB READ
                : tamanho_blob
                FROM
                : v_texto
                INTO
                : buffer; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 12;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )117;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&tamanho_blob;
            sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (         void  *)&v_texto;
            sqlstm.sqhstl[1] = (unsigned int  )sizeof(void *);
            sqlstm.sqhsts[1] = (         int  )0;
            sqlstm.sqindv[1] = (         void  *)0;
            sqlstm.sqinds[1] = (         int  )0;
            sqlstm.sqharm[1] = (unsigned int  )0;
            sqlstm.sqadto[1] = (unsigned short )0;
            sqlstm.sqtdso[1] = (unsigned short )0;
            sqlstm.sqhstv[3] = (         void  *)buffer;
            sqlstm.sqhstl[3] = (unsigned int  )278353;
            sqlstm.sqhsts[3] = (         int  )0;
            sqlstm.sqindv[3] = (         void  *)0;
            sqlstm.sqinds[3] = (         int  )0;
            sqlstm.sqharm[3] = (unsigned int  )0;
            sqlstm.sqadto[3] = (unsigned short )0;
            sqlstm.sqtdso[3] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



            // Escreve o conteúdo lido do blob no arquivo:
            fwrite((void *)buffer, (size_t)TAMANHO_BUFFER, (size_t)1, arquivo);
        }

        ponto_execucao = 8;

        // Verifica se ainda há algo para ler no final do blob:
        if (tamanho_final_arquivo > 0)
        {
            ponto_execucao = 9;

            // Lê o último bloco de dados do arquivo:
            /* EXEC SQL LOB READ
                : tamanho_final_arquivo
                FROM
                : v_texto
                INTO
                : buffer; */ 

{
            struct sqlexd sqlstm;
            sqlstm.sqlvsn = 12;
            sqlstm.arrsiz = 8;
            sqlstm.sqladtp = &sqladt;
            sqlstm.sqltdsp = &sqltds;
            sqlstm.stmt = "";
            sqlstm.iters = (unsigned int  )1;
            sqlstm.offset = (unsigned int  )152;
            sqlstm.cud = sqlcud0;
            sqlstm.sqlest = (unsigned char  *)&sqlca;
            sqlstm.sqlety = (unsigned short)4352;
            sqlstm.occurs = (unsigned int  )0;
            sqlstm.sqhstv[0] = (         void  *)&tamanho_final_arquivo;
            sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
            sqlstm.sqhsts[0] = (         int  )0;
            sqlstm.sqindv[0] = (         void  *)0;
            sqlstm.sqinds[0] = (         int  )0;
            sqlstm.sqharm[0] = (unsigned int  )0;
            sqlstm.sqadto[0] = (unsigned short )0;
            sqlstm.sqtdso[0] = (unsigned short )0;
            sqlstm.sqhstv[1] = (         void  *)&v_texto;
            sqlstm.sqhstl[1] = (unsigned int  )sizeof(void *);
            sqlstm.sqhsts[1] = (         int  )0;
            sqlstm.sqindv[1] = (         void  *)0;
            sqlstm.sqinds[1] = (         int  )0;
            sqlstm.sqharm[1] = (unsigned int  )0;
            sqlstm.sqadto[1] = (unsigned short )0;
            sqlstm.sqtdso[1] = (unsigned short )0;
            sqlstm.sqhstv[3] = (         void  *)buffer;
            sqlstm.sqhstl[3] = (unsigned int  )278353;
            sqlstm.sqhsts[3] = (         int  )0;
            sqlstm.sqindv[3] = (         void  *)0;
            sqlstm.sqinds[3] = (         int  )0;
            sqlstm.sqharm[3] = (unsigned int  )0;
            sqlstm.sqadto[3] = (unsigned short )0;
            sqlstm.sqtdso[3] = (unsigned short )0;
            sqlstm.sqphsv = sqlstm.sqhstv;
            sqlstm.sqphsl = sqlstm.sqhstl;
            sqlstm.sqphss = sqlstm.sqhsts;
            sqlstm.sqpind = sqlstm.sqindv;
            sqlstm.sqpins = sqlstm.sqinds;
            sqlstm.sqparm = sqlstm.sqharm;
            sqlstm.sqparc = sqlstm.sqharc;
            sqlstm.sqpadto = sqlstm.sqadto;
            sqlstm.sqptdso = sqlstm.sqtdso;
            sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
            if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



            // Escreve os últimos bytes do blob no arquivo:
            fwrite((void *)buffer, (size_t)tamanho_final_arquivo, (size_t)1, arquivo);
        }

        ponto_execucao = 10;

        // Fecha o arquivo:
        fclose(arquivo);

        ponto_execucao = 0;

        // Informa a conclusão da leitura do arquivo:
        mensagem_execucao = "Escrita de dados no arquivo \"";
        strcat(mensagem_execucao, v_nome_arquivo.arr);
        strcat(mensagem_execucao, "\" realizada com sucesso.");
        proc_cria_log(mensagem_execucao, ponto_execucao);

    }
    // Verifica se foi solicitada a leitura de um arquivo e sua escrita no banco: 
    else if (strcmp(argv[3], "1") == 0)
    {

        ponto_execucao = 12;

        /* EXEC SQL ALLOCATE : v_texto; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )187;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&v_texto;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(void *);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        // Busca o nome do arquivo:
        /* EXEC SQL SELECT
            nome_arquivo
            INTO
            : v_nome_arquivo
            FROM
            anexos
            WHERE
            aten_repe_soli_numero = : v_aten_repe_soli_numero                              AND
            aten_repe_pape_cod = : v_aten_repe_pape_cod                                 AND
            aten_repe_pess_cod = : v_aten_repe_pess_cod                                 AND
            seq = : seq                                                  AND
            aten_dt_ini_atend = to_date(:v_aten_dt_ini_atend, 'DD/MM/YYYY HH24:MI:SS'); */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "select nome_arquivo into :b0  from anexos where ((((a\
ten_repe_soli_numero=:b1 and aten_repe_pape_cod=:b2) and aten_repe_pess_cod=:b\
3) and seq=:b4) and aten_dt_ini_atend=to_date(:b5,'DD/MM/YYYY HH24:MI:SS'))";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )206;
        sqlstm.selerr = (unsigned short)1;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlstm.sqhstv[0] = (         void  *)&v_nome_arquivo;
        sqlstm.sqhstl[0] = (unsigned int  )257;
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_aten_repe_soli_numero;
        sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_aten_repe_pape_cod;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&v_aten_repe_pess_cod;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&seq;
        sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_aten_dt_ini_atend;
        sqlstm.sqhstl[5] = (unsigned int  )21;
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        // Verifica se o nome do arquivo está cadastrado na tabela "ANEXOS":
        if (strcmp(v_nome_arquivo.arr, argv[4]) == 0)
        {
            mensagem_execucao = "Erro: O arquivo não foi cadastrado na tabela de anexos do sistema.";
            proc_cria_log(mensagem_execucao, ponto_execucao);
        }

        // Encerra a string do nome do arquivo:
        v_nome_arquivo.arr[v_nome_arquivo.len] = '\0';

        ponto_execucao = 13;

        // Abre o arquivo:
        arquivo = fopen((const char *)v_nome_arquivo.arr, (const char *)"rb");

        // Verifica se o arquivo foi aberto com sucesso:
        if (arquivo == NULL)
        {
            mensagem_execucao = "Erro: Não foi possível encontrar o arquivo \"";
            strcat(mensagem_execucao, v_nome_arquivo.arr);
            strcat(mensagem_execucao, "\".");

            proc_cria_log(mensagem_execucao, ponto_execucao);
        }

        // Vai para o final do arquivo:
        fseek(arquivo, 0, SEEK_END);

        // Obtém o tamanho do arquivo:
        tamanho_arquivo = (unsigned int)ftell(arquivo);

        ponto_execucao = 14;

        // Verifica se o tamanho do arquivo não excede a capacidade máxima de arquivos BLOB no sistema:
        if (tamanho_arquivo > MAX_TAMANHO_BLOB)
        {
            mensagem_execucao = "Erro: Limite de 4GB de tamanho excedido pelo arquivo.";
            proc_cria_log(mensagem_execucao, ponto_execucao);
        }

        // Volta o cursor do arquivo para o seu início:
        fseek(arquivo, 0, SEEK_SET);

        ponto_execucao = 15;

        // Calcula o total de leituras que devem ser feitas pelo buffer:
        total_leituras_buffer = tamanho_arquivo / TAMANHO_BUFFER;

        // Calcula o tamanho dos dados que sobraram do arquivo após todas as leituras do buffer:
        tamanho_final_arquivo = tamanho_arquivo % TAMANHO_BUFFER;

        ponto_execucao = 16;

        // Cria um novo blob e obtém um ponteiro para ele na variável "v_texto":
        /* EXEC SQL UPDATE
            anexos
            SET
            texto = EMPTY_BLOB()
            WHERE
            aten_repe_soli_numero = :v_aten_repe_soli_numero                              AND
            aten_repe_pape_cod = : v_aten_repe_pape_cod                                 AND
            aten_repe_pess_cod = : v_aten_repe_pess_cod                                 AND
            seq = : seq                                                  AND
            aten_dt_ini_atend = to_date(:v_aten_dt_ini_atend, 'DD/MM/YYYY HH24:MI:SS')
            RETURNING
            texto
            INTO
            : v_texto; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.stmt = "update anexos  set texto=EMPTY_BLOB() where ((((aten_\
repe_soli_numero=:b0 and aten_repe_pape_cod=:b1) and aten_repe_pess_cod=:b2) a\
nd seq=:b3) and aten_dt_ini_atend=to_date(:b4,'DD/MM/YYYY HH24:MI:SS')) return\
ing texto into :b5 ";
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )245;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )1;
        sqlstm.sqhstv[0] = (         void  *)&v_aten_repe_soli_numero;
        sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[0] = (         int  )0;
        sqlstm.sqindv[0] = (         void  *)0;
        sqlstm.sqinds[0] = (         int  )0;
        sqlstm.sqharm[0] = (unsigned int  )0;
        sqlstm.sqadto[0] = (unsigned short )0;
        sqlstm.sqtdso[0] = (unsigned short )0;
        sqlstm.sqhstv[1] = (         void  *)&v_aten_repe_pape_cod;
        sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[1] = (         int  )0;
        sqlstm.sqindv[1] = (         void  *)0;
        sqlstm.sqinds[1] = (         int  )0;
        sqlstm.sqharm[1] = (unsigned int  )0;
        sqlstm.sqadto[1] = (unsigned short )0;
        sqlstm.sqtdso[1] = (unsigned short )0;
        sqlstm.sqhstv[2] = (         void  *)&v_aten_repe_pess_cod;
        sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[2] = (         int  )0;
        sqlstm.sqindv[2] = (         void  *)0;
        sqlstm.sqinds[2] = (         int  )0;
        sqlstm.sqharm[2] = (unsigned int  )0;
        sqlstm.sqadto[2] = (unsigned short )0;
        sqlstm.sqtdso[2] = (unsigned short )0;
        sqlstm.sqhstv[3] = (         void  *)&seq;
        sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
        sqlstm.sqhsts[3] = (         int  )0;
        sqlstm.sqindv[3] = (         void  *)0;
        sqlstm.sqinds[3] = (         int  )0;
        sqlstm.sqharm[3] = (unsigned int  )0;
        sqlstm.sqadto[3] = (unsigned short )0;
        sqlstm.sqtdso[3] = (unsigned short )0;
        sqlstm.sqhstv[4] = (         void  *)&v_aten_dt_ini_atend;
        sqlstm.sqhstl[4] = (unsigned int  )21;
        sqlstm.sqhsts[4] = (         int  )0;
        sqlstm.sqindv[4] = (         void  *)0;
        sqlstm.sqinds[4] = (         int  )0;
        sqlstm.sqharm[4] = (unsigned int  )0;
        sqlstm.sqadto[4] = (unsigned short )0;
        sqlstm.sqtdso[4] = (unsigned short )0;
        sqlstm.sqhstv[5] = (         void  *)&v_texto;
        sqlstm.sqhstl[5] = (unsigned int  )sizeof(void *);
        sqlstm.sqhsts[5] = (         int  )0;
        sqlstm.sqindv[5] = (         void  *)0;
        sqlstm.sqinds[5] = (         int  )0;
        sqlstm.sqharm[5] = (unsigned int  )0;
        sqlstm.sqadto[5] = (unsigned short )0;
        sqlstm.sqtdso[5] = (unsigned short )0;
        sqlstm.sqphsv = sqlstm.sqhstv;
        sqlstm.sqphsl = sqlstm.sqhstl;
        sqlstm.sqphss = sqlstm.sqhsts;
        sqlstm.sqpind = sqlstm.sqindv;
        sqlstm.sqpins = sqlstm.sqinds;
        sqlstm.sqparm = sqlstm.sqharm;
        sqlstm.sqparc = sqlstm.sqharc;
        sqlstm.sqpadto = sqlstm.sqadto;
        sqlstm.sqptdso = sqlstm.sqtdso;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        // Faz a leitura do arquivo e o escreve no BLOB:
        while (contador < total_leituras_buffer)
        {

            ponto_execucao = 17;
            // Lê o conteúdo do arquivo:
            fread((void *)buffer, (size_t)sizeof(unsigned char), (size_t)TAMANHO_BUFFER, arquivo);

            ponto_execucao = 18;

            // Se for a primeira escrita no BLOB:
            if (contador == 0)
            {
                ponto_execucao = 19;

                // Verifica se haverão outras escritas no arquivo após esta:
                if (total_leituras_buffer > 1 || tamanho_final_arquivo > 0)
                {
                    ponto_execucao = 20;

                    // Escreve o primeiro bloco no BLOB:
                    /* EXEC SQL LOB WRITE FIRST
                        : tamanho_arquivo
                        FROM
                        : buffer
                        INTO
                        : v_texto; */ 

{
                    struct sqlexd sqlstm;
                    sqlstm.sqlvsn = 12;
                    sqlstm.arrsiz = 8;
                    sqlstm.sqladtp = &sqladt;
                    sqlstm.sqltdsp = &sqltds;
                    sqlstm.stmt = "";
                    sqlstm.iters = (unsigned int  )1;
                    sqlstm.offset = (unsigned int  )284;
                    sqlstm.cud = sqlcud0;
                    sqlstm.sqlest = (unsigned char  *)&sqlca;
                    sqlstm.sqlety = (unsigned short)4352;
                    sqlstm.occurs = (unsigned int  )0;
                    sqlstm.sqhstv[0] = (         void  *)&tamanho_arquivo;
                    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                    sqlstm.sqhsts[0] = (         int  )0;
                    sqlstm.sqindv[0] = (         void  *)0;
                    sqlstm.sqinds[0] = (         int  )0;
                    sqlstm.sqharm[0] = (unsigned int  )0;
                    sqlstm.sqadto[0] = (unsigned short )0;
                    sqlstm.sqtdso[0] = (unsigned short )0;
                    sqlstm.sqhstv[1] = (         void  *)buffer;
                    sqlstm.sqhstl[1] = (unsigned int  )278353;
                    sqlstm.sqhsts[1] = (         int  )0;
                    sqlstm.sqindv[1] = (         void  *)0;
                    sqlstm.sqinds[1] = (         int  )0;
                    sqlstm.sqharm[1] = (unsigned int  )0;
                    sqlstm.sqadto[1] = (unsigned short )0;
                    sqlstm.sqtdso[1] = (unsigned short )0;
                    sqlstm.sqhstv[3] = (         void  *)&v_texto;
                    sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                    sqlstm.sqhsts[3] = (         int  )0;
                    sqlstm.sqindv[3] = (         void  *)0;
                    sqlstm.sqinds[3] = (         int  )0;
                    sqlstm.sqharm[3] = (unsigned int  )0;
                    sqlstm.sqadto[3] = (unsigned short )0;
                    sqlstm.sqtdso[3] = (unsigned short )0;
                    sqlstm.sqphsv = sqlstm.sqhstv;
                    sqlstm.sqphsl = sqlstm.sqhstl;
                    sqlstm.sqphss = sqlstm.sqhsts;
                    sqlstm.sqpind = sqlstm.sqindv;
                    sqlstm.sqpins = sqlstm.sqinds;
                    sqlstm.sqparm = sqlstm.sqharm;
                    sqlstm.sqparc = sqlstm.sqharc;
                    sqlstm.sqpadto = sqlstm.sqadto;
                    sqlstm.sqptdso = sqlstm.sqtdso;
                    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                    if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


                }
                else
                {
                    ponto_execucao = 21;

                    // Escreve um único bloco no BLOB:
                    /* EXEC SQL LOB WRITE ONE
                        : tamanho_arquivo
                        FROM
                        : buffer
                        INTO
                        : v_texto; */ 

{
                    struct sqlexd sqlstm;
                    sqlstm.sqlvsn = 12;
                    sqlstm.arrsiz = 8;
                    sqlstm.sqladtp = &sqladt;
                    sqlstm.sqltdsp = &sqltds;
                    sqlstm.stmt = "";
                    sqlstm.iters = (unsigned int  )1;
                    sqlstm.offset = (unsigned int  )319;
                    sqlstm.cud = sqlcud0;
                    sqlstm.sqlest = (unsigned char  *)&sqlca;
                    sqlstm.sqlety = (unsigned short)4352;
                    sqlstm.occurs = (unsigned int  )0;
                    sqlstm.sqhstv[0] = (         void  *)&tamanho_arquivo;
                    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                    sqlstm.sqhsts[0] = (         int  )0;
                    sqlstm.sqindv[0] = (         void  *)0;
                    sqlstm.sqinds[0] = (         int  )0;
                    sqlstm.sqharm[0] = (unsigned int  )0;
                    sqlstm.sqadto[0] = (unsigned short )0;
                    sqlstm.sqtdso[0] = (unsigned short )0;
                    sqlstm.sqhstv[1] = (         void  *)buffer;
                    sqlstm.sqhstl[1] = (unsigned int  )278353;
                    sqlstm.sqhsts[1] = (         int  )0;
                    sqlstm.sqindv[1] = (         void  *)0;
                    sqlstm.sqinds[1] = (         int  )0;
                    sqlstm.sqharm[1] = (unsigned int  )0;
                    sqlstm.sqadto[1] = (unsigned short )0;
                    sqlstm.sqtdso[1] = (unsigned short )0;
                    sqlstm.sqhstv[3] = (         void  *)&v_texto;
                    sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                    sqlstm.sqhsts[3] = (         int  )0;
                    sqlstm.sqindv[3] = (         void  *)0;
                    sqlstm.sqinds[3] = (         int  )0;
                    sqlstm.sqharm[3] = (unsigned int  )0;
                    sqlstm.sqadto[3] = (unsigned short )0;
                    sqlstm.sqtdso[3] = (unsigned short )0;
                    sqlstm.sqphsv = sqlstm.sqhstv;
                    sqlstm.sqphsl = sqlstm.sqhstl;
                    sqlstm.sqphss = sqlstm.sqhsts;
                    sqlstm.sqpind = sqlstm.sqindv;
                    sqlstm.sqpins = sqlstm.sqinds;
                    sqlstm.sqparm = sqlstm.sqharm;
                    sqlstm.sqparc = sqlstm.sqharc;
                    sqlstm.sqpadto = sqlstm.sqadto;
                    sqlstm.sqptdso = sqlstm.sqtdso;
                    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                    if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


                }
            }
            else
            {
                // Se for o último bloco de dados:
                if ((contador == (total_leituras_buffer - 1)) && (tamanho_final_arquivo == 0))
                {
                    ponto_execucao = 22;

                    // Escreve o último bloco no BLOB:
                    /* EXEC SQL LOB WRITE LAST
                        : tamanho_arquivo
                        FROM
                        : buffer
                        INTO
                        : v_texto; */ 

{
                    struct sqlexd sqlstm;
                    sqlstm.sqlvsn = 12;
                    sqlstm.arrsiz = 8;
                    sqlstm.sqladtp = &sqladt;
                    sqlstm.sqltdsp = &sqltds;
                    sqlstm.stmt = "";
                    sqlstm.iters = (unsigned int  )1;
                    sqlstm.offset = (unsigned int  )354;
                    sqlstm.cud = sqlcud0;
                    sqlstm.sqlest = (unsigned char  *)&sqlca;
                    sqlstm.sqlety = (unsigned short)4352;
                    sqlstm.occurs = (unsigned int  )0;
                    sqlstm.sqhstv[0] = (         void  *)&tamanho_arquivo;
                    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                    sqlstm.sqhsts[0] = (         int  )0;
                    sqlstm.sqindv[0] = (         void  *)0;
                    sqlstm.sqinds[0] = (         int  )0;
                    sqlstm.sqharm[0] = (unsigned int  )0;
                    sqlstm.sqadto[0] = (unsigned short )0;
                    sqlstm.sqtdso[0] = (unsigned short )0;
                    sqlstm.sqhstv[1] = (         void  *)buffer;
                    sqlstm.sqhstl[1] = (unsigned int  )278353;
                    sqlstm.sqhsts[1] = (         int  )0;
                    sqlstm.sqindv[1] = (         void  *)0;
                    sqlstm.sqinds[1] = (         int  )0;
                    sqlstm.sqharm[1] = (unsigned int  )0;
                    sqlstm.sqadto[1] = (unsigned short )0;
                    sqlstm.sqtdso[1] = (unsigned short )0;
                    sqlstm.sqhstv[3] = (         void  *)&v_texto;
                    sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                    sqlstm.sqhsts[3] = (         int  )0;
                    sqlstm.sqindv[3] = (         void  *)0;
                    sqlstm.sqinds[3] = (         int  )0;
                    sqlstm.sqharm[3] = (unsigned int  )0;
                    sqlstm.sqadto[3] = (unsigned short )0;
                    sqlstm.sqtdso[3] = (unsigned short )0;
                    sqlstm.sqphsv = sqlstm.sqhstv;
                    sqlstm.sqphsl = sqlstm.sqhstl;
                    sqlstm.sqphss = sqlstm.sqhsts;
                    sqlstm.sqpind = sqlstm.sqindv;
                    sqlstm.sqpins = sqlstm.sqinds;
                    sqlstm.sqparm = sqlstm.sqharm;
                    sqlstm.sqparc = sqlstm.sqharc;
                    sqlstm.sqpadto = sqlstm.sqadto;
                    sqlstm.sqptdso = sqlstm.sqtdso;
                    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                    if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


                }
                else
                {
                    ponto_execucao = 23;

                    // Escreve o próximo bloco no BLOB:
                    /* EXEC SQL LOB WRITE NEXT
                        : tamanho_arquivo
                        FROM
                        : buffer
                        INTO
                        : v_texto; */ 

{
                    struct sqlexd sqlstm;
                    sqlstm.sqlvsn = 12;
                    sqlstm.arrsiz = 8;
                    sqlstm.sqladtp = &sqladt;
                    sqlstm.sqltdsp = &sqltds;
                    sqlstm.stmt = "";
                    sqlstm.iters = (unsigned int  )1;
                    sqlstm.offset = (unsigned int  )389;
                    sqlstm.cud = sqlcud0;
                    sqlstm.sqlest = (unsigned char  *)&sqlca;
                    sqlstm.sqlety = (unsigned short)4352;
                    sqlstm.occurs = (unsigned int  )0;
                    sqlstm.sqhstv[0] = (         void  *)&tamanho_arquivo;
                    sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                    sqlstm.sqhsts[0] = (         int  )0;
                    sqlstm.sqindv[0] = (         void  *)0;
                    sqlstm.sqinds[0] = (         int  )0;
                    sqlstm.sqharm[0] = (unsigned int  )0;
                    sqlstm.sqadto[0] = (unsigned short )0;
                    sqlstm.sqtdso[0] = (unsigned short )0;
                    sqlstm.sqhstv[1] = (         void  *)buffer;
                    sqlstm.sqhstl[1] = (unsigned int  )278353;
                    sqlstm.sqhsts[1] = (         int  )0;
                    sqlstm.sqindv[1] = (         void  *)0;
                    sqlstm.sqinds[1] = (         int  )0;
                    sqlstm.sqharm[1] = (unsigned int  )0;
                    sqlstm.sqadto[1] = (unsigned short )0;
                    sqlstm.sqtdso[1] = (unsigned short )0;
                    sqlstm.sqhstv[3] = (         void  *)&v_texto;
                    sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                    sqlstm.sqhsts[3] = (         int  )0;
                    sqlstm.sqindv[3] = (         void  *)0;
                    sqlstm.sqinds[3] = (         int  )0;
                    sqlstm.sqharm[3] = (unsigned int  )0;
                    sqlstm.sqadto[3] = (unsigned short )0;
                    sqlstm.sqtdso[3] = (unsigned short )0;
                    sqlstm.sqphsv = sqlstm.sqhstv;
                    sqlstm.sqphsl = sqlstm.sqhstl;
                    sqlstm.sqphss = sqlstm.sqhsts;
                    sqlstm.sqpind = sqlstm.sqindv;
                    sqlstm.sqpins = sqlstm.sqinds;
                    sqlstm.sqparm = sqlstm.sqharm;
                    sqlstm.sqparc = sqlstm.sqharc;
                    sqlstm.sqpadto = sqlstm.sqadto;
                    sqlstm.sqptdso = sqlstm.sqtdso;
                    sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                    if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


                }
            }

            // Incrementa o contador:
            contador++;
        }

        ponto_execucao = 24;

        // Verifica se ainda existem dados no final do arquivo:    
        if (tamanho_final_arquivo > 0)
        {
            // Lê o que sobrou de dados no final do arquivo:
            fread((void *)buffer, (size_t)sizeof(unsigned char), (size_t)tamanho_final_arquivo, arquivo);

            // Verifica se foram escritos dados previamente no arquivo:
            if (total_leituras_buffer > 0)
            {
                ponto_execucao = 25;

                // Escreve o conteúdo no BLOB:
                /* EXEC SQL LOB WRITE LAST
                    : tamanho_final_arquivo
                    FROM
                    : buffer
                    INTO
                    : v_texto; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 8;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )424;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&tamanho_final_arquivo;
                sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (         void  *)buffer;
                sqlstm.sqhstl[1] = (unsigned int  )278353;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         void  *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned int  )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[3] = (         void  *)&v_texto;
                sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         void  *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned int  )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


            }
            else
            {
                ponto_execucao = 26;

                // Escreve o conteúdo no BLOB:
                /* EXEC SQL LOB WRITE ONE
                    : tamanho_final_arquivo
                    FROM
                    : buffer
                    INTO
                    : v_texto; */ 

{
                struct sqlexd sqlstm;
                sqlstm.sqlvsn = 12;
                sqlstm.arrsiz = 8;
                sqlstm.sqladtp = &sqladt;
                sqlstm.sqltdsp = &sqltds;
                sqlstm.stmt = "";
                sqlstm.iters = (unsigned int  )1;
                sqlstm.offset = (unsigned int  )459;
                sqlstm.cud = sqlcud0;
                sqlstm.sqlest = (unsigned char  *)&sqlca;
                sqlstm.sqlety = (unsigned short)4352;
                sqlstm.occurs = (unsigned int  )0;
                sqlstm.sqhstv[0] = (         void  *)&tamanho_final_arquivo;
                sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
                sqlstm.sqhsts[0] = (         int  )0;
                sqlstm.sqindv[0] = (         void  *)0;
                sqlstm.sqinds[0] = (         int  )0;
                sqlstm.sqharm[0] = (unsigned int  )0;
                sqlstm.sqadto[0] = (unsigned short )0;
                sqlstm.sqtdso[0] = (unsigned short )0;
                sqlstm.sqhstv[1] = (         void  *)buffer;
                sqlstm.sqhstl[1] = (unsigned int  )278353;
                sqlstm.sqhsts[1] = (         int  )0;
                sqlstm.sqindv[1] = (         void  *)0;
                sqlstm.sqinds[1] = (         int  )0;
                sqlstm.sqharm[1] = (unsigned int  )0;
                sqlstm.sqadto[1] = (unsigned short )0;
                sqlstm.sqtdso[1] = (unsigned short )0;
                sqlstm.sqhstv[3] = (         void  *)&v_texto;
                sqlstm.sqhstl[3] = (unsigned int  )sizeof(void *);
                sqlstm.sqhsts[3] = (         int  )0;
                sqlstm.sqindv[3] = (         void  *)0;
                sqlstm.sqinds[3] = (         int  )0;
                sqlstm.sqharm[3] = (unsigned int  )0;
                sqlstm.sqadto[3] = (unsigned short )0;
                sqlstm.sqtdso[3] = (unsigned short )0;
                sqlstm.sqphsv = sqlstm.sqhstv;
                sqlstm.sqphsl = sqlstm.sqhstl;
                sqlstm.sqphss = sqlstm.sqhsts;
                sqlstm.sqpind = sqlstm.sqindv;
                sqlstm.sqpins = sqlstm.sqinds;
                sqlstm.sqparm = sqlstm.sqharm;
                sqlstm.sqparc = sqlstm.sqharc;
                sqlstm.sqpadto = sqlstm.sqadto;
                sqlstm.sqptdso = sqlstm.sqtdso;
                sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
                if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}


            }
        }

        ponto_execucao = 27;

        // Fecha o arquivo:
        fclose(arquivo);

        ponto_execucao = 28;

        // Executa o "commit" dos dados:    
        /* EXEC SQL COMMIT WORK RELEASE; */ 

{
        struct sqlexd sqlstm;
        sqlstm.sqlvsn = 12;
        sqlstm.arrsiz = 8;
        sqlstm.sqladtp = &sqladt;
        sqlstm.sqltdsp = &sqltds;
        sqlstm.iters = (unsigned int  )1;
        sqlstm.offset = (unsigned int  )494;
        sqlstm.cud = sqlcud0;
        sqlstm.sqlest = (unsigned char  *)&sqlca;
        sqlstm.sqlety = (unsigned short)4352;
        sqlstm.occurs = (unsigned int  )0;
        sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
        if (sqlca.sqlcode < 0) proc_cria_log("",ponto_execucao);
}



        ponto_execucao = 0;
        mensagem_execucao = "Leitura de dados do arquivo \"";
        strcat(mensagem_execucao, v_nome_arquivo.arr);
        strcat(mensagem_execucao, "\" realizada com sucesso.");
        proc_cria_log(mensagem_execucao, ponto_execucao);
    }

    exit(0);
}