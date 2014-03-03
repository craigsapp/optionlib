## Makefile for optionlib test programs.
##
## Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
## Creation Date: Sun Mar  2 21:07:02 PST 2014
## Last Modified: Sun Mar  2 21:12:32 PST 2014
## Filename:      ...optionlib/tests/Makefile
##
## Description: This Makefile compiles various test programs for using
##              the options library.
##
## To run this makefile, type (without quotes) "make tests" (or 
## "gmake library" on FreeBSD computers).  The options library must be
## created first.
##

CPP_FILES     := $(wildcard *.cpp)
PROGRAM_FILES := ${CPP_FILES:.cpp=}

FLAGS          = -std=c++11
INCLUDE        = -I../include
LIBS           = -L../lib -loptionlib

help:
	@echo
	@echo "Type the name of a program to compile it."
	@echo "Available programs:"
	@echo "	$(PROGRAM_FILES)"
	@echo
	@echo "Type 'make all' to compile all programs."
	@echo "Type 'make touch' before recompiling programs if library changes."
	@echo "Type 'make clean' to remove all compiled programs."
	@echo

all: tests

tests: $(PROGRAM_FILES)

clean:
	-rm $(PROGRAM_FILES)

touch:
	touch *.cpp

%: %.cpp
	g++ $(FLAGS) $(INCLUDE) -o $@ $@.cpp $(LIBS) && strip $@

