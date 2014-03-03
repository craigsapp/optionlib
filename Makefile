## main optionlib GNU makefile
##
## Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
## Creation Date: Sat Mar  1 20:47:27 PST 2014
## Last Modified: Sun Mar  2 22:45:32 PST 2014
## Filename:      ...optionlib/Makefile
##
## Description: This Makefile can create the option library or programs 
##
## To run this makefile, type (without quotes) "make library" (or 
## "gmake library" on FreeBSD computers), then "make programs".
##

# targets which don't actually refer to files
.PHONY : src include tests bin lib obj

###########################################################################
#                                                                         #
#                                                                         #

info:
	@echo ""
	@echo This makefile will create either the option library file or will
	@echo compile the test programs.  Type one of the following:
	@echo "   $(MAKE) library"
	@echo or
	@echo "   $(MAKE) tests"
	@echo ""
	@echo To compile a specific test program called xxx, type:
	@echo "   $(MAKE) xxx"
	@echo ""
	@echo Typing \"make all\" with compile both the library and all test programs.
	@echo ""

all: library tests

library: 
	$(MAKE) -f Makefile.library

update: library-update tests-update

testupdate:	 programs-update
testsupdate:	 programs-update
tests-update:    programs-update
examples-update: programs-update
example-update:  programs-update
exampleupdate:   programs-update
examplesupdate:  programs-update
program-update:  programs-update
programsupdate:  programs-update
programupdate:   programs-update
programs-update: 
	(cd tests; $(MAKE) clean; $(MAKE) )

libupdate: library-update
updatelib: library-update
uplib: library-update
libup: library-update
library-update:
	$(MAKE) -f Makefile.library library

clean:
	$(MAKE) -f Makefile.library clean
	-(cd tests; $(MAKE) clean)
	-rm -rf bin
	-rm -rf lib

tests:    programs
test:     programs
examples: programs
example:  programs
programs:
	(cd tests; $(MAKE) all)

%: 
	@echo compiling test program tests/$@
	(cd tests; $(MAKE) $@ )
	
#                                                                         #
#                                                                         #
###########################################################################


