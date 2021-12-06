
/*
 * $Author: Ian Kelly     $
 * $Date: 2021-12-04      $
 * $Course: COSC 4785     $
 * $File: symboltable.hpp $
 */
#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP

#include <map>
#include <vector>
#include <string>

using std::string;
using std::map;
using std::vector;

class SymbolTable;

struct TypeEntry
{
    TypeEntry(string nm = "", string ty = "", string su = "", SymbolTable* et = nullptr);
    ~TypeEntry();

    bool isBlock;
    string name;
    string type;
    string supertype;
    SymbolTable* etable;
    

    void print(int spacing);
};

class SymbolTable
{
public:
    string name = "";
    string type = "";
 
    SymbolTable(SymbolTable* parentPtr = nullptr, string nm = "", string tp = "");
    ~SymbolTable();

    SymbolTable* getParent();
    TypeEntry* lookup(string ident);
    int insert(string ident,TypeEntry* type);
    void dump(int spacing);
    map<string, TypeEntry*> symtable;
    vector<string> paramtypes;
private:
    SymbolTable* parent;
};

#endif