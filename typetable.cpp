/*
 * $Author: Ian Kelly     $
 * $Date: 2021-12-04      $
 * $Course: COSC 4785     $
 * $File: typetable.cpp   $
 */
#include "typetable.hpp"
#include "symboltable.hpp"
#include <iostream>
using std::cout;
using std::endl;

TypeTable::TypeTable(){
    addType("void", nullptr);
    addType("int", nullptr);
};

TypeTable::~TypeTable(){};

int TypeTable::addType(string entry, TypeEntry *type)
{
    if (ttTable.find(entry) == ttTable.end())
    {
        ttTable.insert({entry, type});
        return 0;
    } else {
        //cout << "entry: " << entry << " already exists." << endl;
    }
    return -1;
};

TypeEntry *TypeTable::findType(string type)
{
    // check if string is already created in local scope
    if (ttTable.find(type) == ttTable.end())
    {
        return nullptr;
    }
    return ttTable[type];
};

void TypeTable::dump(int spacing)
{
    for (auto it : ttTable)
    {
        if (it.second != nullptr)
        {
            it.second->print(spacing);
        }
    }
};