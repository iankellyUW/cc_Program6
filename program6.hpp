/*
 * $Author: Ian Kelly $
 * $Date: 2021-12-04  $
 * $Course: COSC 4785 $
 * $File: program6.hpp$
*/
#include <queue>
#include "typetable.hpp"
#include "symboltable.hpp"

using std::queue;
extern string value;
extern int first_column;
extern int next_column;
extern string TOKEN;
extern Node *tree;
extern yyFlexLexer scanner;
extern string id;
extern string idPrev;
extern string tempStr;
extern SymbolTable* table;
extern TypeTable types;