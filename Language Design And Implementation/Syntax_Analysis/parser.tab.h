/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_EOF = 0,
    TOKEN_INTEGERCONST = 258,
    TOKEN_FLOATCONST = 259,
    TOKEN_CHARACTERCONST = 260,
    TOKEN_CHARROWCONST = 261,
    TOKEN_IDENTIFIER = 262,
    TOKEN_OCTACONST = 263,
    TOKEN_BINARYCONST = 264,
    TOKEN_HEXACONST = 265,
    TOKEN_TRUE = 266,
    TOKEN_FALSE = 267,
    TOKEN_INTEGER = 268,
    TOKEN_FLOAT = 269,
    TOKEN_CHARACTER = 270,
    TOKEN_CHARROW = 271,
    TOKEN_BOOL = 272,
    TOKEN_VOID = 273,
    TOKEN_WHETHER = 274,
    TOKEN_DURING = 275,
    TOKEN_DO = 276,
    TOKEN_OTHERWISE = 277,
    TOKEN_RETURN = 278,
    TOKEN_HEADFUNC = 279,
    TOKEN_CLASS = 280,
    TOKEN_READ = 281,
    TOKEN_WRITE = 282,
    TOKEN_WHITESPACES = 283,
    TOKEN_WORD = 284,
    TOKEN_AND = 285,
    TOKEN_OR = 286,
    TOKEN_NAND = 287,
    TOKEN_NOR = 288,
    TOKEN_XOR = 289,
    TOKEN_XNOR = 290,
    TOKEN_MODMULDI = 291,
    TOKEN_ADDSUB = 292,
    TOKEN_POWER = 293,
    TOKEN_EQUNOT = 294,
    TOKEN_GREATLESSEQU = 295,
    TOKEN_NOT = 296,
    TOKEN_INCRDECR = 297,
    TOKEN_LEFTPARENTHESIS = 298,
    TOKEN_RIGHTPARENTHESIS = 299,
    TOKEN_SEMICOLON = 300,
    TOKEN_COMMA = 301,
    TOKEN_EQUAL = 302,
    TOKEN_LEFTBRACE = 303,
    TOKEN_RIGHTBRACE = 304,
    TOKEN_LEFTBRACKET = 305,
    TOKEN_RIGHTBRACKET = 306,
    TOKEN_AMPERSAND = 307,
    NEGATIVE = 308,
    OTHERWISE_DANGLING = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "parser.y" /* yacc.c:1909  */

    int intNum;
	float floatNum;
	char aCharacter;
	char *charrowVar;
    _Bool trueVar;
    _Bool falseVar;

#line 119 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
