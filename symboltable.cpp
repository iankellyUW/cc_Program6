/*
 * $Author: Ian Kelly     $
 * $Date: 2021-12-04      $
 * $Course: COSC 4785     $
 * $File: symboltable.cpp $
 */
#include "symboltable.hpp"
#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

TypeEntry::TypeEntry(string nm, string ty, string su, SymbolTable *et)
{
    name = nm;
    type = ty;
    supertype = su;
    etable = et;
    isBlock = false;
};

TypeEntry::~TypeEntry(){};

void TypeEntry::print(int spacing)
{
    if (isBlock == false)
    {
        for (int i = 0; i < spacing; i++)
        {
            cout << "  ";
        }
        if (name != "")
        {
            cout << name << " ";
        }
        cout << type;
        if (supertype != "")
        {
            cout << " " << supertype;
        }
        if (supertype == "constructor_type" || supertype == "method_type")
        {
            if (!etable->paramtypes.empty())
            {
                cout << " <-";
                for (auto vc : etable->paramtypes)
                {
                    cout << " " << vc;
                }
            }
            else
            {
                cout << " <- void";
            }
        }
        cout << endl;
    }
    if (etable != nullptr)
    {
        for (auto it : etable->symtable)
        {
            it.second->print(spacing + 1);
        }
    }
};

SymbolTable::SymbolTable(SymbolTable *parentPtr, string nm, string tp)
{
    parent = parentPtr;
    name = nm;
    type = tp;
};

TypeEntry *SymbolTable::lookup(string ident)
// still need to handle a.b.c
{
    if (symtable.find(ident) == symtable.end())
    {
        if (parent != nullptr)
        {
            return parent->lookup(ident);
        }
        return nullptr;
    }
    return symtable[ident];
};

int SymbolTable::insert(string ident, TypeEntry *type)
{
    // check if string is already created in local scope
    if (symtable.find(ident) == symtable.end())
    {
        symtable.insert({ident, type});
        return 0;
    }
    return -1;
};

SymbolTable *SymbolTable::getParent()
{
    return parent;
};

void SymbolTable::dump(int spacing)
{
    for (auto it : symtable)
    {
        it.second->print(spacing);
    }
};
