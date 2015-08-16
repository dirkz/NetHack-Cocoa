/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CHAR = 258,
     INTEGER = 259,
     BOOLEAN = 260,
     PERCENT = 261,
     MESSAGE_ID = 262,
     MAZE_ID = 263,
     LEVEL_ID = 264,
     LEV_INIT_ID = 265,
     GEOMETRY_ID = 266,
     NOMAP_ID = 267,
     OBJECT_ID = 268,
     COBJECT_ID = 269,
     MONSTER_ID = 270,
     TRAP_ID = 271,
     DOOR_ID = 272,
     DRAWBRIDGE_ID = 273,
     MAZEWALK_ID = 274,
     WALLIFY_ID = 275,
     REGION_ID = 276,
     FILLING = 277,
     RANDOM_OBJECTS_ID = 278,
     RANDOM_MONSTERS_ID = 279,
     RANDOM_PLACES_ID = 280,
     ALTAR_ID = 281,
     LADDER_ID = 282,
     STAIR_ID = 283,
     NON_DIGGABLE_ID = 284,
     NON_PASSWALL_ID = 285,
     ROOM_ID = 286,
     PORTAL_ID = 287,
     TELEPRT_ID = 288,
     BRANCH_ID = 289,
     LEV = 290,
     CHANCE_ID = 291,
     CORRIDOR_ID = 292,
     GOLD_ID = 293,
     ENGRAVING_ID = 294,
     FOUNTAIN_ID = 295,
     POOL_ID = 296,
     SINK_ID = 297,
     NONE = 298,
     RAND_CORRIDOR_ID = 299,
     DOOR_STATE = 300,
     LIGHT_STATE = 301,
     CURSE_TYPE = 302,
     ENGRAVING_TYPE = 303,
     DIRECTION = 304,
     RANDOM_TYPE = 305,
     O_REGISTER = 306,
     M_REGISTER = 307,
     P_REGISTER = 308,
     A_REGISTER = 309,
     ALIGNMENT = 310,
     LEFT_OR_RIGHT = 311,
     CENTER = 312,
     TOP_OR_BOT = 313,
     ALTAR_TYPE = 314,
     UP_OR_DOWN = 315,
     SUBROOM_ID = 316,
     NAME_ID = 317,
     FLAGS_ID = 318,
     FLAG_TYPE = 319,
     MON_ATTITUDE = 320,
     MON_ALERTNESS = 321,
     MON_APPEARANCE = 322,
     CONTAINED = 323,
     OBJFLAG_TYPE = 324,
     OBJFLAGS_ID = 325,
     RANDOMREGION_ID = 326,
     R_REGISTER = 327,
     STRING = 328,
     MAP_ID = 329
   };
#endif
/* Tokens.  */
#define CHAR 258
#define INTEGER 259
#define BOOLEAN 260
#define PERCENT 261
#define MESSAGE_ID 262
#define MAZE_ID 263
#define LEVEL_ID 264
#define LEV_INIT_ID 265
#define GEOMETRY_ID 266
#define NOMAP_ID 267
#define OBJECT_ID 268
#define COBJECT_ID 269
#define MONSTER_ID 270
#define TRAP_ID 271
#define DOOR_ID 272
#define DRAWBRIDGE_ID 273
#define MAZEWALK_ID 274
#define WALLIFY_ID 275
#define REGION_ID 276
#define FILLING 277
#define RANDOM_OBJECTS_ID 278
#define RANDOM_MONSTERS_ID 279
#define RANDOM_PLACES_ID 280
#define ALTAR_ID 281
#define LADDER_ID 282
#define STAIR_ID 283
#define NON_DIGGABLE_ID 284
#define NON_PASSWALL_ID 285
#define ROOM_ID 286
#define PORTAL_ID 287
#define TELEPRT_ID 288
#define BRANCH_ID 289
#define LEV 290
#define CHANCE_ID 291
#define CORRIDOR_ID 292
#define GOLD_ID 293
#define ENGRAVING_ID 294
#define FOUNTAIN_ID 295
#define POOL_ID 296
#define SINK_ID 297
#define NONE 298
#define RAND_CORRIDOR_ID 299
#define DOOR_STATE 300
#define LIGHT_STATE 301
#define CURSE_TYPE 302
#define ENGRAVING_TYPE 303
#define DIRECTION 304
#define RANDOM_TYPE 305
#define O_REGISTER 306
#define M_REGISTER 307
#define P_REGISTER 308
#define A_REGISTER 309
#define ALIGNMENT 310
#define LEFT_OR_RIGHT 311
#define CENTER 312
#define TOP_OR_BOT 313
#define ALTAR_TYPE 314
#define UP_OR_DOWN 315
#define SUBROOM_ID 316
#define NAME_ID 317
#define FLAGS_ID 318
#define FLAG_TYPE 319
#define MON_ATTITUDE 320
#define MON_ALERTNESS 321
#define MON_APPEARANCE 322
#define CONTAINED 323
#define OBJFLAG_TYPE 324
#define OBJFLAGS_ID 325
#define RANDOMREGION_ID 326
#define R_REGISTER 327
#define STRING 328
#define MAP_ID 329




/* Copy the first part of user declarations.  */
#line 1 "lev_comp.y"

/*	SCCS Id: @(#)lev_yacc.c	3.4	2000/01/17	*/
/*	Copyright (c) 1989 by Jean-Christophe Collet */
/* NetHack may be freely redistributed.  See license for details. */

/*
 * This file contains the Level Compiler code
 * It may handle special mazes & special room-levels
 */

#define LEVEL_COMPILER	1	/* Enable definition of internal structures */

/* In case we're using bison in AIX.  This definition must be
 * placed before any other C-language construct in the file
 * excluding comments and preprocessor directives (thanks IBM
 * for this wonderful feature...).
 *
 * Note: some cpps barf on this 'undefined control' (#pragma).
 * Addition of the leading space seems to prevent barfage for now,
 * and AIX will still see the directive.
 */
#ifdef _AIX
 #pragma alloca		/* keep leading space! */
#endif

#include "hack.h"
#include "sp_lev.h"

#define MAX_REGISTERS	10
#define ERR		(-1)
/* many types of things are put in chars for transference to NetHack.
 * since some systems will use signed chars, limit everybody to the
 * same number for portability.
 */
#define MAX_OF_TYPE	128

#define New(type)		\
	(type *) memset((genericptr_t)alloc(sizeof(type)), 0, sizeof(type))
#define NewTab(type, size)	(type **) alloc(sizeof(type *) * size)
#define Free(ptr)		free((genericptr_t)ptr)

extern void FDECL(yyerror, (const char *));
extern void FDECL(yywarning, (const char *));
extern int NDECL(yylex);
int NDECL(yyparse);

extern int FDECL(get_artifact_id, (char *));
extern int FDECL(get_floor_type, (CHAR_P));
extern int FDECL(get_room_type, (char *));
extern int FDECL(get_trap_type, (char *));
extern int FDECL(get_monster_id, (char *,CHAR_P));
extern int FDECL(get_object_id, (char *,CHAR_P));
extern boolean FDECL(check_monster_char, (CHAR_P));
extern boolean FDECL(check_object_char, (CHAR_P));
extern char FDECL(what_map_char, (CHAR_P));
extern void FDECL(scan_map, (char *));
extern void NDECL(wallify_map);
extern boolean NDECL(check_subrooms);
extern void FDECL(check_coord, (int,int,const char *));
extern void NDECL(store_part);
extern void NDECL(store_room);
extern void FDECL(store_place_list, (int,int,int,const struct coord *));
extern boolean FDECL(write_level_file, (char *,splev *,specialmaze *));
extern void FDECL(free_rooms, (splev *));

static struct reg {
	int x1, y1;
	int x2, y2;
}		current_region;

static struct coord current_coord, current_align;

static struct size {
	int height;
	int width;
}		current_size;

char tmpmessage[256];
digpos *tmppass[32];
char *tmpmap[ROWNO];

digpos *tmpdig[MAX_OF_TYPE];
region *tmpreg[MAX_OF_TYPE];
lev_region *tmplreg[MAX_OF_TYPE];
door *tmpdoor[MAX_OF_TYPE];
drawbridge *tmpdb[MAX_OF_TYPE];
walk *tmpwalk[MAX_OF_TYPE];
lev_region *tmprndlreg[MAX_REGISTERS];

room_door *tmprdoor[MAX_OF_TYPE];
trap *tmptrap[MAX_OF_TYPE];
monster *tmpmonst[MAX_OF_TYPE];
object *tmpobj[MAX_OF_TYPE];
altar *tmpaltar[MAX_OF_TYPE];
lad *tmplad[MAX_OF_TYPE];
stair *tmpstair[MAX_OF_TYPE];
gold *tmpgold[MAX_OF_TYPE];
engraving *tmpengraving[MAX_OF_TYPE];
fountain *tmpfountain[MAX_OF_TYPE];
sink *tmpsink[MAX_OF_TYPE];
pool *tmppool[MAX_OF_TYPE];

mazepart *tmppart[10];
room *tmproom[MAXNROFROOMS*2];
corridor *tmpcor[MAX_OF_TYPE];

static specialmaze maze;
static splev special_lev;
static lev_init init_lev;

static char olist[MAX_REGISTERS], mlist[MAX_REGISTERS];
static struct coord plist[MAX_REGISTERS];

int n_olist = 0, n_mlist = 0, n_plist = 0;

unsigned int nrndlreg = 0;
unsigned int nlreg = 0, nreg = 0, ndoor = 0, ntrap = 0, nmons = 0, nobj = 0;
unsigned int ndb = 0, nwalk = 0, npart = 0, ndig = 0, nlad = 0, nstair = 0;
unsigned int naltar = 0, ncorridor = 0, nrooms = 0, ngold = 0, nengraving = 0;
unsigned int nfountain = 0, npool = 0, nsink = 0, npass = 0;

static int lev_flags = 0;

unsigned int max_x_map, max_y_map;

static xchar in_room;

extern int fatal_error;
extern int want_warnings;
extern const char *fname;



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 135 "lev_comp.y"
{
	int	i;
	char*	map;
	struct {
		xchar room;
		xchar wall;
		xchar door;
	} corpos;
}
/* Line 193 of yacc.c.  */
#line 387 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 400 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   490

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNRULES -- Number of states.  */
#define YYNSTATES  518

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      75,    76,     2,     2,    73,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    74,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    79,    80
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    21,
      29,    33,    34,    48,    50,    52,    53,    57,    61,    63,
      64,    67,    71,    72,    75,    79,    83,    84,    86,    88,
      91,    93,    95,    97,    98,   101,   107,   113,   121,   124,
     127,   140,   153,   154,   157,   163,   165,   171,   173,   179,
     181,   187,   189,   190,   193,   195,   197,   199,   201,   203,
     205,   207,   209,   211,   213,   215,   217,   219,   221,   225,
     229,   230,   242,   243,   246,   249,   251,   253,   255,   257,
     259,   261,   267,   269,   271,   273,   276,   280,   282,   285,
     291,   293,   295,   297,   299,   300,   303,   307,   311,   318,
     322,   324,   326,   330,   332,   336,   338,   339,   344,   345,
     348,   350,   352,   354,   356,   358,   360,   362,   364,   366,
     368,   370,   372,   374,   376,   378,   380,   382,   384,   386,
     388,   390,   391,   402,   403,   406,   409,   412,   415,   418,
     422,   425,   428,   429,   439,   441,   443,   444,   452,   458,
     464,   468,   472,   474,   476,   478,   480,   482,   484,   485,
     488,   491,   492,   500,   501,   504,   507,   514,   522,   528,
     530,   536,   542,   543,   552,   553,   563,   564,   573,   574,
     575,   584,   585,   592,   593,   596,   598,   609,   613,   617,
     621,   625,   629,   638,   646,   652,   660,   662,   664,   666,
     668,   670,   672,   674,   676,   678,   680,   682,   684,   686,
     688,   689,   692,   697,   699,   701,   703,   705,   707,   709,
     711,   713,   715,   717,   719,   721,   723,   728,   736,   741,
     746,   751,   756,   758,   760,   762,   764,   766,   768,   770,
     771,   773,   775,   777,   783
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      82,     0,    -1,    -1,    83,    -1,    84,    -1,    84,    83,
      -1,    85,    -1,    86,    -1,   122,    90,    88,    92,   124,
      -1,    87,    90,    88,    92,    94,    96,    98,    -1,     9,
      74,   205,    -1,    -1,    10,    74,     3,    73,     3,    73,
       5,    73,     5,    73,   194,    73,    89,    -1,     5,    -1,
      50,    -1,    -1,    63,    74,    91,    -1,    64,    73,    91,
      -1,    64,    -1,    -1,    93,    92,    -1,     7,    74,    79,
      -1,    -1,    94,    95,    -1,    23,    74,   132,    -1,    24,
      74,   133,    -1,    -1,    97,    -1,   103,    -1,   103,    97,
      -1,    99,    -1,   100,    -1,    44,    -1,    -1,   100,   101,
      -1,    37,    74,   102,    73,   102,    -1,    37,    74,   102,
      73,     4,    -1,    75,     4,    73,    49,    73,   121,    76,
      -1,   105,   111,    -1,   104,   111,    -1,    61,    74,   190,
      73,   194,    73,   108,    73,   110,    73,   205,   106,    -1,
      31,    74,   190,    73,   194,    73,   107,    73,   109,    73,
     110,   106,    -1,    -1,    73,     5,    -1,    75,     4,    73,
       4,    76,    -1,    50,    -1,    75,     4,    73,     4,    76,
      -1,    50,    -1,    75,   128,    73,   129,    76,    -1,    50,
      -1,    75,     4,    73,     4,    76,    -1,    50,    -1,    -1,
     111,   112,    -1,   113,    -1,   114,    -1,   115,    -1,   138,
      -1,   142,    -1,   147,    -1,   157,    -1,   182,    -1,   176,
      -1,   177,    -1,   178,    -1,   183,    -1,   184,    -1,   162,
      -1,    62,    74,   205,    -1,    36,    74,     4,    -1,    -1,
      17,    74,   119,    73,   193,    73,   120,    73,   121,   116,
     117,    -1,    -1,   117,   118,    -1,    73,   205,    -1,     5,
      -1,    50,    -1,    49,    -1,    50,    -1,     4,    -1,    50,
      -1,     8,    74,   205,    73,   123,    -1,     3,    -1,    50,
      -1,   125,    -1,   125,   124,    -1,   126,   130,   136,    -1,
      12,    -1,   127,    80,    -1,    11,    74,   128,    73,   129,
      -1,    56,    -1,    57,    -1,    58,    -1,    57,    -1,    -1,
     130,   131,    -1,    23,    74,   132,    -1,    25,    74,   134,
      -1,    25,    77,     4,    78,    74,   134,    -1,    24,    74,
     133,    -1,   165,    -1,   204,    -1,   204,    73,   132,    -1,
     203,    -1,   203,    73,   133,    -1,   202,    -1,    -1,   202,
     135,    73,   134,    -1,    -1,   136,   137,    -1,   138,    -1,
     142,    -1,   147,    -1,   153,    -1,   157,    -1,   158,    -1,
     181,    -1,   163,    -1,   167,    -1,   169,    -1,   172,    -1,
     182,    -1,   176,    -1,   159,    -1,   160,    -1,   161,    -1,
     162,    -1,   183,    -1,   184,    -1,   179,    -1,   180,    -1,
      -1,    15,   207,    74,   185,    73,   187,    73,   192,   139,
     140,    -1,    -1,   140,   141,    -1,    73,   205,    -1,    73,
      65,    -1,    73,    66,    -1,    73,   195,    -1,    73,    67,
     205,    -1,    13,   143,    -1,    14,   143,    -1,    -1,   207,
      74,   186,    73,   188,   144,    73,   145,   146,    -1,   192,
      -1,    68,    -1,    -1,    73,   149,    73,   150,    73,   151,
     152,    -1,    73,   149,    73,   151,   152,    -1,    73,   150,
      73,   151,   152,    -1,    70,    74,   148,    -1,   148,    73,
      69,    -1,    69,    -1,    50,    -1,    47,    -1,    79,    -1,
      50,    -1,     4,    -1,    -1,    73,    43,    -1,    73,    79,
      -1,    -1,    17,    74,   193,    73,   192,   154,   155,    -1,
      -1,   155,   156,    -1,    73,   205,    -1,    16,   207,    74,
     189,    73,   192,    -1,    18,    74,   192,    73,    49,    73,
     193,    -1,    19,    74,   192,    73,    49,    -1,    20,    -1,
      27,    74,   192,    73,    60,    -1,    28,    74,   192,    73,
      60,    -1,    -1,    28,    74,   175,   164,    73,   175,    73,
      60,    -1,    -1,    71,    77,     4,    78,    74,   175,   166,
      73,   175,    -1,    -1,    32,    74,   175,   168,    73,   175,
      73,   205,    -1,    -1,    -1,    33,    74,   175,   170,    73,
     175,   171,   174,    -1,    -1,    34,    74,   175,   173,    73,
     175,    -1,    -1,    73,    60,    -1,   210,    -1,    35,    75,
       4,    73,     4,    73,     4,    73,     4,    76,    -1,    40,
      74,   192,    -1,    42,    74,   192,    -1,    41,    74,   192,
      -1,    29,    74,   210,    -1,    30,    74,   210,    -1,    21,
      74,   210,    73,   194,    73,   190,   191,    -1,    26,    74,
     192,    73,   195,    73,   196,    -1,    38,    74,   206,    73,
     192,    -1,    39,    74,   192,    73,   208,    73,   205,    -1,
     203,    -1,    50,    -1,   200,    -1,   204,    -1,    50,    -1,
     199,    -1,   205,    -1,    50,    -1,   205,    -1,    50,    -1,
     205,    -1,    50,    -1,   205,    -1,    50,    -1,    -1,    73,
      22,    -1,    73,    22,    73,     5,    -1,   209,    -1,   197,
      -1,   198,    -1,    50,    -1,    45,    -1,    50,    -1,    46,
      -1,    50,    -1,    55,    -1,   201,    -1,    50,    -1,    59,
      -1,    50,    -1,    53,    77,     4,    78,    -1,    53,    77,
       4,    78,    77,     4,    78,    -1,    72,    77,     4,    78,
      -1,    51,    77,     4,    78,    -1,    52,    77,     4,    78,
      -1,    54,    77,     4,    78,    -1,   209,    -1,    43,    -1,
       3,    -1,     3,    -1,    79,    -1,     4,    -1,    50,    -1,
      -1,     6,    -1,    48,    -1,    50,    -1,    75,     4,    73,
       4,    76,    -1,    75,     4,    73,     4,    73,     4,    73,
       4,    76,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   175,   178,   179,   182,   183,   186,   213,
     250,   263,   271,   291,   292,   296,   299,   306,   310,   316,
     317,   320,   337,   338,   341,   352,   366,   380,   383,   384,
     387,   388,   391,   399,   400,   403,   418,   434,   444,   448,
     454,   472,   491,   494,   500,   510,   516,   525,   531,   536,
     542,   547,   553,   554,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   573,   582,
     596,   595,   622,   623,   626,   640,   641,   644,   645,   648,
     649,   652,   665,   669,   675,   676,   679,   685,   701,   714,
     720,   721,   724,   725,   728,   729,   732,   743,   751,   759,
     770,   776,   783,   792,   799,   808,   816,   815,   825,   826,
     829,   830,   831,   832,   833,   834,   835,   836,   837,   838,
     839,   840,   841,   842,   843,   844,   845,   846,   847,   848,
     849,   853,   852,   888,   889,   892,   896,   900,   904,   908,
     915,   918,   928,   927,   956,   965,   975,   984,   987,   990,
     995,  1003,  1007,  1013,  1017,  1023,  1034,  1038,  1044,  1045,
    1048,  1055,  1054,  1075,  1076,  1079,  1092,  1109,  1151,  1165,
    1171,  1188,  1206,  1205,  1235,  1234,  1263,  1262,  1289,  1298,
    1288,  1322,  1321,  1348,  1351,  1357,  1361,  1381,  1397,  1410,
    1423,  1438,  1453,  1519,  1537,  1554,  1572,  1573,  1577,  1580,
    1581,  1585,  1588,  1589,  1595,  1596,  1602,  1610,  1613,  1623,
    1627,  1630,  1634,  1640,  1641,  1642,  1643,  1649,  1650,  1653,
    1654,  1657,  1658,  1659,  1665,  1666,  1669,  1678,  1689,  1700,
    1709,  1718,  1727,  1728,  1735,  1746,  1758,  1761,  1762,  1766,
    1769,  1777,  1778,  1781,  1792
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "INTEGER", "BOOLEAN", "PERCENT",
  "MESSAGE_ID", "MAZE_ID", "LEVEL_ID", "LEV_INIT_ID", "GEOMETRY_ID",
  "NOMAP_ID", "OBJECT_ID", "COBJECT_ID", "MONSTER_ID", "TRAP_ID",
  "DOOR_ID", "DRAWBRIDGE_ID", "MAZEWALK_ID", "WALLIFY_ID", "REGION_ID",
  "FILLING", "RANDOM_OBJECTS_ID", "RANDOM_MONSTERS_ID", "RANDOM_PLACES_ID",
  "ALTAR_ID", "LADDER_ID", "STAIR_ID", "NON_DIGGABLE_ID",
  "NON_PASSWALL_ID", "ROOM_ID", "PORTAL_ID", "TELEPRT_ID", "BRANCH_ID",
  "LEV", "CHANCE_ID", "CORRIDOR_ID", "GOLD_ID", "ENGRAVING_ID",
  "FOUNTAIN_ID", "POOL_ID", "SINK_ID", "NONE", "RAND_CORRIDOR_ID",
  "DOOR_STATE", "LIGHT_STATE", "CURSE_TYPE", "ENGRAVING_TYPE", "DIRECTION",
  "RANDOM_TYPE", "O_REGISTER", "M_REGISTER", "P_REGISTER", "A_REGISTER",
  "ALIGNMENT", "LEFT_OR_RIGHT", "CENTER", "TOP_OR_BOT", "ALTAR_TYPE",
  "UP_OR_DOWN", "SUBROOM_ID", "NAME_ID", "FLAGS_ID", "FLAG_TYPE",
  "MON_ATTITUDE", "MON_ALERTNESS", "MON_APPEARANCE", "CONTAINED",
  "OBJFLAG_TYPE", "OBJFLAGS_ID", "RANDOMREGION_ID", "R_REGISTER", "','",
  "':'", "'('", "')'", "'['", "']'", "STRING", "MAP_ID", "$accept", "file",
  "levels", "level", "maze_level", "room_level", "level_def", "lev_init",
  "walled", "flags", "flag_list", "messages", "message", "rreg_init",
  "init_rreg", "rooms", "roomlist", "corridors_def", "random_corridors",
  "corridors", "corridor", "corr_spec", "aroom", "subroom_def", "room_def",
  "roomfill", "room_pos", "subroom_pos", "room_align", "room_size",
  "room_details", "room_detail", "room_name", "room_chance", "room_door",
  "@1", "room_door_infos", "room_door_info", "secret", "door_wall",
  "door_pos", "maze_def", "filling", "regions", "aregion",
  "map_definition", "map_geometry", "h_justif", "v_justif", "reg_init",
  "init_reg", "object_list", "monster_list", "place_list", "@2",
  "map_details", "map_detail", "monster_detail", "@3", "monster_infos",
  "monster_info", "object_detail", "object_desc", "@4", "object_where",
  "object_infos", "object_flags", "obj_flag_list", "curse_state",
  "monster_id", "enchantment", "optional_name", "door_detail", "@5",
  "door_infos", "door_info", "trap_detail", "drawbridge_detail",
  "mazewalk_detail", "wallify_detail", "ladder_detail", "stair_detail",
  "stair_region", "@6", "rndlevregion", "@7", "portal_region", "@8",
  "teleprt_region", "@9", "@10", "branch_region", "@11", "teleprt_detail",
  "lev_region", "fountain_detail", "sink_detail", "pool_detail",
  "diggable_detail", "passwall_detail", "region_detail", "altar_detail",
  "gold_detail", "engraving_detail", "monster_c", "object_c", "m_name",
  "o_name", "trap_name", "room_type", "prefilled", "coordinate",
  "door_state", "light_state", "alignment", "altar_type", "p_register",
  "r_register", "o_register", "m_register", "a_register", "place",
  "monster", "object", "string", "amount", "chance", "engraving_type",
  "coord", "region", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,    44,    58,    40,    41,    91,    93,   328,
     329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    83,    83,    84,    84,    85,    86,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    97,    97,
      98,    98,    99,   100,   100,   101,   101,   102,   103,   103,
     104,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   113,   114,
     116,   115,   117,   117,   118,   119,   119,   120,   120,   121,
     121,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     128,   128,   129,   129,   130,   130,   131,   131,   131,   131,
     131,   132,   132,   133,   133,   134,   135,   134,   136,   136,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   139,   138,   140,   140,   141,   141,   141,   141,   141,
     142,   142,   144,   143,   145,   145,   146,   146,   146,   146,
     147,   148,   148,   149,   149,   150,   151,   151,   152,   152,
     152,   154,   153,   155,   155,   156,   157,   158,   159,   160,
     161,   162,   164,   163,   166,   165,   168,   167,   170,   171,
     169,   173,   172,   174,   174,   175,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   185,   185,   186,
     186,   186,   187,   187,   188,   188,   189,   189,   190,   190,
     191,   191,   191,   192,   192,   192,   192,   193,   193,   194,
     194,   195,   195,   195,   196,   196,   197,   197,   198,   199,
     200,   201,   202,   202,   203,   204,   205,   206,   206,   207,
     207,   208,   208,   209,   210
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     5,     7,
       3,     0,    13,     1,     1,     0,     3,     3,     1,     0,
       2,     3,     0,     2,     3,     3,     0,     1,     1,     2,
       1,     1,     1,     0,     2,     5,     5,     7,     2,     2,
      12,    12,     0,     2,     5,     1,     5,     1,     5,     1,
       5,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       0,    11,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     5,     1,     1,     1,     2,     3,     1,     2,     5,
       1,     1,     1,     1,     0,     2,     3,     3,     6,     3,
       1,     1,     3,     1,     3,     1,     0,     4,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,    10,     0,     2,     2,     2,     2,     2,     3,
       2,     2,     0,     9,     1,     1,     0,     7,     5,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     0,     7,     0,     2,     2,     6,     7,     5,     1,
       5,     5,     0,     8,     0,     9,     0,     8,     0,     0,
       8,     0,     6,     0,     2,     1,    10,     3,     3,     3,
       3,     3,     8,     7,     5,     7,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     7,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     5,     9
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     3,     4,     6,     7,    15,    15,
       0,     0,     1,     5,     0,    11,    11,   236,     0,    10,
       0,     0,    19,    19,     0,    18,    16,     0,     0,    22,
      19,     0,    82,    83,    81,     0,     0,     0,    26,    20,
       0,    87,     8,    84,    94,     0,    17,     0,    21,     0,
       0,     0,     0,    23,    33,    27,    28,    52,    52,     0,
      85,   108,    88,     0,     0,     0,     0,     0,    32,     9,
      30,    31,    29,    39,    38,    90,    91,     0,     0,     0,
       0,     0,    95,    86,   100,     0,   235,    24,   101,   234,
      25,   103,   209,     0,   208,     0,     0,    34,   239,   239,
     239,   239,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    67,    62,    63,    64,    61,    65,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   110,   111,   112,
     113,   114,   115,   123,   124,   125,   126,   117,   118,   119,
     120,   122,   129,   130,   116,   121,   127,   128,     0,     0,
       0,     0,     0,     0,   240,   140,     0,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,    92,    89,    96,    99,   233,     0,    97,   105,
     232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   102,   104,   219,   220,     0,
       0,     0,     0,     0,     0,     0,    75,    76,     0,   216,
       0,     0,     0,   214,   215,   213,     0,    69,   237,   238,
       0,     0,   187,   189,   188,    68,   152,   150,     0,     0,
       0,     0,   217,   218,     0,     0,     0,     0,     0,     0,
       0,     0,   172,   185,   190,   191,   176,   178,   181,     0,
       0,     0,     0,     0,   200,     0,     0,   201,   199,   197,
       0,     0,   198,   196,   207,     0,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,    47,     0,     0,     0,    36,
      35,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,   221,     0,   222,   171,   194,   241,   242,     0,   151,
       0,   107,    98,   174,   161,     0,   168,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   142,   204,     0,   203,     0,   202,
     166,     0,   226,   228,     0,     0,     0,   243,     0,   163,
       0,     0,     0,     0,     0,     0,     0,   179,   182,     0,
       0,    49,     0,     0,     0,    51,     0,     0,     0,   229,
       0,   230,     0,    77,    78,     0,     0,     0,   225,   224,
     193,   195,     0,   162,   167,     0,   210,     0,     0,     0,
     183,    13,    14,    12,     0,     0,     0,     0,     0,     0,
      79,    80,     0,     0,   131,     0,     0,   231,   175,     0,
     164,     0,     0,   192,     0,   173,   177,     0,   180,    44,
       0,    42,    46,     0,    42,    37,   145,   146,   144,   133,
      70,   227,   165,     0,   211,     0,   184,     0,     0,    41,
       0,    40,     0,   143,   132,    72,     0,     0,     0,    48,
      43,    50,   154,   153,   155,     0,     0,     0,   134,    71,
     244,   212,     0,     0,     0,   136,   137,     0,   138,   135,
       0,    73,   186,   157,   156,     0,   158,   158,   139,    74,
       0,     0,   148,   149,   158,   159,   160,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    22,   423,    15,
      26,    29,    30,    38,    53,    54,    55,    69,    70,    71,
      97,   222,    56,    57,    58,   469,   314,   317,   393,   397,
      73,   113,   114,   115,   116,   475,   489,   501,   228,   405,
     432,     9,    34,    42,    43,    44,    45,    77,   193,    61,
      82,    87,    90,   198,   249,    83,   146,   117,   459,   474,
     488,   118,   175,   400,   457,   473,   119,   247,   485,   486,
     506,   512,   150,   379,   413,   440,   120,   152,   153,   154,
     155,   121,   157,   307,    84,   378,   158,   308,   159,   309,
     420,   160,   310,   448,   262,   122,   123,   124,   162,   163,
     164,   125,   126,   127,   281,   276,   368,   364,   285,    93,
     443,   236,   254,   219,   332,   410,   233,   234,   277,   282,
     333,   199,    91,    88,    94,   240,   176,   338,   235,   263
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -393
static const yytype_int16 yypact[] =
{
     121,    -2,     2,   120,  -393,   121,  -393,  -393,    97,    97,
     111,   111,  -393,  -393,   119,   184,   184,  -393,   122,  -393,
     132,   124,   190,   190,    42,   126,  -393,   197,   128,  -393,
     190,   164,  -393,  -393,  -393,   132,   130,   129,    80,  -393,
     131,  -393,  -393,   164,  -393,   133,  -393,   198,  -393,   135,
     136,   140,   142,  -393,   160,  -393,    65,  -393,  -393,   125,
    -393,    16,  -393,   134,   203,   208,    56,    56,  -393,  -393,
    -393,   180,  -393,    39,    39,  -393,  -393,   145,   146,   147,
     -16,   148,  -393,     4,  -393,   214,  -393,  -393,   149,  -393,
    -393,   150,  -393,   153,  -393,   154,   155,  -393,   222,   222,
     222,   222,   156,   157,   158,   159,   161,   162,   163,   165,
     166,   167,   168,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   127,   203,
     208,     8,   230,   234,   169,   170,   171,  -393,   172,   173,
     174,   175,   176,   177,   178,   179,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   181,   203,
     208,    82,    82,   182,  -393,  -393,   185,  -393,   186,   187,
      23,    90,    90,   252,    43,    90,    90,    90,    90,   111,
     189,  -393,  -393,  -393,  -393,  -393,  -393,   258,  -393,   191,
    -393,   188,   192,   123,    90,    90,   193,    90,    35,   193,
     193,    15,    15,    15,   260,  -393,  -393,  -393,  -393,   194,
     196,   259,   199,    13,    32,    66,  -393,  -393,   200,  -393,
     201,   202,   204,  -393,  -393,  -393,   207,  -393,  -393,  -393,
     209,   210,  -393,  -393,  -393,  -393,  -393,   211,   212,   213,
     215,   216,  -393,  -393,   218,   219,   220,   267,   221,   223,
     206,   270,  -393,  -393,  -393,  -393,  -393,  -393,  -393,   224,
      81,    83,   225,    11,  -393,   226,   227,  -393,  -393,  -393,
     228,   229,  -393,  -393,  -393,   231,  -393,   123,   271,   272,
     117,   235,    90,   101,   232,   283,     8,     8,    15,    90,
     239,   250,   233,    82,   247,   304,   236,   237,   238,   240,
     242,    82,  -393,   312,   245,  -393,   315,   248,   273,  -393,
    -393,   316,    67,   319,    69,    90,   251,   249,   253,  -393,
     255,  -393,   256,  -393,  -393,  -393,  -393,  -393,   257,  -393,
     261,  -393,  -393,  -393,  -393,   262,  -393,   321,   263,  -393,
     265,   322,    15,    15,    15,    15,   266,   268,    84,   269,
      88,   274,   275,  -393,  -393,  -393,   276,  -393,   277,  -393,
    -393,   137,   278,  -393,   324,    68,   111,  -393,   279,  -393,
     123,   284,    56,   329,   107,   285,   286,  -393,  -393,    41,
     330,  -393,   125,   287,   336,  -393,   339,   288,    44,  -393,
     289,  -393,    90,  -393,  -393,   290,   340,   291,  -393,  -393,
    -393,  -393,    15,   292,  -393,   341,   294,   295,   296,   111,
     297,  -393,  -393,  -393,   298,   299,    88,   300,   302,   111,
    -393,  -393,   301,    89,  -393,    44,   293,  -393,  -393,   111,
    -393,   305,   326,  -393,   342,  -393,  -393,   313,  -393,  -393,
     127,   306,  -393,   345,   306,  -393,  -393,   307,  -393,  -393,
    -393,  -393,  -393,   347,   308,   309,  -393,   310,   359,  -393,
     311,  -393,    21,  -393,   317,  -393,   318,   378,   380,  -393,
    -393,  -393,  -393,  -393,  -393,   320,   323,    58,  -393,   325,
    -393,  -393,   327,    10,    45,  -393,  -393,   111,  -393,  -393,
     111,  -393,  -393,  -393,  -393,   328,   331,   331,  -393,  -393,
      45,    26,  -393,  -393,   331,  -393,  -393,  -393
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -393,  -393,   383,  -393,  -393,  -393,  -393,   369,  -393,   382,
     354,    36,  -393,  -393,  -393,  -393,   343,  -393,  -393,  -393,
    -393,   138,  -393,  -393,  -393,   -62,  -393,  -393,  -393,   -31,
     344,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
     -38,  -393,  -393,   357,  -393,  -393,  -393,    14,   -45,  -393,
    -393,   -72,   -68,  -108,  -393,  -393,  -393,   332,  -393,  -393,
    -393,   333,   314,  -393,  -393,  -393,   334,  -393,  -393,   -86,
    -344,  -392,  -393,  -393,  -393,  -393,   335,  -393,  -393,  -393,
    -393,   337,  -393,  -393,  -393,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,  -393,  -393,  -200,   338,  -393,  -393,  -393,  -393,
    -393,   348,   349,   350,  -393,  -393,  -393,  -393,  -393,   -65,
    -393,  -178,  -281,  -167,   -79,  -393,  -393,  -393,  -393,  -393,
    -393,  -393,   217,   205,   -10,  -393,    91,  -393,  -127,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -107
static const yytype_int16 yytable[] =
{
      18,    19,    95,   232,   200,   220,   326,   241,   242,   243,
     244,   266,   267,   268,   503,   319,    86,    98,    99,   100,
     101,   134,   135,   136,   137,   138,   255,   256,   226,   259,
     103,   139,   140,   141,   142,    89,   143,   144,   145,    78,
      79,    80,   106,   107,   108,    32,   421,   238,   430,   503,
     260,   196,    98,    99,   100,   101,   102,   194,   131,    31,
     504,   132,   195,   274,   275,   103,    39,   104,   482,   515,
     260,   483,    10,   227,   112,   105,    11,   106,   107,   108,
     109,   110,   279,   197,   280,   229,   221,    81,   230,   484,
     257,   422,    33,   239,   431,   504,    51,   215,   343,   414,
     484,   111,   216,    49,    50,   516,    92,   231,   329,   112,
     261,    51,   330,   331,   335,   513,   284,   363,   408,   367,
      12,   344,   517,   495,   496,   497,    52,   409,   217,     1,
       2,   312,   218,   315,   391,    17,   348,    17,   395,   229,
     229,    52,   230,   230,   356,    17,    17,   370,    17,   336,
     507,   337,   385,   386,   387,   388,   313,   456,   316,   392,
      14,   231,   231,   396,   197,   197,   514,   329,   252,   200,
     200,   330,   331,   253,   258,    40,    41,   264,   265,   245,
     415,    75,    76,   377,   191,   192,   403,   404,   341,   342,
      17,   178,   179,    20,    21,    24,    25,    28,    27,    35,
      36,    63,    37,    47,    68,    59,    86,    85,    48,    64,
      65,    89,   438,    62,    66,   286,    67,    96,   128,   168,
     129,   130,   169,   170,   434,   133,   171,   172,   174,   173,
     180,   181,   182,   183,   201,   184,   185,   186,   202,   187,
     188,   189,   190,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   458,   237,   221,   246,   223,
     224,   225,   248,   272,  -106,   269,   250,   270,   257,   271,
     251,   302,   273,   287,   306,   327,   328,   290,   288,   289,
     291,   305,   292,   293,   294,   295,   296,   340,   345,   297,
     298,   299,   300,   301,   303,   334,   304,   311,   318,   346,
     322,   339,   324,   321,   325,   323,   347,   349,   350,   351,
     352,   353,   365,   354,   369,   355,   357,   416,   358,   359,
     362,   360,   361,   366,   371,   381,   384,   372,   407,   375,
     376,   373,   374,   417,   424,   380,   382,   377,   383,   389,
     427,   390,   394,   428,   436,   441,   465,   398,   464,   470,
     402,   476,   412,   399,   401,   406,   445,   415,   418,   419,
     426,   429,   433,   435,   480,   439,   411,   442,   444,   437,
     447,   461,   450,   466,   449,   453,   452,   455,   463,   468,
     472,   477,   478,   491,   492,    23,   479,   481,    13,    46,
     487,    16,   471,   493,   490,   451,   494,   460,   500,    72,
      60,   510,    74,   502,   511,   467,   425,   505,   498,   446,
       0,   320,     0,   177,     0,   147,   148,   149,   151,   454,
     156,   161,     0,     0,     0,     0,     0,     0,   278,   462,
       0,   165,   166,   167,     0,     0,     0,     0,     0,     0,
       0,   283,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   499,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   508,     0,     0,
     509
};

static const yytype_int16 yycheck[] =
{
      10,    11,    67,   181,   131,   172,   287,   185,   186,   187,
     188,   211,   212,   213,     4,     4,     3,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   204,   205,     5,   207,
      26,    27,    28,    29,    30,     3,    32,    33,    34,    23,
      24,    25,    38,    39,    40,     3,     5,     4,     4,     4,
      35,    43,    13,    14,    15,    16,    17,   129,    74,    23,
      50,    77,   130,    50,    51,    26,    30,    28,    47,    43,
      35,    50,    74,    50,    70,    36,    74,    38,    39,    40,
      41,    42,    50,    75,    52,    50,    75,    71,    53,    79,
      75,    50,    50,    50,    50,    50,    31,   169,   298,   380,
      79,    62,   170,    23,    24,    79,    50,    72,    50,    70,
      75,    31,    54,    55,   292,   507,    50,    50,    50,    50,
       0,   299,   514,    65,    66,    67,    61,    59,    46,     8,
       9,    50,    50,    50,    50,    79,   303,    79,    50,    50,
      50,    61,    53,    53,   311,    79,    79,   325,    79,    48,
     494,    50,   352,   353,   354,   355,    75,    68,    75,    75,
      63,    72,    72,    75,    75,    75,   510,    50,    45,   296,
     297,    54,    55,    50,   206,    11,    12,   209,   210,   189,
      73,    56,    57,    76,    57,    58,    49,    50,   296,   297,
      79,   100,   101,    74,    10,    73,    64,     7,    74,    73,
       3,     3,    74,    73,    44,    74,     3,    73,    79,    74,
      74,     3,   412,    80,    74,   225,    74,    37,    73,     5,
      74,    74,    73,    73,   402,    77,    73,    73,     6,    74,
      74,    74,    74,    74,     4,    74,    74,    74,     4,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    73,   433,     4,    75,    69,    74,
      74,    74,     4,     4,    73,     5,    78,    73,    75,    73,
      78,     4,    73,    73,     4,     4,     4,    73,    77,    77,
      73,    75,    73,    73,    73,    73,    73,     4,    49,    74,
      74,    73,    73,    73,    73,    60,    73,    73,    73,    49,
      73,    69,    73,    77,    73,    77,    73,    60,     4,    73,
      73,    73,   322,    73,   324,    73,     4,   382,    73,     4,
       4,    73,    49,     4,    73,     4,     4,    78,     4,    73,
      73,    78,    77,     4,     4,    73,    73,    76,    73,    73,
       4,    73,    73,     4,     4,     4,     4,    73,    22,     4,
      73,     4,    73,    78,    78,    77,    60,    73,    73,    73,
      73,    73,    73,    73,     5,    73,   376,    73,    73,    78,
      73,    78,    73,    60,    76,    73,    76,    76,    73,    73,
      73,    73,    73,     5,     4,    16,    76,    76,     5,    35,
      73,     9,   454,    73,    76,   426,    73,   435,    73,    56,
      43,    73,    58,    76,    73,   450,   392,   493,   487,   419,
      -1,   273,    -1,    99,    -1,    83,    83,    83,    83,   429,
      83,    83,    -1,    -1,    -1,    -1,    -1,    -1,   223,   439,
      -1,    83,    83,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   487,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   497,    -1,    -1,
     500
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,     9,    82,    83,    84,    85,    86,    87,   122,
      74,    74,     0,    83,    63,    90,    90,    79,   205,   205,
      74,    10,    88,    88,    73,    64,    91,    74,     7,    92,
      93,    92,     3,    50,   123,    73,     3,    74,    94,    92,
      11,    12,   124,   125,   126,   127,    91,    73,    79,    23,
      24,    31,    61,    95,    96,    97,   103,   104,   105,    74,
     124,   130,    80,     3,    74,    74,    74,    74,    44,    98,
      99,   100,    97,   111,   111,    56,    57,   128,    23,    24,
      25,    71,   131,   136,   165,    73,     3,   132,   204,     3,
     133,   203,    50,   190,   205,   190,    37,   101,    13,    14,
      15,    16,    17,    26,    28,    36,    38,    39,    40,    41,
      42,    62,    70,   112,   113,   114,   115,   138,   142,   147,
     157,   162,   176,   177,   178,   182,   183,   184,    73,    74,
      74,    74,    77,    77,    17,    18,    19,    20,    21,    27,
      28,    29,    30,    32,    33,    34,   137,   138,   142,   147,
     153,   157,   158,   159,   160,   161,   162,   163,   167,   169,
     172,   176,   179,   180,   181,   182,   183,   184,     5,    73,
      73,    73,    73,    74,     6,   143,   207,   143,   207,   207,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    57,    58,   129,   132,   133,    43,    75,   134,   202,
     209,     4,     4,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    73,   132,   133,    46,    50,   194,
     194,    75,   102,    74,    74,    74,     5,    50,   119,    50,
      53,    72,   192,   197,   198,   209,   192,     4,     4,    50,
     206,   192,   192,   192,   192,   205,    69,   148,     4,   135,
      78,    78,    45,    50,   193,   192,   192,    75,   210,   192,
      35,    75,   175,   210,   210,   210,   175,   175,   175,     5,
      73,    73,     4,    73,    50,    51,   186,   199,   204,    50,
      52,   185,   200,   203,    50,   189,   205,    73,    77,    77,
      73,    73,    73,    73,    73,    73,    73,    74,    74,    73,
      73,    73,     4,    73,    73,    75,     4,   164,   168,   170,
     173,    73,    50,    75,   107,    50,    75,   108,    73,     4,
     102,    77,    73,    77,    73,    73,   193,     4,     4,    50,
      54,    55,   195,   201,    60,   192,    48,    50,   208,    69,
       4,   134,   134,   175,   192,    49,    49,    73,   194,    60,
       4,    73,    73,    73,    73,    73,   194,     4,    73,     4,
      73,    49,     4,    50,   188,   205,     4,    50,   187,   205,
     192,    73,    78,    78,    77,    73,    73,    76,   166,   154,
      73,     4,    73,    73,     4,   175,   175,   175,   175,    73,
      73,    50,    75,   109,    73,    50,    75,   110,    73,    78,
     144,    78,    73,    49,    50,   120,    77,     4,    50,    59,
     196,   205,    73,   155,   193,    73,   190,     4,    73,    73,
     171,     5,    50,    89,     4,   128,    73,     4,     4,    73,
       4,    50,   121,    73,   192,    73,     4,    78,   175,    73,
     156,     4,    73,   191,    73,    60,   205,    73,   174,    76,
      73,   110,    76,    73,   205,    76,    68,   145,   192,   139,
     121,    78,   205,    73,    22,     4,    60,   129,    73,   106,
       4,   106,    73,   146,   140,   116,     4,    73,    73,    76,
       5,    76,    47,    50,    79,   149,   150,    73,   141,   117,
      76,     5,     4,    73,    73,    65,    66,    67,   195,   205,
      73,   118,    76,     4,    50,   150,   151,   151,   205,   205,
      73,    73,   152,   152,   151,    43,    79,   152
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 187 "lev_comp.y"
    {
			unsigned i;

			if (fatal_error > 0) {
				(void) fprintf(stderr,
				"%s : %d errors detected. No output created!\n",
					fname, fatal_error);
			} else {
				maze.flags = (yyvsp[(2) - (5)].i);
				(void) memcpy((genericptr_t)&(maze.init_lev),
						(genericptr_t)&(init_lev),
						sizeof(lev_init));
				maze.numpart = npart;
				maze.parts = NewTab(mazepart, npart);
				for(i=0;i<npart;i++)
				    maze.parts[i] = tmppart[i];
				if (!write_level_file((yyvsp[(1) - (5)].map), (splev *)0, &maze)) {
					yyerror("Can't write output file!!");
					exit(EXIT_FAILURE);
				}
				npart = 0;
			}
			Free((yyvsp[(1) - (5)].map));
		  }
    break;

  case 9:
#line 214 "lev_comp.y"
    {
			unsigned i;

			if (fatal_error > 0) {
			    (void) fprintf(stderr,
			      "%s : %d errors detected. No output created!\n",
					fname, fatal_error);
			} else {
				special_lev.flags = (long) (yyvsp[(2) - (7)].i);
				(void) memcpy(
					(genericptr_t)&(special_lev.init_lev),
					(genericptr_t)&(init_lev),
					sizeof(lev_init));
				special_lev.nroom = nrooms;
				special_lev.rooms = NewTab(room, nrooms);
				for(i=0; i<nrooms; i++)
				    special_lev.rooms[i] = tmproom[i];
				special_lev.ncorr = ncorridor;
				special_lev.corrs = NewTab(corridor, ncorridor);
				for(i=0; i<ncorridor; i++)
				    special_lev.corrs[i] = tmpcor[i];
				if (check_subrooms()) {
				    if (!write_level_file((yyvsp[(1) - (7)].map), &special_lev,
							  (specialmaze *)0)) {
					yyerror("Can't write output file!!");
					exit(EXIT_FAILURE);
				    }
				}
				free_rooms(&special_lev);
				nrooms = 0;
				ncorridor = 0;
			}
			Free((yyvsp[(1) - (7)].map));
		  }
    break;

  case 10:
#line 251 "lev_comp.y"
    {
			if (index((yyvsp[(3) - (3)].map), '.'))
			    yyerror("Invalid dot ('.') in level name.");
			if ((int) strlen((yyvsp[(3) - (3)].map)) > 8)
			    yyerror("Level names limited to 8 characters.");
			(yyval.map) = (yyvsp[(3) - (3)].map);
			special_lev.nrmonst = special_lev.nrobjects = 0;
			n_mlist = n_olist = 0;
		  }
    break;

  case 11:
#line 263 "lev_comp.y"
    {
			/* in case we're processing multiple files,
			   explicitly clear any stale settings */
			(void) memset((genericptr_t) &init_lev, 0,
					sizeof init_lev);
			init_lev.init_present = FALSE;
			(yyval.i) = 0;
		  }
    break;

  case 12:
#line 272 "lev_comp.y"
    {
			init_lev.init_present = TRUE;
			init_lev.fg = what_map_char((char) (yyvsp[(3) - (13)].i));
			if (init_lev.fg == INVALID_TYPE)
			    yyerror("Invalid foreground type.");
			init_lev.bg = what_map_char((char) (yyvsp[(5) - (13)].i));
			if (init_lev.bg == INVALID_TYPE)
			    yyerror("Invalid background type.");
			init_lev.smoothed = (yyvsp[(7) - (13)].i);
			init_lev.joined = (yyvsp[(9) - (13)].i);
			if (init_lev.joined &&
			    init_lev.fg != CORR && init_lev.fg != ROOM)
			    yyerror("Invalid foreground type for joined map.");
			init_lev.lit = (yyvsp[(11) - (13)].i);
			init_lev.walled = (yyvsp[(13) - (13)].i);
			(yyval.i) = 1;
		  }
    break;

  case 15:
#line 296 "lev_comp.y"
    {
			(yyval.i) = 0;
		  }
    break;

  case 16:
#line 300 "lev_comp.y"
    {
			(yyval.i) = lev_flags;
			lev_flags = 0;	/* clear for next user */
		  }
    break;

  case 17:
#line 307 "lev_comp.y"
    {
			lev_flags |= (yyvsp[(1) - (3)].i);
		  }
    break;

  case 18:
#line 311 "lev_comp.y"
    {
			lev_flags |= (yyvsp[(1) - (1)].i);
		  }
    break;

  case 21:
#line 321 "lev_comp.y"
    {
			int i, j;

			i = (int) strlen((yyvsp[(3) - (3)].map)) + 1;
			j = (int) strlen(tmpmessage);
			if (i + j > 255) {
			   yyerror("Message string too long (>256 characters)");
			} else {
			    if (j) tmpmessage[j++] = '\n';
			    (void) strncpy(tmpmessage+j, (yyvsp[(3) - (3)].map), i - 1);
			    tmpmessage[j + i - 1] = 0;
			}
			Free((yyvsp[(3) - (3)].map));
		  }
    break;

  case 24:
#line 342 "lev_comp.y"
    {
			if(special_lev.nrobjects) {
			    yyerror("Object registers already initialized!");
			} else {
			    special_lev.nrobjects = n_olist;
			    special_lev.robjects = (char *) alloc(n_olist);
			    (void) memcpy((genericptr_t)special_lev.robjects,
					  (genericptr_t)olist, n_olist);
			}
		  }
    break;

  case 25:
#line 353 "lev_comp.y"
    {
			if(special_lev.nrmonst) {
			    yyerror("Monster registers already initialized!");
			} else {
			    special_lev.nrmonst = n_mlist;
			    special_lev.rmonst = (char *) alloc(n_mlist);
			    (void) memcpy((genericptr_t)special_lev.rmonst,
					  (genericptr_t)mlist, n_mlist);
			  }
		  }
    break;

  case 26:
#line 366 "lev_comp.y"
    {
			tmproom[nrooms] = New(room);
			tmproom[nrooms]->name = (char *) 0;
			tmproom[nrooms]->parent = (char *) 0;
			tmproom[nrooms]->rtype = 0;
			tmproom[nrooms]->rlit = 0;
			tmproom[nrooms]->xalign = ERR;
			tmproom[nrooms]->yalign = ERR;
			tmproom[nrooms]->x = 0;
			tmproom[nrooms]->y = 0;
			tmproom[nrooms]->w = 2;
			tmproom[nrooms]->h = 2;
			in_room = 1;
		  }
    break;

  case 32:
#line 392 "lev_comp.y"
    {
			tmpcor[0] = New(corridor);
			tmpcor[0]->src.room = -1;
			ncorridor = 1;
		  }
    break;

  case 35:
#line 404 "lev_comp.y"
    {
			tmpcor[ncorridor] = New(corridor);
			tmpcor[ncorridor]->src.room = (yyvsp[(3) - (5)].corpos).room;
			tmpcor[ncorridor]->src.wall = (yyvsp[(3) - (5)].corpos).wall;
			tmpcor[ncorridor]->src.door = (yyvsp[(3) - (5)].corpos).door;
			tmpcor[ncorridor]->dest.room = (yyvsp[(5) - (5)].corpos).room;
			tmpcor[ncorridor]->dest.wall = (yyvsp[(5) - (5)].corpos).wall;
			tmpcor[ncorridor]->dest.door = (yyvsp[(5) - (5)].corpos).door;
			ncorridor++;
			if (ncorridor >= MAX_OF_TYPE) {
				yyerror("Too many corridors in level!");
				ncorridor--;
			}
		  }
    break;

  case 36:
#line 419 "lev_comp.y"
    {
			tmpcor[ncorridor] = New(corridor);
			tmpcor[ncorridor]->src.room = (yyvsp[(3) - (5)].corpos).room;
			tmpcor[ncorridor]->src.wall = (yyvsp[(3) - (5)].corpos).wall;
			tmpcor[ncorridor]->src.door = (yyvsp[(3) - (5)].corpos).door;
			tmpcor[ncorridor]->dest.room = -1;
			tmpcor[ncorridor]->dest.wall = (yyvsp[(5) - (5)].i);
			ncorridor++;
			if (ncorridor >= MAX_OF_TYPE) {
				yyerror("Too many corridors in level!");
				ncorridor--;
			}
		  }
    break;

  case 37:
#line 435 "lev_comp.y"
    {
			if ((unsigned) (yyvsp[(2) - (7)].i) >= nrooms)
			    yyerror("Wrong room number!");
			(yyval.corpos).room = (yyvsp[(2) - (7)].i);
			(yyval.corpos).wall = (yyvsp[(4) - (7)].i);
			(yyval.corpos).door = (yyvsp[(6) - (7)].i);
		  }
    break;

  case 38:
#line 445 "lev_comp.y"
    {
			store_room();
		  }
    break;

  case 39:
#line 449 "lev_comp.y"
    {
			store_room();
		  }
    break;

  case 40:
#line 455 "lev_comp.y"
    {
			tmproom[nrooms] = New(room);
			tmproom[nrooms]->parent = (yyvsp[(11) - (12)].map);
			tmproom[nrooms]->name = (char *) 0;
			tmproom[nrooms]->rtype = (yyvsp[(3) - (12)].i);
			tmproom[nrooms]->rlit = (yyvsp[(5) - (12)].i);
			tmproom[nrooms]->filled = (yyvsp[(12) - (12)].i);
			tmproom[nrooms]->xalign = ERR;
			tmproom[nrooms]->yalign = ERR;
			tmproom[nrooms]->x = current_coord.x;
			tmproom[nrooms]->y = current_coord.y;
			tmproom[nrooms]->w = current_size.width;
			tmproom[nrooms]->h = current_size.height;
			in_room = 1;
		  }
    break;

  case 41:
#line 473 "lev_comp.y"
    {
			tmproom[nrooms] = New(room);
			tmproom[nrooms]->name = (char *) 0;
			tmproom[nrooms]->parent = (char *) 0;
			tmproom[nrooms]->rtype = (yyvsp[(3) - (12)].i);
			tmproom[nrooms]->rlit = (yyvsp[(5) - (12)].i);
			tmproom[nrooms]->filled = (yyvsp[(12) - (12)].i);
			tmproom[nrooms]->xalign = current_align.x;
			tmproom[nrooms]->yalign = current_align.y;
			tmproom[nrooms]->x = current_coord.x;
			tmproom[nrooms]->y = current_coord.y;
			tmproom[nrooms]->w = current_size.width;
			tmproom[nrooms]->h = current_size.height;
			in_room = 1;
		  }
    break;

  case 42:
#line 491 "lev_comp.y"
    {
			(yyval.i) = 1;
		  }
    break;

  case 43:
#line 495 "lev_comp.y"
    {
			(yyval.i) = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 44:
#line 501 "lev_comp.y"
    {
			if ( (yyvsp[(2) - (5)].i) < 1 || (yyvsp[(2) - (5)].i) > 5 ||
			    (yyvsp[(4) - (5)].i) < 1 || (yyvsp[(4) - (5)].i) > 5 ) {
			    yyerror("Room position should be between 1 & 5!");
			} else {
			    current_coord.x = (yyvsp[(2) - (5)].i);
			    current_coord.y = (yyvsp[(4) - (5)].i);
			}
		  }
    break;

  case 45:
#line 511 "lev_comp.y"
    {
			current_coord.x = current_coord.y = ERR;
		  }
    break;

  case 46:
#line 517 "lev_comp.y"
    {
			if ( (yyvsp[(2) - (5)].i) < 0 || (yyvsp[(4) - (5)].i) < 0) {
			    yyerror("Invalid subroom position !");
			} else {
			    current_coord.x = (yyvsp[(2) - (5)].i);
			    current_coord.y = (yyvsp[(4) - (5)].i);
			}
		  }
    break;

  case 47:
#line 526 "lev_comp.y"
    {
			current_coord.x = current_coord.y = ERR;
		  }
    break;

  case 48:
#line 532 "lev_comp.y"
    {
			current_align.x = (yyvsp[(2) - (5)].i);
			current_align.y = (yyvsp[(4) - (5)].i);
		  }
    break;

  case 49:
#line 537 "lev_comp.y"
    {
			current_align.x = current_align.y = ERR;
		  }
    break;

  case 50:
#line 543 "lev_comp.y"
    {
			current_size.width = (yyvsp[(2) - (5)].i);
			current_size.height = (yyvsp[(4) - (5)].i);
		  }
    break;

  case 51:
#line 548 "lev_comp.y"
    {
			current_size.height = current_size.width = ERR;
		  }
    break;

  case 68:
#line 574 "lev_comp.y"
    {
			if (tmproom[nrooms]->name)
			    yyerror("This room already has a name!");
			else
			    tmproom[nrooms]->name = (yyvsp[(3) - (3)].map);
		  }
    break;

  case 69:
#line 583 "lev_comp.y"
    {
			if (tmproom[nrooms]->chance)
			    yyerror("This room already assigned a chance!");
			else if (tmproom[nrooms]->rtype == OROOM)
			    yyerror("Only typed rooms can have a chance!");
			else if ((yyvsp[(3) - (3)].i) < 1 || (yyvsp[(3) - (3)].i) > 99)
			    yyerror("The chance is supposed to be percentile.");
			else
			    tmproom[nrooms]->chance = (yyvsp[(3) - (3)].i);
		   }
    break;

  case 70:
#line 596 "lev_comp.y"
    {
			/* ERR means random here */
			if ((yyvsp[(7) - (9)].i) == ERR && (yyvsp[(9) - (9)].i) != ERR) {
		     yyerror("If the door wall is random, so must be its pos!");
			    tmprdoor[ndoor] = (struct room_door *)0;
			} else {
			    tmprdoor[ndoor] = New(room_door);
			    tmprdoor[ndoor]->secret = (yyvsp[(3) - (9)].i);
			    tmprdoor[ndoor]->mask = (yyvsp[(5) - (9)].i);
			    tmprdoor[ndoor]->wall = (yyvsp[(7) - (9)].i);
			    tmprdoor[ndoor]->pos = (yyvsp[(9) - (9)].i);
			    tmprdoor[ndoor]->arti_key = 0;
			}
		  }
    break;

  case 71:
#line 611 "lev_comp.y"
    {
			if (tmprdoor[ndoor]) {
			    ndoor++;
			    if (ndoor >= MAX_OF_TYPE) {
				    yyerror("Too many doors in room!");
				    ndoor--;
			    }
			}
		  }
    break;

  case 74:
#line 627 "lev_comp.y"
    {
			int token = get_artifact_id((yyvsp[(2) - (2)].map));
			if (token == ERR) {
			    char ebuf[100];
			    Sprintf(ebuf, "Undefined artifact key \"%s\"", (yyvsp[(2) - (2)].map));
			    yyerror(ebuf);
			}
			else if (tmprdoor[ndoor])
			    tmprdoor[ndoor]->arti_key = token;
		  }
    break;

  case 81:
#line 653 "lev_comp.y"
    {
			maze.filling = (schar) (yyvsp[(5) - (5)].i);
			if (index((yyvsp[(3) - (5)].map), '.'))
			    yyerror("Invalid dot ('.') in level name.");
			if ((int) strlen((yyvsp[(3) - (5)].map)) > 8)
			    yyerror("Level names limited to 8 characters.");
			(yyval.map) = (yyvsp[(3) - (5)].map);
			in_room = 0;
			n_plist = n_mlist = n_olist = 0;
		  }
    break;

  case 82:
#line 666 "lev_comp.y"
    {
			(yyval.i) = get_floor_type((char)(yyvsp[(1) - (1)].i));
		  }
    break;

  case 83:
#line 670 "lev_comp.y"
    {
			(yyval.i) = -1;
		  }
    break;

  case 86:
#line 680 "lev_comp.y"
    {
			store_part();
		  }
    break;

  case 87:
#line 686 "lev_comp.y"
    {
			tmppart[npart] = New(mazepart);
			tmppart[npart]->halign = 1;
			tmppart[npart]->valign = 1;
			tmppart[npart]->nrobjects = 0;
			tmppart[npart]->nloc = 0;
			tmppart[npart]->nrmonst = 0;
			tmppart[npart]->xsize = 1;
			tmppart[npart]->ysize = 1;
			tmppart[npart]->map = (char **) alloc(sizeof(char *));
			tmppart[npart]->map[0] = (char *) alloc(1);
			tmppart[npart]->map[0][0] = STONE;
			max_x_map = COLNO-1;
			max_y_map = ROWNO;
		  }
    break;

  case 88:
#line 702 "lev_comp.y"
    {
			tmppart[npart] = New(mazepart);
			tmppart[npart]->halign = (yyvsp[(1) - (2)].i) % 10;
			tmppart[npart]->valign = (yyvsp[(1) - (2)].i) / 10;
			tmppart[npart]->nrobjects = 0;
			tmppart[npart]->nloc = 0;
			tmppart[npart]->nrmonst = 0;
			scan_map((yyvsp[(2) - (2)].map));
			Free((yyvsp[(2) - (2)].map));
		  }
    break;

  case 89:
#line 715 "lev_comp.y"
    {
			(yyval.i) = (yyvsp[(3) - (5)].i) + ((yyvsp[(5) - (5)].i) * 10);
		  }
    break;

  case 96:
#line 733 "lev_comp.y"
    {
			if (tmppart[npart]->nrobjects) {
			    yyerror("Object registers already initialized!");
			} else {
			    tmppart[npart]->robjects = (char *)alloc(n_olist);
			    (void) memcpy((genericptr_t)tmppart[npart]->robjects,
					  (genericptr_t)olist, n_olist);
			    tmppart[npart]->nrobjects = n_olist;
			}
		  }
    break;

  case 97:
#line 744 "lev_comp.y"
    {
			if (tmppart[npart]->nlocset)
			    yyerror("Location registers already initialized!");
			else
			    store_place_list(npart, 0, n_plist, plist);
			n_plist = 0;
		  }
    break;

  case 98:
#line 752 "lev_comp.y"
    {
			if ((yyvsp[(3) - (6)].i) >= MAX_REGISTERS)
			    yyerror("Register Index overflow!");
			else
			    store_place_list(npart, (yyvsp[(3) - (6)].i), n_plist, plist);
			n_plist = 0;
		  }
    break;

  case 99:
#line 760 "lev_comp.y"
    {
			if (tmppart[npart]->nrmonst) {
			    yyerror("Monster registers already initialized!");
			} else {
			    tmppart[npart]->rmonst = (char *) alloc(n_mlist);
			    (void) memcpy((genericptr_t)tmppart[npart]->rmonst,
					  (genericptr_t)mlist, n_mlist);
			    tmppart[npart]->nrmonst = n_mlist;
			}
		  }
    break;

  case 100:
#line 771 "lev_comp.y"
    {
			/* nothing */
		  }
    break;

  case 101:
#line 777 "lev_comp.y"
    {
			if (n_olist < MAX_REGISTERS)
			    olist[n_olist++] = (yyvsp[(1) - (1)].i);
			else
			    yyerror("Object list too long!");
		  }
    break;

  case 102:
#line 784 "lev_comp.y"
    {
			if (n_olist < MAX_REGISTERS)
			    olist[n_olist++] = (yyvsp[(1) - (3)].i);
			else
			    yyerror("Object list too long!");
		  }
    break;

  case 103:
#line 793 "lev_comp.y"
    {
			if (n_mlist < MAX_REGISTERS)
			    mlist[n_mlist++] = (yyvsp[(1) - (1)].i);
			else
			    yyerror("Monster list too long!");
		  }
    break;

  case 104:
#line 800 "lev_comp.y"
    {
			if (n_mlist < MAX_REGISTERS)
			    mlist[n_mlist++] = (yyvsp[(1) - (3)].i);
			else
			    yyerror("Monster list too long!");
		  }
    break;

  case 105:
#line 809 "lev_comp.y"
    {
			if (n_plist < MAX_REGISTERS)
			    plist[n_plist++] = current_coord;
			else
			    yyerror("Location list too long!");
		  }
    break;

  case 106:
#line 816 "lev_comp.y"
    {
			if (n_plist < MAX_REGISTERS)
			    plist[n_plist++] = current_coord;
			else
			    yyerror("Location list too long!");
		  }
    break;

  case 131:
#line 853 "lev_comp.y"
    {
			tmpmonst[nmons] = New(monster);
			tmpmonst[nmons]->x = current_coord.x;
			tmpmonst[nmons]->y = current_coord.y;
			tmpmonst[nmons]->class = (yyvsp[(4) - (8)].i);
			tmpmonst[nmons]->peaceful = -1; /* no override */
			tmpmonst[nmons]->asleep = -1;
			tmpmonst[nmons]->align = - MAX_REGISTERS - 2;
			tmpmonst[nmons]->name.str = 0;
			tmpmonst[nmons]->appear = 0;
			tmpmonst[nmons]->appear_as.str = 0;
			tmpmonst[nmons]->chance = (yyvsp[(2) - (8)].i);
			tmpmonst[nmons]->id = NON_PM;
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Monster");
			if ((yyvsp[(6) - (8)].map)) {
			    int token = get_monster_id((yyvsp[(6) - (8)].map), (char) (yyvsp[(4) - (8)].i));
			    if (token == ERR)
				yywarning(
			      "Invalid monster name!  Making random monster.");
			    else
				tmpmonst[nmons]->id = token;
			    Free((yyvsp[(6) - (8)].map));
			}
		  }
    break;

  case 132:
#line 880 "lev_comp.y"
    {
			if (++nmons >= MAX_OF_TYPE) {
			    yyerror("Too many monsters in room or mazepart!");
			    nmons--;
			}
		  }
    break;

  case 135:
#line 893 "lev_comp.y"
    {
			tmpmonst[nmons]->name.str = (yyvsp[(2) - (2)].map);
		  }
    break;

  case 136:
#line 897 "lev_comp.y"
    {
			tmpmonst[nmons]->peaceful = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 137:
#line 901 "lev_comp.y"
    {
			tmpmonst[nmons]->asleep = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 138:
#line 905 "lev_comp.y"
    {
			tmpmonst[nmons]->align = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 139:
#line 909 "lev_comp.y"
    {
			tmpmonst[nmons]->appear = (yyvsp[(2) - (3)].i);
			tmpmonst[nmons]->appear_as.str = (yyvsp[(3) - (3)].map);
		  }
    break;

  case 140:
#line 916 "lev_comp.y"
    {
		  }
    break;

  case 141:
#line 919 "lev_comp.y"
    {
			/* 1: is contents of preceeding object with 2 */
			/* 2: is a container */
			/* 0: neither */
			tmpobj[nobj-1]->containment = 2;
		  }
    break;

  case 142:
#line 928 "lev_comp.y"
    {
			tmpobj[nobj] = New(object);
			tmpobj[nobj]->class = (yyvsp[(3) - (5)].i);
			tmpobj[nobj]->corpsenm = NON_PM;
			tmpobj[nobj]->curse_state = -1;
			tmpobj[nobj]->name.str = 0;
			tmpobj[nobj]->chance = (yyvsp[(1) - (5)].i);
			tmpobj[nobj]->id = -1;
			tmpobj[nobj]->oflags = 0;
			if ((yyvsp[(5) - (5)].map)) {
			    int token = get_object_id((yyvsp[(5) - (5)].map), (yyvsp[(3) - (5)].i));
			    if (token == ERR)
				yywarning(
				"Illegal object name!  Making random object.");
			     else
				tmpobj[nobj]->id = token;
			    Free((yyvsp[(5) - (5)].map));
			}
		  }
    break;

  case 143:
#line 948 "lev_comp.y"
    {
			if (++nobj >= MAX_OF_TYPE) {
			    yyerror("Too many objects in room or mazepart!");
			    nobj--;
			}
		  }
    break;

  case 144:
#line 957 "lev_comp.y"
    {
			tmpobj[nobj]->containment = 0;
			tmpobj[nobj]->x = current_coord.x;
			tmpobj[nobj]->y = current_coord.y;
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Object");
		  }
    break;

  case 145:
#line 966 "lev_comp.y"
    {
			tmpobj[nobj]->containment = 1;
			/* random coordinate, will be overridden anyway */
			tmpobj[nobj]->x = -MAX_REGISTERS-2;
			tmpobj[nobj]->y = -MAX_REGISTERS-2;
		  }
    break;

  case 146:
#line 975 "lev_comp.y"
    {
			tmpobj[nobj]->spe = -127;
	/* Note below: we're trying to make as many of these optional as
	 * possible.  We clearly can't make curse_state, enchantment, and
	 * monster_id _all_ optional, since ",random" would be ambiguous.
	 * We can't even just make enchantment mandatory, since if we do that
	 * alone, ",random" requires too much lookahead to parse.
	 */
		  }
    break;

  case 147:
#line 985 "lev_comp.y"
    {
		  }
    break;

  case 148:
#line 988 "lev_comp.y"
    {
		  }
    break;

  case 149:
#line 991 "lev_comp.y"
    {
		  }
    break;

  case 150:
#line 996 "lev_comp.y"
    {
		   	if (nobj > 0)
		   	   tmpobj[nobj-1]->oflags = (yyvsp[(3) - (3)].i);
			else yyerror("Need an object before object flags!");
		  }
    break;

  case 151:
#line 1004 "lev_comp.y"
    {
		     (yyval.i) = ((yyvsp[(1) - (3)].i) | (yyvsp[(3) - (3)].i));
		  }
    break;

  case 152:
#line 1008 "lev_comp.y"
    {
		     (yyval.i) = (yyvsp[(1) - (1)].i);
		  }
    break;

  case 153:
#line 1014 "lev_comp.y"
    {
			tmpobj[nobj]->curse_state = -1;
		  }
    break;

  case 154:
#line 1018 "lev_comp.y"
    {
			tmpobj[nobj]->curse_state = (yyvsp[(1) - (1)].i);
		  }
    break;

  case 155:
#line 1024 "lev_comp.y"
    {
			int token = get_monster_id((yyvsp[(1) - (1)].map), (char)0);
			if (token == ERR)	/* "random" */
			    tmpobj[nobj]->corpsenm = NON_PM - 1;
			else
			    tmpobj[nobj]->corpsenm = token;
			Free((yyvsp[(1) - (1)].map));
		  }
    break;

  case 156:
#line 1035 "lev_comp.y"
    {
			tmpobj[nobj]->spe = -127;
		  }
    break;

  case 157:
#line 1039 "lev_comp.y"
    {
			tmpobj[nobj]->spe = (yyvsp[(1) - (1)].i);
		  }
    break;

  case 159:
#line 1046 "lev_comp.y"
    {
		  }
    break;

  case 160:
#line 1049 "lev_comp.y"
    {
			tmpobj[nobj]->name.str = (yyvsp[(2) - (2)].map);
		  }
    break;

  case 161:
#line 1055 "lev_comp.y"
    {
			tmpdoor[ndoor] = New(door);
			tmpdoor[ndoor]->x = current_coord.x;
			tmpdoor[ndoor]->y = current_coord.y;
			tmpdoor[ndoor]->mask = (yyvsp[(3) - (5)].i);
			tmpdoor[ndoor]->arti_key = 0;
			if(current_coord.x >= 0 && current_coord.y >= 0 &&
			   tmpmap[current_coord.y][current_coord.x] != DOOR &&
			   tmpmap[current_coord.y][current_coord.x] != SDOOR)
			    yyerror("Door decl doesn't match the map");
		  }
    break;

  case 162:
#line 1067 "lev_comp.y"
    {
			if (++ndoor >= MAX_OF_TYPE) {
			    yyerror("Too many doors in mazepart!");
			    ndoor--;
			}
		  }
    break;

  case 165:
#line 1080 "lev_comp.y"
    {
			int token = get_artifact_id((yyvsp[(2) - (2)].map));
			if (token == ERR) {
			    char ebuf[100];
			    Sprintf(ebuf, "Undefined artifact key \"%s\"", (yyvsp[(2) - (2)].map));
			    yyerror(ebuf);
			}
			else
			    tmpdoor[ndoor]->arti_key = token;
		  }
    break;

  case 166:
#line 1093 "lev_comp.y"
    {
			tmptrap[ntrap] = New(trap);
			tmptrap[ntrap]->x = current_coord.x;
			tmptrap[ntrap]->y = current_coord.y;
			tmptrap[ntrap]->type = (yyvsp[(4) - (6)].i);
			tmptrap[ntrap]->chance = (yyvsp[(2) - (6)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Trap");
			if (++ntrap >= MAX_OF_TYPE) {
				yyerror("Too many traps in room or mazepart!");
				ntrap--;
			}
		  }
    break;

  case 167:
#line 1110 "lev_comp.y"
    {
		        int x, y, dir;

			tmpdb[ndb] = New(drawbridge);
			x = tmpdb[ndb]->x = current_coord.x;
			y = tmpdb[ndb]->y = current_coord.y;
			/* convert dir from a DIRECTION to a DB_DIR */
			dir = (yyvsp[(5) - (7)].i);
			switch(dir) {
			case W_NORTH: dir = DB_NORTH; y--; break;
			case W_SOUTH: dir = DB_SOUTH; y++; break;
			case W_EAST:  dir = DB_EAST;  x++; break;
			case W_WEST:  dir = DB_WEST;  x--; break;
			default:
			    yyerror("Invalid drawbridge direction");
			    break;
			}
			tmpdb[ndb]->dir = dir;
			if (current_coord.x >= 0 && current_coord.y >= 0 &&
			    !IS_WALL(tmpmap[y][x])) {
			    char ebuf[60];
			    Sprintf(ebuf,
				    "Wall needed for drawbridge (%02d, %02d)",
				    current_coord.x, current_coord.y);
			    yyerror(ebuf);
			}

			if ( (yyvsp[(7) - (7)].i) == D_ISOPEN )
			    tmpdb[ndb]->db_open = 1;
			else if ( (yyvsp[(7) - (7)].i) == D_CLOSED )
			    tmpdb[ndb]->db_open = 0;
			else
			    yyerror("A drawbridge can only be open or closed!");
			ndb++;
			if (ndb >= MAX_OF_TYPE) {
				yyerror("Too many drawbridges in mazepart!");
				ndb--;
			}
		   }
    break;

  case 168:
#line 1152 "lev_comp.y"
    {
			tmpwalk[nwalk] = New(walk);
			tmpwalk[nwalk]->x = current_coord.x;
			tmpwalk[nwalk]->y = current_coord.y;
			tmpwalk[nwalk]->dir = (yyvsp[(5) - (5)].i);
			nwalk++;
			if (nwalk >= MAX_OF_TYPE) {
				yyerror("Too many mazewalks in mazepart!");
				nwalk--;
			}
		  }
    break;

  case 169:
#line 1166 "lev_comp.y"
    {
			wallify_map();
		  }
    break;

  case 170:
#line 1172 "lev_comp.y"
    {
			tmplad[nlad] = New(lad);
			tmplad[nlad]->x = current_coord.x;
			tmplad[nlad]->y = current_coord.y;
			tmplad[nlad]->up = (yyvsp[(5) - (5)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Ladder");
			nlad++;
			if (nlad >= MAX_OF_TYPE) {
				yyerror("Too many ladders in mazepart!");
				nlad--;
			}
		  }
    break;

  case 171:
#line 1189 "lev_comp.y"
    {
			tmpstair[nstair] = New(stair);
			tmpstair[nstair]->x = current_coord.x;
			tmpstair[nstair]->y = current_coord.y;
			tmpstair[nstair]->up = (yyvsp[(5) - (5)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Stairway");
			nstair++;
			if (nstair >= MAX_OF_TYPE) {
				yyerror("Too many stairs in room or mazepart!");
				nstair--;
			}
		  }
    break;

  case 172:
#line 1206 "lev_comp.y"
    {
			tmplreg[nlreg] = New(lev_region);
			tmplreg[nlreg]->in_islev = (yyvsp[(3) - (3)].i);
			tmplreg[nlreg]->inarea.x1 = current_region.x1;
			tmplreg[nlreg]->inarea.y1 = current_region.y1;
			tmplreg[nlreg]->inarea.x2 = current_region.x2;
			tmplreg[nlreg]->inarea.y2 = current_region.y2;
		  }
    break;

  case 173:
#line 1215 "lev_comp.y"
    {
			tmplreg[nlreg]->del_islev = (yyvsp[(6) - (8)].i);
			tmplreg[nlreg]->delarea.x1 = current_region.x1;
			tmplreg[nlreg]->delarea.y1 = current_region.y1;
			tmplreg[nlreg]->delarea.x2 = current_region.x2;
			tmplreg[nlreg]->delarea.y2 = current_region.y2;
			if((yyvsp[(8) - (8)].i))
			    tmplreg[nlreg]->rtype = LR_UPSTAIR;
			else
			    tmplreg[nlreg]->rtype = LR_DOWNSTAIR;
			tmplreg[nlreg]->rname.str = 0;
			nlreg++;
			if (nlreg >= MAX_OF_TYPE) {
				yyerror("Too many levregions in mazepart!");
				nlreg--;
			}
		  }
    break;

  case 174:
#line 1235 "lev_comp.y"
    {
		   	if ((unsigned) (yyvsp[(3) - (6)].i) != nrndlreg)
			    yyerror("Wrong random region number!");
			tmprndlreg[nrndlreg] = New(lev_region);
			tmprndlreg[nrndlreg]->in_islev = (yyvsp[(6) - (6)].i);
			tmprndlreg[nrndlreg]->inarea.x1 = current_region.x1;
			tmprndlreg[nrndlreg]->inarea.y1 = current_region.y1;
			tmprndlreg[nrndlreg]->inarea.x2 = current_region.x2;
			tmprndlreg[nrndlreg]->inarea.y2 = current_region.y2;
		  }
    break;

  case 175:
#line 1246 "lev_comp.y"
    {
		   	tmprndlreg[nrndlreg]->del_islev = (yyvsp[(9) - (9)].i);
			tmprndlreg[nrndlreg]->delarea.x1 = current_region.x1;
			tmprndlreg[nrndlreg]->delarea.y1 = current_region.y1;
			tmprndlreg[nrndlreg]->delarea.x2 = current_region.x2;
			tmprndlreg[nrndlreg]->delarea.y2 = current_region.y2;
			tmprndlreg[nrndlreg]->rtype = 0;
			tmprndlreg[nrndlreg]->rname.str = (char *)0;
			nrndlreg++;
			if (nrndlreg >= MAX_REGISTERS) {
				yyerror("Too many random regions!");
				nrndlreg--;
			}
		  }
    break;

  case 176:
#line 1263 "lev_comp.y"
    {
			tmplreg[nlreg] = New(lev_region);
			tmplreg[nlreg]->in_islev = (yyvsp[(3) - (3)].i);
			tmplreg[nlreg]->inarea.x1 = current_region.x1;
			tmplreg[nlreg]->inarea.y1 = current_region.y1;
			tmplreg[nlreg]->inarea.x2 = current_region.x2;
			tmplreg[nlreg]->inarea.y2 = current_region.y2;
		  }
    break;

  case 177:
#line 1272 "lev_comp.y"
    {
			tmplreg[nlreg]->del_islev = (yyvsp[(6) - (8)].i);
			tmplreg[nlreg]->delarea.x1 = current_region.x1;
			tmplreg[nlreg]->delarea.y1 = current_region.y1;
			tmplreg[nlreg]->delarea.x2 = current_region.x2;
			tmplreg[nlreg]->delarea.y2 = current_region.y2;
			tmplreg[nlreg]->rtype = LR_PORTAL;
			tmplreg[nlreg]->rname.str = (yyvsp[(8) - (8)].map);
			nlreg++;
			if (nlreg >= MAX_OF_TYPE) {
				yyerror("Too many levregions in mazepart!");
				nlreg--;
			}
		  }
    break;

  case 178:
#line 1289 "lev_comp.y"
    {
			tmplreg[nlreg] = New(lev_region);
			tmplreg[nlreg]->in_islev = (yyvsp[(3) - (3)].i);
			tmplreg[nlreg]->inarea.x1 = current_region.x1;
			tmplreg[nlreg]->inarea.y1 = current_region.y1;
			tmplreg[nlreg]->inarea.x2 = current_region.x2;
			tmplreg[nlreg]->inarea.y2 = current_region.y2;
		  }
    break;

  case 179:
#line 1298 "lev_comp.y"
    {
			tmplreg[nlreg]->del_islev = (yyvsp[(6) - (6)].i);
			tmplreg[nlreg]->delarea.x1 = current_region.x1;
			tmplreg[nlreg]->delarea.y1 = current_region.y1;
			tmplreg[nlreg]->delarea.x2 = current_region.x2;
			tmplreg[nlreg]->delarea.y2 = current_region.y2;
		  }
    break;

  case 180:
#line 1306 "lev_comp.y"
    {
			switch((yyvsp[(8) - (8)].i)) {
			case -1: tmplreg[nlreg]->rtype = LR_TELE; break;
			case 0: tmplreg[nlreg]->rtype = LR_DOWNTELE; break;
			case 1: tmplreg[nlreg]->rtype = LR_UPTELE; break;
			}
			tmplreg[nlreg]->rname.str = 0;
			nlreg++;
			if (nlreg >= MAX_OF_TYPE) {
				yyerror("Too many levregions in mazepart!");
				nlreg--;
			}
		  }
    break;

  case 181:
#line 1322 "lev_comp.y"
    {
			tmplreg[nlreg] = New(lev_region);
			tmplreg[nlreg]->in_islev = (yyvsp[(3) - (3)].i);
			tmplreg[nlreg]->inarea.x1 = current_region.x1;
			tmplreg[nlreg]->inarea.y1 = current_region.y1;
			tmplreg[nlreg]->inarea.x2 = current_region.x2;
			tmplreg[nlreg]->inarea.y2 = current_region.y2;
		  }
    break;

  case 182:
#line 1331 "lev_comp.y"
    {
			tmplreg[nlreg]->del_islev = (yyvsp[(6) - (6)].i);
			tmplreg[nlreg]->delarea.x1 = current_region.x1;
			tmplreg[nlreg]->delarea.y1 = current_region.y1;
			tmplreg[nlreg]->delarea.x2 = current_region.x2;
			tmplreg[nlreg]->delarea.y2 = current_region.y2;
			tmplreg[nlreg]->rtype = LR_BRANCH;
			tmplreg[nlreg]->rname.str = 0;
			nlreg++;
			if (nlreg >= MAX_OF_TYPE) {
				yyerror("Too many levregions in mazepart!");
				nlreg--;
			}
		  }
    break;

  case 183:
#line 1348 "lev_comp.y"
    {
			(yyval.i) = -1;
		  }
    break;

  case 184:
#line 1352 "lev_comp.y"
    {
			(yyval.i) = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 185:
#line 1358 "lev_comp.y"
    {
			(yyval.i) = 0;
		  }
    break;

  case 186:
#line 1362 "lev_comp.y"
    {
/* This series of if statements is a hack for MSC 5.1.  It seems that its
   tiny little brain cannot compile if these are all one big if statement. */
			if ((yyvsp[(3) - (10)].i) <= 0 || (yyvsp[(3) - (10)].i) >= COLNO)
				yyerror("Region out of level range!");
			else if ((yyvsp[(5) - (10)].i) < 0 || (yyvsp[(5) - (10)].i) >= ROWNO)
				yyerror("Region out of level range!");
			else if ((yyvsp[(7) - (10)].i) <= 0 || (yyvsp[(7) - (10)].i) >= COLNO)
				yyerror("Region out of level range!");
			else if ((yyvsp[(9) - (10)].i) < 0 || (yyvsp[(9) - (10)].i) >= ROWNO)
				yyerror("Region out of level range!");
			current_region.x1 = (yyvsp[(3) - (10)].i);
			current_region.y1 = (yyvsp[(5) - (10)].i);
			current_region.x2 = (yyvsp[(7) - (10)].i);
			current_region.y2 = (yyvsp[(9) - (10)].i);
			(yyval.i) = 1;
		  }
    break;

  case 187:
#line 1382 "lev_comp.y"
    {
			tmpfountain[nfountain] = New(fountain);
			tmpfountain[nfountain]->x = current_coord.x;
			tmpfountain[nfountain]->y = current_coord.y;
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Fountain");
			nfountain++;
			if (nfountain >= MAX_OF_TYPE) {
			    yyerror("Too many fountains in room or mazepart!");
			    nfountain--;
			}
		  }
    break;

  case 188:
#line 1398 "lev_comp.y"
    {
			tmpsink[nsink] = New(sink);
			tmpsink[nsink]->x = current_coord.x;
			tmpsink[nsink]->y = current_coord.y;
			nsink++;
			if (nsink >= MAX_OF_TYPE) {
				yyerror("Too many sinks in room!");
				nsink--;
			}
		  }
    break;

  case 189:
#line 1411 "lev_comp.y"
    {
			tmppool[npool] = New(pool);
			tmppool[npool]->x = current_coord.x;
			tmppool[npool]->y = current_coord.y;
			npool++;
			if (npool >= MAX_OF_TYPE) {
				yyerror("Too many pools in room!");
				npool--;
			}
		  }
    break;

  case 190:
#line 1424 "lev_comp.y"
    {
			tmpdig[ndig] = New(digpos);
			tmpdig[ndig]->x1 = current_region.x1;
			tmpdig[ndig]->y1 = current_region.y1;
			tmpdig[ndig]->x2 = current_region.x2;
			tmpdig[ndig]->y2 = current_region.y2;
			ndig++;
			if (ndig >= MAX_OF_TYPE) {
				yyerror("Too many diggables in mazepart!");
				ndig--;
			}
		  }
    break;

  case 191:
#line 1439 "lev_comp.y"
    {
			tmppass[npass] = New(digpos);
			tmppass[npass]->x1 = current_region.x1;
			tmppass[npass]->y1 = current_region.y1;
			tmppass[npass]->x2 = current_region.x2;
			tmppass[npass]->y2 = current_region.y2;
			npass++;
			if (npass >= 32) {
				yyerror("Too many passwalls in mazepart!");
				npass--;
			}
		  }
    break;

  case 192:
#line 1454 "lev_comp.y"
    {
			tmpreg[nreg] = New(region);
			tmpreg[nreg]->x1 = current_region.x1;
			tmpreg[nreg]->y1 = current_region.y1;
			tmpreg[nreg]->x2 = current_region.x2;
			tmpreg[nreg]->y2 = current_region.y2;
			tmpreg[nreg]->rlit = (yyvsp[(5) - (8)].i);
			tmpreg[nreg]->rtype = (yyvsp[(7) - (8)].i);
			if((yyvsp[(8) - (8)].i) & 1) tmpreg[nreg]->rtype += MAXRTYPE+1;
			tmpreg[nreg]->rirreg = (((yyvsp[(8) - (8)].i) & 2) != 0);
			if(current_region.x1 > current_region.x2 ||
			   current_region.y1 > current_region.y2)
			   yyerror("Region start > end!");
			if(tmpreg[nreg]->rtype == VAULT &&
			   (tmpreg[nreg]->rirreg ||
			    (tmpreg[nreg]->x2 - tmpreg[nreg]->x1 != 1) ||
			    (tmpreg[nreg]->y2 - tmpreg[nreg]->y1 != 1)))
				yyerror("Vaults must be exactly 2x2!");
			if(want_warnings && !tmpreg[nreg]->rirreg &&
			   current_region.x1 > 0 && current_region.y1 > 0 &&
			   current_region.x2 < (int)max_x_map &&
			   current_region.y2 < (int)max_y_map) {
			    /* check for walls in the room */
			    char ebuf[60];
			    register int x, y, nrock = 0;

			    for(y=current_region.y1; y<=current_region.y2; y++)
				for(x=current_region.x1;
				    x<=current_region.x2; x++)
				    if(IS_ROCK(tmpmap[y][x]) ||
				       IS_DOOR(tmpmap[y][x])) nrock++;
			    if(nrock) {
				Sprintf(ebuf,
					"Rock in room (%02d,%02d,%02d,%02d)?!",
					current_region.x1, current_region.y1,
					current_region.x2, current_region.y2);
				yywarning(ebuf);
			    }
			    if (
		!IS_ROCK(tmpmap[current_region.y1-1][current_region.x1-1]) ||
		!IS_ROCK(tmpmap[current_region.y2+1][current_region.x1-1]) ||
		!IS_ROCK(tmpmap[current_region.y1-1][current_region.x2+1]) ||
		!IS_ROCK(tmpmap[current_region.y2+1][current_region.x2+1])) {
				Sprintf(ebuf,
				"NonRock edge in room (%02d,%02d,%02d,%02d)?!",
					current_region.x1, current_region.y1,
					current_region.x2, current_region.y2);
				yywarning(ebuf);
			    }
			} else if(tmpreg[nreg]->rirreg &&
		!IS_ROOM(tmpmap[current_region.y1][current_region.x1])) {
			    char ebuf[60];
			    Sprintf(ebuf,
				    "Rock in irregular room (%02d,%02d)?!",
				    current_region.x1, current_region.y1);
			    yyerror(ebuf);
			}
			nreg++;
			if (nreg >= MAX_OF_TYPE) {
				yyerror("Too many regions in mazepart!");
				nreg--;
			}
		  }
    break;

  case 193:
#line 1520 "lev_comp.y"
    {
			tmpaltar[naltar] = New(altar);
			tmpaltar[naltar]->x = current_coord.x;
			tmpaltar[naltar]->y = current_coord.y;
			tmpaltar[naltar]->align = (yyvsp[(5) - (7)].i);
			tmpaltar[naltar]->shrine = (yyvsp[(7) - (7)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Altar");
			naltar++;
			if (naltar >= MAX_OF_TYPE) {
				yyerror("Too many altars in room or mazepart!");
				naltar--;
			}
		  }
    break;

  case 194:
#line 1538 "lev_comp.y"
    {
			tmpgold[ngold] = New(gold);
			tmpgold[ngold]->x = current_coord.x;
			tmpgold[ngold]->y = current_coord.y;
			tmpgold[ngold]->amount = (yyvsp[(3) - (5)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Gold");
			ngold++;
			if (ngold >= MAX_OF_TYPE) {
				yyerror("Too many golds in room or mazepart!");
				ngold--;
			}
		  }
    break;

  case 195:
#line 1555 "lev_comp.y"
    {
			tmpengraving[nengraving] = New(engraving);
			tmpengraving[nengraving]->x = current_coord.x;
			tmpengraving[nengraving]->y = current_coord.y;
			tmpengraving[nengraving]->engr.str = (yyvsp[(7) - (7)].map);
			tmpengraving[nengraving]->etype = (yyvsp[(5) - (7)].i);
			if (!in_room)
			    check_coord(current_coord.x, current_coord.y,
					"Engraving");
			nengraving++;
			if (nengraving >= MAX_OF_TYPE) {
			    yyerror("Too many engravings in room or mazepart!");
			    nengraving--;
			}
		  }
    break;

  case 197:
#line 1574 "lev_comp.y"
    {
			(yyval.i) = - MAX_REGISTERS - 1;
		  }
    break;

  case 200:
#line 1582 "lev_comp.y"
    {
			(yyval.i) = - MAX_REGISTERS - 1;
		  }
    break;

  case 203:
#line 1590 "lev_comp.y"
    {
			(yyval.map) = (char *) 0;
		  }
    break;

  case 205:
#line 1597 "lev_comp.y"
    {
			(yyval.map) = (char *) 0;
		  }
    break;

  case 206:
#line 1603 "lev_comp.y"
    {
			int token = get_trap_type((yyvsp[(1) - (1)].map));
			if (token == ERR)
				yyerror("Unknown trap type!");
			(yyval.i) = token;
			Free((yyvsp[(1) - (1)].map));
		  }
    break;

  case 208:
#line 1614 "lev_comp.y"
    {
			int token = get_room_type((yyvsp[(1) - (1)].map));
			if (token == ERR) {
				yywarning("Unknown room type!  Making ordinary room...");
				(yyval.i) = OROOM;
			} else
				(yyval.i) = token;
			Free((yyvsp[(1) - (1)].map));
		  }
    break;

  case 210:
#line 1627 "lev_comp.y"
    {
			(yyval.i) = 0;
		  }
    break;

  case 211:
#line 1631 "lev_comp.y"
    {
			(yyval.i) = (yyvsp[(2) - (2)].i);
		  }
    break;

  case 212:
#line 1635 "lev_comp.y"
    {
			(yyval.i) = (yyvsp[(2) - (4)].i) + ((yyvsp[(4) - (4)].i) << 1);
		  }
    break;

  case 216:
#line 1644 "lev_comp.y"
    {
			current_coord.x = current_coord.y = -MAX_REGISTERS-2;
		  }
    break;

  case 223:
#line 1660 "lev_comp.y"
    {
			(yyval.i) = - MAX_REGISTERS - 1;
		  }
    break;

  case 226:
#line 1670 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (4)].i) >= MAX_REGISTERS )
				yyerror("Register Index overflow!");
			else {
				current_coord.x = -1;
				current_coord.y = - (yyvsp[(3) - (4)].i) - 1;
			}
		  }
    break;

  case 227:
#line 1679 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (7)].i) >= MAX_REGISTERS || (yyvsp[(6) - (7)].i) >= MAX_REGISTERS )
				yyerror("Register Index overflow!");
			else {
				current_coord.x = - (yyvsp[(3) - (7)].i) - 1;
				current_coord.y = - (yyvsp[(6) - (7)].i) - 1;
			}
		  }
    break;

  case 228:
#line 1690 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (4)].i) < 0 || (yyvsp[(3) - (4)].i) >= nrndlreg )
				yyerror("Register Index overflow!");
			else {
				current_coord.x = -MAX_REGISTERS-1;
				current_coord.y = - (yyvsp[(3) - (4)].i) - 1;
			}
		  }
    break;

  case 229:
#line 1701 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (4)].i) >= MAX_REGISTERS )
				yyerror("Register Index overflow!");
			else
				(yyval.i) = - (yyvsp[(3) - (4)].i) - 1;
		  }
    break;

  case 230:
#line 1710 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (4)].i) >= MAX_REGISTERS )
				yyerror("Register Index overflow!");
			else
				(yyval.i) = - (yyvsp[(3) - (4)].i) - 1;
		  }
    break;

  case 231:
#line 1719 "lev_comp.y"
    {
			if ( (yyvsp[(3) - (4)].i) >= 3 )
				yyerror("Register Index overflow!");
			else
				(yyval.i) = - (yyvsp[(3) - (4)].i) - 1;
		  }
    break;

  case 233:
#line 1729 "lev_comp.y"
    {
			current_coord.x = (char)-1;
			current_coord.y = (char)-1;
		  }
    break;

  case 234:
#line 1736 "lev_comp.y"
    {
			if (check_monster_char((char) (yyvsp[(1) - (1)].i)))
				(yyval.i) = (yyvsp[(1) - (1)].i) ;
			else {
				yyerror("Unknown monster class!");
				(yyval.i) = ERR;
			}
		  }
    break;

  case 235:
#line 1747 "lev_comp.y"
    {
			char c = (yyvsp[(1) - (1)].i);
			if (check_object_char(c))
				(yyval.i) = c;
			else {
				yyerror("Unknown char class!");
				(yyval.i) = ERR;
			}
		  }
    break;

  case 239:
#line 1766 "lev_comp.y"
    {
			(yyval.i) = 100;	/* default is 100% */
		  }
    break;

  case 240:
#line 1770 "lev_comp.y"
    {
			if ((yyvsp[(1) - (1)].i) <= 0 || (yyvsp[(1) - (1)].i) > 100)
			    yyerror("Expected percentile chance.");
			(yyval.i) = (yyvsp[(1) - (1)].i);
		  }
    break;

  case 243:
#line 1782 "lev_comp.y"
    {
			if (!in_room && !init_lev.init_present &&
			    ((yyvsp[(2) - (5)].i) < 0 || (yyvsp[(2) - (5)].i) > (int)max_x_map ||
			     (yyvsp[(4) - (5)].i) < 0 || (yyvsp[(4) - (5)].i) > (int)max_y_map))
			    yyerror("Coordinates out of map range!");
			current_coord.x = (yyvsp[(2) - (5)].i);
			current_coord.y = (yyvsp[(4) - (5)].i);
		  }
    break;

  case 244:
#line 1793 "lev_comp.y"
    {
/* This series of if statements is a hack for MSC 5.1.  It seems that its
   tiny little brain cannot compile if these are all one big if statement. */
			if ((yyvsp[(2) - (9)].i) < 0 || (yyvsp[(2) - (9)].i) > (int)max_x_map)
				yyerror("Region out of map range!");
			else if ((yyvsp[(4) - (9)].i) < 0 || (yyvsp[(4) - (9)].i) > (int)max_y_map)
				yyerror("Region out of map range!");
			else if ((yyvsp[(6) - (9)].i) < 0 || (yyvsp[(6) - (9)].i) > (int)max_x_map)
				yyerror("Region out of map range!");
			else if ((yyvsp[(8) - (9)].i) < 0 || (yyvsp[(8) - (9)].i) > (int)max_y_map)
				yyerror("Region out of map range!");
			current_region.x1 = (yyvsp[(2) - (9)].i);
			current_region.y1 = (yyvsp[(4) - (9)].i);
			current_region.x2 = (yyvsp[(6) - (9)].i);
			current_region.y2 = (yyvsp[(8) - (9)].i);
		  }
    break;


/* Line 1267 of yacc.c.  */
#line 3793 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 1811 "lev_comp.y"


/*lev_comp.y*/

