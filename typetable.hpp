/*
 * $Author: Ian Kelly     $
 * $Date: 2021-12-04      $
 * $Course: COSC 4785     $
 * $File: typetable.hpp   $
 */
#ifndef TYPETABLE_HPP
#define TYPETABLE_HPP

#include <map>
#include <string>
#include "symboltable.hpp"
using namespace std;

class TypeTable
{
public:
    TypeTable();
    ~TypeTable();

    int addType(string entry, TypeEntry* type);
    TypeEntry* findType(string type);
    void dump(int spacing);

private:
    map<string, TypeEntry*> ttTable;
};

#endif