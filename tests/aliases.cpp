//
// Programmer:    Craig Stuart Sapp <craig@ccrma.stanford.edu>
// Creation Date: Sun Mar  2 21:54:06 PST 2014
// Last Modified: Sun Mar  2 21:54:13 PST 2014
// Filename:      aliases.cpp
// Web Address:   https://github.com/craigsapp/optionlib/blob/master/tests/aliases.cpp
// Syntax:        C++11
//
// Description:   Test program to check that option alias names are working.
//
// For example, the definition:
//    opts.define("a|A|AA|AAA=b", "This is option A");
// creates the option "a", plus three aliases for "a": A, AA, and AAA.
// To use single-letter options on the command-line, a single dash prefixes
// the option, such as:
//     ./aliases -a
//     ./aliases -A
//  When an option name has more than one charater, then a double dash
//  needs to precede the option name on the command-line:
//     ./aliases --AA
//     ./aliases --AAA
//
// The build-in option "--options" can be used to list the options
// defined for a program which uses the Options class:
//     ./aliases --options
//        a|A|AA|AAA=b		This is option A
//        b|B|BB|BBB=b		This is option B
//        c|C|CC|CCC=b		This is option C
//        d|D|DD|DDD=i:5	This is option D
//        e|E|EE|EEE=i:6	This is option E
//        f|F|FF|FFF=i:7	This is option F
//        g|G|GG|GGG=i:1.5	This is option G
//        h|H|HH|HHH=i:3.6	This is option H
//        i|I|II|III=i:4.7	This is option I
//

#include "Options.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
   Options opts;
   opts.define("a|A|AA|AAA=b",     "This is option A");
   opts.define("b|B|BB|BBB=b",     "This is option B");
   opts.define("c|C|CC|CCC=b",     "This is option C");
   opts.define("d|D|DD|DDD=i:5",   "This is option D");
   opts.define("e|E|EE|EEE=i:6",   "This is option E");
   opts.define("f|F|FF|FFF=i:7",   "This is option F");
   opts.define("g|G|GG|GGG=i:1.5", "This is option G");
   opts.define("h|H|HH|HHH=i:3.6", "This is option H");
   opts.define("i|I|II|III=i:4.7", "This is option I");
   opts.process(argc, argv);

   cout << "Boolean states:" << endl;
   cout << "\ta : " << opts.getBoolean("a")   << ", "
                    << opts.getBoolean("A")   << ", "
                    << opts.getBoolean("AA")  << ", "
                    << opts.getBoolean("AAA") << endl;
   cout << "\tb : " << opts.getBoolean("b")   << ", "
                    << opts.getBoolean("B")   << ", "
                    << opts.getBoolean("BB")  << ", "
                    << opts.getBoolean("BBB") << endl;
   cout << "\tc : " << opts.getBoolean("c")   << ", "
                    << opts.getBoolean("C")   << ", "
                    << opts.getBoolean("CC")  << ", "
                    << opts.getBoolean("CCC") << endl;
   cout << "\td : " << opts.getBoolean("d")   << ", "
                    << opts.getBoolean("D")   << ", "
                    << opts.getBoolean("DD")  << ", "
                    << opts.getBoolean("DDD") << endl;
   cout << "\te : " << opts.getBoolean("e")   << ", "
                    << opts.getBoolean("E")   << ", "
                    << opts.getBoolean("EE")  << ", "
                    << opts.getBoolean("EEE") << endl;
   cout << "\tf : " << opts.getBoolean("f")   << ", "
                    << opts.getBoolean("F")   << ", "
                    << opts.getBoolean("FF")  << ", "
                    << opts.getBoolean("FFF") << endl;
   cout << "\tg : " << opts.getBoolean("g")   << ", "
                    << opts.getBoolean("G")   << ", "
                    << opts.getBoolean("GG")  << ", "
                    << opts.getBoolean("GGG") << endl;
   cout << "\th : " << opts.getBoolean("h")   << ", "
                    << opts.getBoolean("H")   << ", "
                    << opts.getBoolean("HH")  << ", "
                    << opts.getBoolean("HHH") << endl;
   cout << "\ti : " << opts.getBoolean("i")   << ", "
                    << opts.getBoolean("I")   << ", "
                    << opts.getBoolean("II")  << ", "
                    << opts.getBoolean("III") << endl;

   cout << "String states:" << endl;
   cout << "\ta : " << opts.getString("a")   << ", "
                    << opts.getString("A")   << ", "
                    << opts.getString("AA")  << ", "
                    << opts.getString("AAA") << endl;
   cout << "\tb : " << opts.getString("b")   << ", "
                    << opts.getString("B")   << ", "
                    << opts.getString("BB")  << ", "
                    << opts.getString("BBB") << endl;
   cout << "\tc : " << opts.getString("c")   << ", "
                    << opts.getString("C")   << ", "
                    << opts.getString("CC")  << ", "
                    << opts.getString("CCC") << endl;
   cout << "\td : " << opts.getString("d")   << ", "
                    << opts.getString("D")   << ", "
                    << opts.getString("DD")  << ", "
                    << opts.getString("DDD") << endl;
   cout << "\te : " << opts.getString("e")   << ", "
                    << opts.getString("E")   << ", "
                    << opts.getString("EE")  << ", "
                    << opts.getString("EEE") << endl;
   cout << "\tf : " << opts.getString("f")   << ", "
                    << opts.getString("F")   << ", "
                    << opts.getString("FF")  << ", "
                    << opts.getString("FFF") << endl;
   cout << "\tg : " << opts.getString("g")   << ", "
                    << opts.getString("G")   << ", "
                    << opts.getString("GG")  << ", "
                    << opts.getString("GGG") << endl;
   cout << "\th : " << opts.getString("h")   << ", "
                    << opts.getString("H")   << ", "
                    << opts.getString("HH")  << ", "
                    << opts.getString("HHH") << endl;
   cout << "\ti : " << opts.getString("i")   << ", "
                    << opts.getString("I")   << ", "
                    << opts.getString("II")  << ", "
                    << opts.getString("III") << endl;

   cout << "Integer states:" << endl;
   cout << "\ta : " << opts.getInteger("a")   << ", "
                    << opts.getInteger("A")   << ", "
                    << opts.getInteger("AA")  << ", "
                    << opts.getInteger("AAA") << endl;
   cout << "\tb : " << opts.getInteger("b")   << ", "
                    << opts.getInteger("B")   << ", "
                    << opts.getInteger("BB")  << ", "
                    << opts.getInteger("BBB") << endl;
   cout << "\tc : " << opts.getInteger("c")   << ", "
                    << opts.getInteger("C")   << ", "
                    << opts.getInteger("CC")  << ", "
                    << opts.getInteger("CCC") << endl;
   cout << "\td : " << opts.getInteger("d")   << ", "
                    << opts.getInteger("D")   << ", "
                    << opts.getInteger("DD")  << ", "
                    << opts.getInteger("DDD") << endl;
   cout << "\te : " << opts.getInteger("e")   << ", "
                    << opts.getInteger("E")   << ", "
                    << opts.getInteger("EE")  << ", "
                    << opts.getInteger("EEE") << endl;
   cout << "\tf : " << opts.getInteger("f")   << ", "
                    << opts.getInteger("F")   << ", "
                    << opts.getInteger("FF")  << ", "
                    << opts.getInteger("FFF") << endl;
   cout << "\tg : " << opts.getInteger("g")   << ", "
                    << opts.getInteger("G")   << ", "
                    << opts.getInteger("GG")  << ", "
                    << opts.getInteger("GGG") << endl;
   cout << "\th : " << opts.getInteger("h")   << ", "
                    << opts.getInteger("H")   << ", "
                    << opts.getInteger("HH")  << ", "
                    << opts.getInteger("HHH") << endl;
   cout << "\ti : " << opts.getInteger("i")   << ", "
                    << opts.getInteger("I")   << ", "
                    << opts.getInteger("II")  << ", "
                    << opts.getInteger("III") << endl;

   cout << "Double states:" << endl;
   cout << "\ta : " << opts.getDouble("a")   << ", "
                    << opts.getDouble("A")   << ", "
                    << opts.getDouble("AA")  << ", "
                    << opts.getDouble("AAA") << endl;
   cout << "\tb : " << opts.getDouble("b")   << ", "
                    << opts.getDouble("B")   << ", "
                    << opts.getDouble("BB")  << ", "
                    << opts.getDouble("BBB") << endl;
   cout << "\tc : " << opts.getDouble("c")   << ", "
                    << opts.getDouble("C")   << ", "
                    << opts.getDouble("CC")  << ", "
                    << opts.getDouble("CCC") << endl;
   cout << "\td : " << opts.getDouble("d")   << ", "
                    << opts.getDouble("D")   << ", "
                    << opts.getDouble("DD")  << ", "
                    << opts.getDouble("DDD") << endl;
   cout << "\te : " << opts.getDouble("e")   << ", "
                    << opts.getDouble("E")   << ", "
                    << opts.getDouble("EE")  << ", "
                    << opts.getDouble("EEE") << endl;
   cout << "\tf : " << opts.getDouble("f")   << ", "
                    << opts.getDouble("F")   << ", "
                    << opts.getDouble("FF")  << ", "
                    << opts.getDouble("FFF") << endl;
   cout << "\tg : " << opts.getDouble("g")   << ", "
                    << opts.getDouble("G")   << ", "
                    << opts.getDouble("GG")  << ", "
                    << opts.getDouble("GGG") << endl;
   cout << "\th : " << opts.getDouble("h")   << ", "
                    << opts.getDouble("H")   << ", "
                    << opts.getDouble("HH")  << ", "
                    << opts.getDouble("HHH") << endl;
   cout << "\ti : " << opts.getDouble("i")   << ", "
                    << opts.getDouble("I")   << ", "
                    << opts.getDouble("II")  << ", "
                    << opts.getDouble("III") << endl;

   return 1;
}


/* Example command-line output:

# ./aliases --options
a|A|AA|AAA=b	This is option A
b|B|BB|BBB=b	This is option B
c|C|CC|CCC=b	This is option C
d|D|DD|DDD=i:5	This is option D
e|E|EE|EEE=i:6	This is option E
f|F|FF|FFF=i:7	This is option F
g|G|GG|GGG=i:1.5	This is option G
h|H|HH|HHH=i:3.6	This is option H
i|I|II|III=i:4.7	This is option I

# ./aliases
Boolean states:
	a : 0, 0, 0, 0
	b : 0, 0, 0, 0
	c : 0, 0, 0, 0
	d : 0, 0, 0, 0
	e : 0, 0, 0, 0
	f : 0, 0, 0, 0
	g : 0, 0, 0, 0
	h : 0, 0, 0, 0
	i : 0, 0, 0, 0
String states:
	a : , , , 
	b : , , , 
	c : , , , 
	d : 5, 5, 5, 5
	e : 6, 6, 6, 6
	f : 7, 7, 7, 7
	g : 1.5, 1.5, 1.5, 1.5
	h : 3.6, 3.6, 3.6, 3.6
	i : 4.7, 4.7, 4.7, 4.7
Integer states:
	a : 0, 0, 0, 0
	b : 0, 0, 0, 0
	c : 0, 0, 0, 0
	d : 5, 5, 5, 5
	e : 6, 6, 6, 6
	f : 7, 7, 7, 7
	g : 1, 1, 1, 1
	h : 3, 3, 3, 3
	i : 4, 4, 4, 4
Double states:
	a : 0, 0, 0, 0
	b : 0, 0, 0, 0
	c : 0, 0, 0, 0
	d : 5, 5, 5, 5
	e : 6, 6, 6, 6
	f : 7, 7, 7, 7
	g : 1.5, 1.5, 1.5, 1.5
	h : 3.6, 3.6, 3.6, 3.6
	i : 4.7, 4.7, 4.7, 4.7

# ./aliases --AA -b -C --EEE 8 -H 9.2 
Boolean states:
	a : 1, 1, 1, 1
	b : 1, 1, 1, 1
	c : 1, 1, 1, 1
	d : 0, 0, 0, 0
	e : 1, 1, 1, 1
	f : 0, 0, 0, 0
	g : 0, 0, 0, 0
	h : 1, 1, 1, 1
	i : 0, 0, 0, 0
String states:
	a : , , , 
	b : b, b, b, b
	c : C, C, C, C
	d : 5, 5, 5, 5
	e : 8, 8, 8, 8
	f : 7, 7, 7, 7
	g : 1.5, 1.5, 1.5, 1.5
	h : 9.2, 9.2, 9.2, 9.2
	i : 4.7, 4.7, 4.7, 4.7
Integer states:
	a : 0, 0, 0, 0
	b : 0, 0, 0, 0
	c : 0, 0, 0, 0
	d : 5, 5, 5, 5
	e : 8, 8, 8, 8
	f : 7, 7, 7, 7
	g : 1, 1, 1, 1
	h : 9, 9, 9, 9
	i : 4, 4, 4, 4
Double states:
	a : 0, 0, 0, 0
	b : 0, 0, 0, 0
	c : 0, 0, 0, 0
	d : 5, 5, 5, 5
	e : 8, 8, 8, 8
	f : 7, 7, 7, 7
	g : 1.5, 1.5, 1.5, 1.5
	h : 9.2, 9.2, 9.2, 9.2
	i : 4.7, 4.7, 4.7, 4.7

 */



