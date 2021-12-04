/*
 * $Author: Ian Kelly $
 * $Date: 2021-12-04  $
 * $Course: COSC 4785 $
 * $File: nodes.cpp   $
 */

// Just the "node" class

#include <stdio.h>
#include "nodes.hpp"

using std::cout;

Node::Node(Node *lf, Node *rt) : ival(0), dval(0.0), left(lf), right(rt), next(0)
{
  tab = "";
  reset();
  myVec.push_back(" ");
  myVec.pop_back();
}

Node::~Node()
{
  if (left)
    delete left;
  if (right)
    delete right;
}

int Node::getint() const
{
  return ival;
}
double Node::getdbl() const
{
  return dval;
}
string Node::getstring() const
{
  return sval;
}
void Node::setval(const char *v)
{
  sval = v;
}
void Node::setval(const string s)
{
  sval = s;
}
void Node::setval(int i)
{
  ival = i;
}
void Node::setval(double d)
{
  dval = d;
}

void Node::setID(string id)
{
  idPrev = id;
}

void Node::reset()
{
  myline = mycol = 1;
  sval.clear();
}

void Node::setleft(Node *p)
{
  left = p;
  return;
}

void Node::setright(Node *p)
{
  right = p;
  return;
}

void Node::setnext(Node *p)
{
  if (next == 0)
    next = p;
  else
    next->setnext(p);
  return;
}

Node *Node::getleft()
{
  return left;
}

Node *Node::getright()
{
  return right;
}

Node *Node::getnext()
{
  return next;
}

vector<string> Node::getvec()
{
  return myVec;
}

void Node::addvec(string param)
{
  myVec.push_back(param);
}

void Node::setvec(vector<string> param)
{
  myVec = param;
}

void Node::print(ostream *out)
{

  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeId::nodeId(string ID) : Node()
{
  tab += "    ";
  myId = ID;
}

string nodeId::getID()
{
  return myId;
}

void nodeId::print(ostream *out)
{
  cout << tab << "ID --> " << myId << endl;

  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeNum::nodeNum(string ID) : Node()
{
  tab += "    ";
  myId = ID;
}

void nodeNum::print(ostream *out)
{
  cout << tab << "NUM --> " << myId << endl;

  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeNewExp::nodeNewExp(Node *lf, Node *rt, int type, string ID) : Node(lf, rt)
{
  tab += "    ";
  myType = type;
  myId = ID;
}

void nodeNewExp::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<newexpression> --> new " << myId << " ( <arglist> )" << endl;
    break;
  case 1:
    cout << tab << "<newexpression> --> new <type>" << endl;
    break;
  case 2:
    cout << tab << "<newexpression> --> new <type> [ <expression> ]" << endl;
  case 3:
    cout << tab << "<newexpression> --> new " << myId << endl;
    break;
  case 4:
    cout << tab << "<newexpression> --> new " << myId << " [ <expression> ]" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeExpNameNumNull::nodeExpNameNumNull(Node *lf, Node *rt, int type,string val) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
  myNum = val;
}

void nodeExpNameNumNull::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<expression> --> <name>" << endl;
    break;
  case 1:
    cout << tab << "<expression> --> NUM" << endl;
    break;
  case 2:
    cout << tab << "<expression> --> NULL" << endl;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeExpArgl::nodeExpArgl(Node *lf, Node *rt, int type, string ID) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
  myId = ID;
}

void nodeExpArgl::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<expression> --> <name> ( <arglist> )" << endl;
    break;
  case 1:
    cout << tab << "<expression> --> " << myId << " ( <arglist> )" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeConSt::nodeConSt(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeConSt::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<conditionalstatement> --> if ( <expression> ) <statement>" << endl;
    break;
  case 1:
    cout << tab << "<conditionalstatement> --> if ( <expression> ) <statement> else <statement>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeArgl::nodeArgl(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeArgl::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<arglist> --> <expression>" << endl;
    break;
  case 1:
    cout << tab << "<arglist> --> <arglist> , <expression>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeName::nodeName(Node *lf, Node *rt, int type, string ID1, string ID2) : Node(lf, rt)
{
  tab += "        ";
  myType = type;
  myId = ID1;
  myId2 = ID2;
}

void nodeName::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<name> --> this" << endl;
    break;
  case 1:
    cout << tab << "<name> --> " << myId << endl;
    break;
  case 2:
    cout << tab << "<name> --> <name> . " << myId << endl;
    break;
  case 3:
    cout << tab << "<name> --> " << myId << " . " << myId2 << endl;
    break;
  case 4:
    cout << tab << "<name> --> [ <expression> ]" << endl;
    break;
  case 5:
    cout << tab << "<name> --> " << myId << " [ <expression> ]" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeState::nodeState(Node *lf, Node *rt, int type, string ID) : Node(lf, rt)
{
  tab += "        ";
  myType = type;
  myId = ID;
}

void nodeState::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<statement> --> ;" << endl;
    break;
  case 1:
    cout << tab << "<statement> --> <name> = <expression>;" << endl;
    break;
  case 2:
    cout << tab << "<statement> --> " << myId << " = <expression>;" << endl;
    break;
  case 3:
    cout << tab << "<statement> --> <name> ( <arglist> )," << endl;
    break;
  case 4:
    cout << tab << "<statement> --> " << myId << " ( <arglist> )," << endl;
    break;
  case 5:
    cout << tab << "<statement> --> print ( <arglist> )," << endl;
    break;
  case 6:
    cout << tab << "<statement> --> <conditionalstatement>" << endl;
    break;
  case 7:
    cout << tab << "<statement> --> while ( <expression> ) <statement>," << endl;
    break;
  case 8:
    cout << tab << "<statement> --> return <expression>" << endl;
    break;
  case 9:
    cout << tab << "<statement> --> return" << endl;
    break;
  case 10:
    cout << tab << "<statement> --> <block>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeStats::nodeStats(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "        ";
  myType = type;
}

void nodeStats::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<statements> --> <statement>" << endl;
    break;
  case 1:
    cout << tab << "<statements> --> <statements> <statement>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeBlock::nodeBlock(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "            ";
  myType = type;
}

void nodeBlock::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<block> --> { }" << endl;
    break;
  case 1:
    cout << tab << "<block> --> { <vardecs> <statements> }" << endl;
    break;
  case 2:
    cout << tab << "<block> --> { <vardecs> }" << endl;
    break;
  case 3:
    cout << tab << "<block> --> { <statements> }" << endl;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeParam::nodeParam(Node *lf, Node *rt, int type) : Node(lf,rt)
{
  tab += "      ";
  myType = type;
}

void nodeParam::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<parameter> --> <type> ID" << endl;
    break;
  case 1:
    cout << tab << "<parameter> --> ID ID" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeParams::nodeParams(Node *lf, Node *rt, int type) : Node(lf)
{
  tab += "      ";
  myType = type;
}

void nodeParams::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<parameterlist> --> <parameter>" << endl;
    break;
  case 1:
    cout << tab << "<parameterlist> --> <parameterlist> , <parameter> " << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeType::nodeType(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeType::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<type> --> int" << endl;
    break;
  case 1:
    cout << tab << "<type> --> <multibrackets>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeVard::nodeVard(Node *lf,Node *rt, int type) : Node(lf,rt)
{
  tab += "      ";
  myType = type;
}

void nodeVard::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<vardeclaration> --> <type> ID;" << endl;
    break;
  case 1:
    cout << tab << "<vardeclaration> --> ID ID;" << endl;
    break;
  default:
    break;
  }

  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeConst::nodeConst(Node *lf, Node *rt, string ID) : Node(lf, rt)
{
  tab += "         ";
  myId = ID;
}

void nodeConst::print(ostream *out)
{
  cout << tab << "<constructordeclaration> --> ID ( <parameterlist> ) <block>" << endl;
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeMeth::nodeMeth(Node *lf, Node *rt, string ID, string ID2, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
  myId = ID;
  myId2 = ID2;
}

void nodeMeth::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<methoddeclaration> --> <type> " << myId << " ( <parameterlist> ) <block>" << endl;
    break;
  case 1:
    cout << tab << "<methoddeclaration> --> void " << myId << " ( <parameterlist> ) <block>" << endl;
    break;
  case 2:
    cout << tab << "<methoddeclaration> --> " << myId << " " << myId2 << " ( <parameterlist> ) <block>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeVards::nodeVards(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeVards::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<vardecs> --> <vardeclaration>" << endl;
    break;
  case 1:
    cout << (tab += "  ") << "<vardecs> --> <vardecs> <vardeclaration>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeConsts::nodeConsts(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeConsts::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<constdecs> --> <constructordeclaration>" << endl;
    break;
  case 1:
    cout << (tab += "  ") << "<constdecs> --> <constdecs> <constructordeclaration>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeMeths::nodeMeths(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "      ";
  myType = type;
}

void nodeMeths::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<methdecs> --> <methoddeclaration>" << endl;
    break;
  case 1:
    cout << (tab += "  ") << "<methdecs> --> <methdecs> <methoddeclaration>" << endl;
    break;
  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeClassBody::nodeClassBody(Node *lf, Node *rt, int type) : Node(rt, lf)
{
  myType = type;
  tab += "    ";
}

void nodeClassBody::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<classbody> --> { }" << endl;
    break;
  case 1:
    cout << tab << "<classbody> --> { <vardecs> <constdecs> <methdecs> }" << endl;
    break;
  case 2:
    cout << tab << "<classbody> --> { <vardecs> <constdecs> }" << endl;
    break;
  case 3:
    cout << tab << "<classbody> --> { <vardecs> <methdecs> }" << endl;
    break;
  case 4:
    cout << tab << "<classbody> --> { <constdecs> <methdecs> }" << endl;
    break;
  case 5:
    cout << tab << "<classbody> --> { <vardecs> }" << endl;
    break;
  case 6:
    cout << tab << "<classbody> --> { <constdecs> }" << endl;
    break;
  case 7:
    cout << tab << "<classbody> --> { <methdecs> }" << endl;
    break;
  default:
    break;
  };
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeClassDec::nodeClassDec(Node *lf,Node *rt) : Node(lf,rt)
{
  tab += "  ";
}

void nodeClassDec::print(ostream *out)
{
  cout << tab << "<classdec> --> class ID <classbody>" << endl;
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeMultBracks::nodeMultBracks(Node *lf,Node *rt) : Node(lf,rt)
{
  tab += "  ";
}

void nodeMultBracks::print(ostream *out)
{
  cout << tab << "<classdec> --> class ID <classbody>" << endl;
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

nodeMultBrack::nodeMultBrack() : Node() {}

void nodeMultBrack::print(ostream *out)
{
  *out << "[";
  *out << "]";
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// nodeBin for expressions
nodeBin::nodeBin(Node *lf, Node *rt, int type) : Node(lf, rt)
{
  tab += "  ";
  myType = type;
}

void nodeBin::print(ostream *out)
{
  switch (myType)
  {
  case 0:
    cout << tab << "<exp> + <exp>" << endl;
    break;
  case 1:
    cout << tab << "<exp> - <exp>" << endl;
    break;
  case 2:
    cout << tab << "<exp> * <exp>" << endl;
    break;
  case 3:
    cout << tab << "<exp> / <exp>" << endl;
    break;
  case 4:
    cout << tab << "<exp> || <exp>" << endl;
    break;
  case 5:
    cout << tab << "<exp> == <exp>" << endl;
    break;
  case 6:
    cout << tab << "<exp> != <exp>" << endl;
    break;
  case 7:
    cout << tab << "<exp> >= <exp>" << endl;
    break;
  case 8:
    cout << tab << "<exp> <= <exp>" << endl;
    break;
  case 9:
    cout << tab << "<exp> > <exp>" << endl;
    break;
  case 10:
    cout << tab << "<exp> < <exp>" << endl;
    break;
  case 11:
    cout << tab << "<exp> % <exp>" << endl;
    break;
  case 12:
    cout << tab << "<exp> && <exp>" << endl;
    break;
  case 13:
    cout << tab << "<exp> = <exp>" << endl;
    break;

  default:
    break;
  }
  if (left)
    left->print(out);
  *out << sval;
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// Now the nodeMinus subclass

nodeMinus::nodeMinus(Node *lf, Node *rt) : Node(lf, rt)
{
}

void nodeMinus::print(ostream *out)
{
  if (left)
  {
    *out << "-";
    left->print(out);
  }
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  //*out << endl;
  return;
}

// nodePlus subclass
nodePlus::nodePlus(Node *lf, Node *rt) : Node(lf, rt)
{
}

void nodePlus::print(ostream *out)
{
  if (left)
  {
    *out << "+";
    left->print(out);
  }
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  //*out << endl;
  return;
}

// nodeNot subclass
nodeNot::nodeNot(Node *lf, Node *rt) : Node(lf, rt)
{
}

void nodeNot::print(ostream *out)
{
  if (left)
  {
    *out << "!";
    left->print(out);
  }
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  //*out << endl;
  return;
}
// node nodeIdMulIdSem
nodeIdMulId::nodeIdMulId(Node *lf, Node *rt) : Node(lf, rt) {}

void nodeIdMulId::print(ostream *out)
{
  *out << idPrev;
  *out << sval;
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// nodeRead subclass
nodeRead::nodeRead()
{
  sval = "read()";
}

void nodeRead::print(ostream *out)
{
  *out << "read()";
  return;
}

// nodeInt subclass
nodeInt::nodeInt()
{
  ival = 1;
}

void nodeInt::print(ostream *out)
{
  *out << "int";
  return;
}


// nodes for NEW
newNode::newNode(Node *lf, Node *rt) : Node(lf, rt) {}

void newNode::print(ostream *out)
{
  *out << "new ";
  *out << sval;
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// node bracket expression subclass
nodeBrackExp::nodeBrackExp(Node *lf, Node *rt) : Node(lf, rt) {}

void nodeBrackExp::print(ostream *out)
{
  *out << sval;
  *out << "[";
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  *out << "]"; //<< endl;
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// Here is nodeParExp subclass

nodeParExp::nodeParExp(Node *lf, Node *rt) : Node(lf, rt) {}

void nodeParExp::print(ostream *out)
{
  *out << sval;
  *out << "(";
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  *out << ")"; //<< endl;
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}

// node name parens
nodeNameParen::nodeNameParen(Node *lf, Node *rt) : Node(lf, rt) {}

void nodeNameParen::print(ostream *out)
{
  *out << "()";
}

nodeExpExp::nodeExpExp(Node *lf, Node *rt) : Node(lf, rt) {}

void nodeExpExp::print(ostream *out)
{
  if (left)
    left->print(out);
  *out << "^";
  if (right)
    right->print(out);
  if (next)
  {
    *out << endl;
    next->print(out);
  }
}

nodePar::nodePar(Node *lf, Node *rt) : Node(lf, rt) {}

void nodePar::print(ostream *out)
{
  *out << "( <";
  if (left)
    left->print(out);
  if (right)
    right->print(out);
  *out << "> )"; //<< endl;
  if (next)
  {
    *out << endl;
    next->print(out);
  }
  return;
}