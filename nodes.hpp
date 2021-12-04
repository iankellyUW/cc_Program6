/*
 * $Author: Ian Kelly $
 * $Date: 2021-12-04  $
 * $Course: COSC 4785 $
 * $File: nodes.hpp   $
*/

#ifndef NODES_HPP
#define NODES_HPP
#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::endl;
using std::ostream;
using std::string;

class Node
{
public:
    // set the pointers to 0 C++ is trying to get away from NULL
    Node(Node *lf = 0, Node *rt = 0);
    virtual ~Node();
    int getint() const;
    double getdbl() const;
    string getstring() const;
    void setval(const char *v);
    void setval(const string s);
    void setval(int i);
    void setval(double d);
    void setID(const string id);
    void reset();
    void setleft(Node *p);
    void setright(Node *p);
    void setnext(Node *p);
    Node *getleft();
    Node *getright();
    Node *getnext();
    vector<string> getvec();
    void setvec(vector<string> param);
    void addvec(string param);
    virtual void print(ostream *out = 0);

protected:
    int myline;
    int mycol;
    int myVal;
    int ival;
    int myType;
    double dval;
    string sval;
    string idPrev;
    string tab;
    string myId;
    string myId2;
    string myNum;
    Node *left, *right;
    Node *next;
    vector<string> myVec;
};

class nodeId: public Node
{
public:
    nodeId(string id = "");
    string getID();
    virtual void print(ostream *out = 0);
};

class nodeNum: public Node
{
public:
    nodeNum(string id = "");

    virtual void print(ostream *out = 0);
};

class nodeNewExp: public Node
{
public:
    nodeNewExp(Node *lf = 0,Node *rt = 0, int type = 0, string id = "");

    virtual void print(ostream *out = 0);
};

class nodeExpNameNumNull: public Node
{
public:
    nodeExpNameNumNull(Node *lf = 0,Node *rt = 0, int type = 0,string val = "");

    virtual void print(ostream *out = 0);
};


class nodeExpArgl: public Node
{
public:
    nodeExpArgl(Node *lf = 0,Node *rt = 0, int type = 0, string id = "");

    virtual void print(ostream *out = 0);
};

class nodeConSt: public Node
{
public:
    nodeConSt(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeArgl : public Node
{
public:
    nodeArgl(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeName : public Node
{
public:
    nodeName(Node *lf = 0,Node *rt = 0, int type = 0, string ID1 = "", string ID2 = "");

    virtual void print(ostream *out = 0);
};

class nodeState : public Node
{
public:
    nodeState(Node *lf = 0,Node *rt = 0, int type = 0, string ID = "");

    virtual void print(ostream *out = 0);
};

class nodeStats : public Node
{
public:
    nodeStats(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeBlock : public Node
{
public:
    nodeBlock(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeParam : public Node
{
public:
    nodeParam(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeParams : public Node
{
public:
    nodeParams(Node *lf = 0, Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeType : public Node
{
public:
    nodeType(Node *lf = 0,Node *rt= 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeVard : public Node
{
public:
    nodeVard(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeConst : public Node
{
public:
    nodeConst(Node *lf = 0,Node *rt = 0, string ID = "");

    virtual void print(ostream *out = 0);
};

class nodeMeth : public Node
{
public:
    nodeMeth(Node *lf = 0,Node *rt = 0, string ID = "", string ID2 = "", int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeVards : public Node
{
public:
    nodeVards(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeConsts : public Node
{
public:
    nodeConsts(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeMeths: public Node
{
public:
    nodeMeths(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeClassDec : public Node
{
public:
    nodeClassDec(Node *lf = 0, Node *rt = 0);

    virtual void print(ostream *out = 0);
};

class nodeClassBody : public Node
{
public:
    nodeClassBody(Node *lf = 0,Node *rt = 0, int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeBin : public Node
{
public:
    nodeBin(Node *lf = 0,Node *rt = 0,int type = 0);

    virtual void print(ostream *out = 0);
};

class nodeMinus : public Node
{
public:
    nodeMinus(Node *lf = 0, Node *rt = 0);

    virtual void print(ostream *out = 0);
};

class nodePlus : public Node
{
public:
    nodePlus(Node *lf = 0, Node *rt = 0);

    virtual void print(ostream *out = 0);
};


class nodeNot : public Node
{
public:
    nodeNot(Node *lf = 0, Node *rt = 0);

    virtual void print(ostream *out = 0);
};

class nodeIdMulId : public Node
{
public:
    nodeIdMulId(Node *lf = 0, Node *rt = 0);

    virtual void print(ostream *out = 0);
};


class nodeRead : public Node
{
    public:
        nodeRead();

        virtual void print(ostream *out = 0);
};

class newNode : public Node
{
    public:
        newNode(Node *lf = 0, Node *rt = 0);

        virtual void print(ostream *out = 0);
};

class nodeBrackExp : public Node
{
    public:
        nodeBrackExp(Node *lf = 0, Node *rt = 0);

        virtual void print(ostream *out = 0);
};

class nodeMultBrack : public Node
{
    public:
        nodeMultBrack();

        virtual void print(ostream *out = 0);
};

class nodeMultBracks : public Node
{
    public:
        nodeMultBracks(Node *lf = 0, Node *rt = 0);

        virtual void print(ostream *out = 0);
};

class nodeInt : public Node
{
    public:
        nodeInt();

        virtual void print(ostream *out = 0);
};

class nodeParExp : public Node
{
public:
    nodeParExp(Node *lf = 0, Node *rt = 0);
    virtual void print(ostream *out = 0);
};

class nodeNameParen : public Node
{
public:
    nodeNameParen(Node *lf = 0, Node *rt = 0);
    virtual void print(ostream *out = 0);
};

class nodeExpExp : public Node
{
public:
    nodeExpExp(Node *lf = 0, Node *rt = 0);
    virtual void print(ostream *out = 0);
};

class nodePar : public Node
{
public:
    nodePar(Node *lf = 0, Node *rt = 0);
    virtual void print(ostream *out = 0);
};

#endif
