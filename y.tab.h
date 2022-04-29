/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PLUS = 258,
     MINUS = 259,
     MUL = 260,
     DIV = 261,
     EQ = 262,
     NOTEQUAL = 263,
     GE = 264,
     GT = 265,
     LE = 266,
     LT = 267,
     ASSIGN = 268,
     GRID = 269,
     START = 270,
     CONF = 271,
     NOT = 272,
     SCORE = 273,
     LINE1 = 274,
     LINE2 = 275,
     LINE3 = 276,
     LINE4 = 277,
     DELETE = 278,
     CLOCKWISE = 279,
     ANTICLOCKWISE = 280,
     PAUSE = 281,
     UP = 282,
     ENDIF = 283,
     IF = 284,
     THEN = 285,
     DO = 286,
     WHILE = 287,
     TRUE = 288,
     FALSE = 289,
     EOP = 290,
     T = 291,
     L = 292,
     ID = 293,
     NUM = 294,
     KEY = 295,
     SHAPE = 296,
     AND = 297,
     OR = 298,
     ENDWHILE = 299,
     TICK = 300,
     ENDTICK = 301,
     PAUSE_BOOL = 302,
     ELSE = 303,
     LOST = 304,
     WIN = 305,
     RIGHT = 306,
     DOWN = 307,
     LEFT = 308,
     TIME = 309,
     INIT = 310
   };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
#define MUL 260
#define DIV 261
#define EQ 262
#define NOTEQUAL 263
#define GE 264
#define GT 265
#define LE 266
#define LT 267
#define ASSIGN 268
#define GRID 269
#define START 270
#define CONF 271
#define NOT 272
#define SCORE 273
#define LINE1 274
#define LINE2 275
#define LINE3 276
#define LINE4 277
#define DELETE 278
#define CLOCKWISE 279
#define ANTICLOCKWISE 280
#define PAUSE 281
#define UP 282
#define ENDIF 283
#define IF 284
#define THEN 285
#define DO 286
#define WHILE 287
#define TRUE 288
#define FALSE 289
#define EOP 290
#define T 291
#define L 292
#define ID 293
#define NUM 294
#define KEY 295
#define SHAPE 296
#define AND 297
#define OR 298
#define ENDWHILE 299
#define TICK 300
#define ENDTICK 301
#define PAUSE_BOOL 302
#define ELSE 303
#define LOST 304
#define WIN 305
#define RIGHT 306
#define DOWN 307
#define LEFT 308
#define TIME 309
#define INIT 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "tetris.y"
{
	int data_type;
	char var_name[30];
}
/* Line 1529 of yacc.c.  */
#line 164 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

