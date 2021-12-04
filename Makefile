# Makefile
#
# $Author: Ian Kelly $
# $Date: 2021-12-04  $
# $Course: COSC 4785 $

CXX=g++
CXXFLAGS=-ggdb -Wall -Wno-sign-compare
YACC=bison
YFLAGS=--report=state -W -d
LEX=flex
LEX=flex++
LFLAGS=--warn
SRC=program6.cpp program6.tab.cpp program6_lex.cpp nodes.cpp symboltable.cpp\
    typetable.cpp 
HDRS=program6.tab.hpp nodes.hpp symboltable.hpp typetable.hpp

.PHONY: clean tarball



program6: $(SRC) $(HDRS)
	$(CXX) $(CXXFLAGS) $(SRC) -o program6

program6_lex.cpp: program6.lpp nodes.hpp
	$(LEX) $(LFLAGS) program6.lpp

program6.tab.cpp : program6.ypp nodes.hpp
	$(YACC) $(YFLAGS) program6.ypp
tidy:
	/bin/rm -f a.out core.* program6.tab.* program6.output\
	  program6_lex.cpp program6

# the tidy rule cleans up but leaves the executable. The clean, uses tidy
# then it removes the executable. 
clean: tidy
	/bin/rm -f bison_test 

tarball:
	tar cf program6.tar Makefile nodes.hpp nodes.cpp program6.lpp program6.ypp \
	program6.cpp program6.odt program6.hpp symboltable.cpp \
	symboltable.hpp typetable.cpp typetable.hpp
