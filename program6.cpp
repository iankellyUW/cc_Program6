//   Ian Kelly
//   COSC 4785  Fall 2021
//   Program06.cpp
//   2021-12-04
#include <iostream>
#include <iomanip>
#include <string>
#include <queue>
#include "nodes.hpp"
#include "program6.tab.hpp"
#include "symboltable.hpp"
#include "typetable.hpp"
#include <FlexLexer.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::queue;

string TOKEN;
string value;
string id;
string idPrev;
queue<string> idQueue;
int first_column = 1;
int next_column = 1;
int errorCount = 0;

yyFlexLexer scanner;
Node *tree;

TypeTable types;
SymbolTable* table = new SymbolTable();
SymbolTable* curTable = table;

int main()
{
    tree = 0;
    //   any   n e e d e d   i n i t i a l i z a t i o n   c o d e
    yyparse();
    types.dump(0);
    // more   c o d e   i f   n e e d e d
    
    return 0;
}