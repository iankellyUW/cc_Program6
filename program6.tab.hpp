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

#ifndef YY_YY_PROGRAM6_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM6_TAB_HPP_INCLUDED
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
    NUM = 258,
    RPAREN = 259,
    LPAREN = 260,
    LBRACK = 261,
    RBRACK = 262,
    LBRACE = 263,
    RBRACE = 264,
    NULLT = 265,
    READ = 266,
    NEW = 267,
    DOT = 268,
    THIS = 269,
    SEMI = 270,
    ID = 271,
    INT = 272,
    CLASS = 273,
    VOID = 274,
    COMMA = 275,
    PRINT = 276,
    WHILE = 277,
    RETURN = 278,
    IF = 279,
    ELSE = 280,
    PLUS = 281,
    MINUS = 282,
    TIMES = 283,
    DIV = 284,
    MOD = 285,
    AND = 286,
    OR = 287,
    NOT = 288,
    EQ = 289,
    NE = 290,
    LE = 291,
    GE = 292,
    LT = 293,
    GT = 294,
    NEG = 295,
    UPLUS = 296,
    EXP = 297,
    EQUAL = 298
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 67 "program6.ypp" /* yacc.c:1909  */

  Node *ttype;

#line 102 "program6.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM6_TAB_HPP_INCLUDED  */
