//
// Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
// Creation Date: Sun Mar  2 22:00:37 PST 2014
// Last Modified: Sun Mar  2 22:00:39 PST 2014
// Filename:      datatypes.cpp
// Web Address:   https://github.com/craigsapp/optionlib/blob/master/tests/datatypes.cpp
// Syntax:        C++11
//
// Description:   Test program to check that various option types are working.
//
// There are several data types for options, for example, a boolean option
// is defined like this:
//    opts.define("a|A|aa=b", "Option A is a boolean");
// in this example, the option type is a boolean since the charater after
// the equals sign is "b".  Boolean options take no arguments, while all 
// others take one argment.  Here is a list of the option types:
//    b  == boolean.  False if not given on the command line, true otherwise.
//    s  == string.   Options' argument is returned as a string.
//    i  == integer.  Options' argument is returned as an integer.
//    d  == double.   Options' argument is returned as a double.
//    f  == float.    Options' argument is returned as a integer.
//    c  == double.   Options' argument is returned as a character.
//
// Default values for option types which require an argument are given
// after a colon character (:) following the option type.
//
// The build-in option "--options" can be used to list the options
// defined for a program which uses the Options class:
//     ./datatypes --options
//        a|A|aa=b	Option A is a boolean
//        b|B|bb=i:2	Option B is an integer
//        c|C|cc=d:3.4	Option C is a double
//        d|D|dd=f:5.6	Option D is a float
//        e|E|ee=s:car	Option E is a string
//        f|F|ff=c:x	Option F is a character
//

#include "Options.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   Options opts;
   opts.define("a|A|aa=b",      "Option A is a boolean"  );
   opts.define("b|B|bb=i:2",    "Option B is an integer" );
   opts.define("c|C|cc=d:3.4",  "Option C is a double"   );
   opts.define("d|D|dd=f:5.6",  "Option D is a float"    );
   opts.define("e|E|ee=s:car",  "Option E is a string"   );
   opts.define("f|F|ff=c:x",    "Option F is a character");
   opts.process(argc, argv);

   cout << "A option ";
   if (!opts.getBoolean("A")) { cout << "not "; }
   cout << "changed:\t" << opts.getBoolean("a") << endl;

   cout << "B option ";
   if (!opts.getBoolean("B")) { cout << "not "; }
   cout << "changed:\t" << opts.getInteger("b") << endl;

   cout << "C option ";
   if (!opts.getBoolean("C")) { cout << "not "; }
   cout << "changed:\t" << opts.getDouble("c") << endl;

   cout << "D option ";
   if (!opts.getBoolean("D")) { cout << "not "; }
   cout << "changed:\t" << opts.getFloat("d") << endl;

   cout << "E option ";
   if (!opts.getBoolean("E")) { cout << "not "; }
   cout << "changed:\t" << opts.getString("e") << endl;

   cout << "F option ";
   if (!opts.getBoolean("F")) { cout << "not "; }
   cout << "changed:\t" << opts.getChar("f") << endl;

   return 1;
}


/*  Example command-line results:
 *
 * # ./datatypes --options
 * a|A|aa=b	Option A is a boolean
 * b|B|bb=i:2	Option B is an integer
 * c|C|cc=d:3.4	Option C is a double
 * d|D|dd=f:5.6	Option D is a float
 * e|E|ee=s:car	Option E is a string
 * f|F|ff=c:x	Option F is a character
 *
 * # ./datatypes                   
 * A option not changed:	0
 * B option not changed:	2
 * C option not changed:	3.4
 * D option not changed:	5.6
 * E option not changed:	car
 * F option not changed:	x
 * 
 * # ./datatypes  -aB 24 -Fz --dd 7.8 -ebike
 * A option changed:	1
 * B option changed:	24
 * C option not changed:	3.4
 * D option changed:	7.8
 * E option changed:	bike
 * F option changed:	z
 */



