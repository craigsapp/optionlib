//
// Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
// Creation Date: Sun Mar  2 22:57:27 PST 2014
// Last Modified: Sun Mar  2 23:21:31 PST 2014
// Filename:      arguments.cpp
// Web Address:   https://github.com/craigsapp/optionlib/blob/master/tests/arguments.cpp
// Syntax:        C++11
//
// Description:   Check filtering of non-option arguments from the command-line.
//                This program will print a list of the command-line arguments
//                after all options have been removed from the list of
//                input data.
//

#include "Options.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   Options opts;
   opts.define("a|A=b",    "This is option A");
   opts.define("b|B=i:5",  "This is option B");
   opts.define("c|C=i:6",  "This is option C");
   opts.define("d|D=i:7",  "This is option D");
   opts.define("e|E=i:8",  "This is option E");
   opts.define("f|F=i:9",  "This is option F");
   opts.define("g|G=i:10", "This is option G");
   opts.define("h|H=i:11", "This is option H");
   opts.process(argc, argv);

   int argcount = opts.getArgumentCount();
   cout << "Program name:\t"   << opts.getCommand() << endl;
   cout << "Argument count:\t" << argcount          << endl;
   for (int i=0; i<argcount; i++) {
      cout << "Argument " << i+1 << ":\t" << opts.getArg(i+1) << endl;
   }

   return 1;
}


/* Example command-line output:

# ./arguments 
Program name:	./arguments
Argument count:	0


# ./arguments a b c d
Program name:	./arguments
Argument count:	5
Argument 1:	a
Argument 2:	b
Argument 3:	c
Argument 4:	d
Argument 5:	e


# ./arguments -a -b 5 -c6 -E 8
Program name:	./arguments
Argument count:	0


# ./arguments -a 1 -b 2 -C3 -e 4
Program name:	./arguments
Argument count:	1
Argument 1:	1


# ./arguments -b 1 A B C D
Program name:	./arguments
Argument count:	4
Argument 1:	A
Argument 2:	B
Argument 3:	C
Argument 4:	D


# ./arguments A B C D -b 2
Program name:	./arguments
Argument count:	4
Argument 1:	A
Argument 2:	B
Argument 3:	C
Argument 4:	D


# ./arguments A B -b 2 C D 
Program name:	./arguments
Argument count:	4
Argument 1:	A
Argument 2:	B
Argument 3:	C
Argument 4:	D


# ./arguments -a A B -b 2 C D -c 3
Program name:	./arguments
Argument count:	4
Argument 1:	A
Argument 2:	B
Argument 3:	C
Argument 4:	D


*/


