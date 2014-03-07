##Lab Exercise 1 — String Concatenation

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 11.3–Fig. L 11.5)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 11 of C++ How To Program, Seventh
Edition. In this lab, you will practice:

* Overloading the + operator to allow String objects to be concatenated.
* Writing function prototypes for overloaded operators.
* Using overloaded operators.
* The String case study and its code are available online at  
www.deitel.com/bookresources/cpphtp7/StringCaseStudy.pdf  
www.deitel.com/bookresources/cpphtp7/StringCaseStudyCode.zip

###Description of the Problem
String concatenation requires two operands—the two strings that are to be concatenated. In the String case
study, we showed how to implement an overloaded concatenation operator that concatenates the second String
object to the right of the first String object, thus modifying the first String object. In some applications, it is
desirable to produce a concatenated String object without modifying the String arguments. Implement oper-
ator+ to allow operations such as
`string1 = string2 + string3;`
in which neither operand is modified.

###Sample Output
```
string1 = string2 + string3
"The date is August 1, 1993" = "The date is" + " August 1, 1993"
```

###Template
```C
// Lab 1: String.h
// Header file for class String.
#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>
#include <cassert>
using namespace std;

class String
{
	friend ostream &operator<<( ostream &output, const String &s );
public:
	String( const char * const = "" ); // conversion constructor
	String( const String & ); // copy constructor
	~String(); // destructor
	const String &operator=( const String & );
	/* Write a prototype for the operator+ member function */
private:
	char *sPtr; // pointer to start of string
	int length; // string length
}; // end class String

#endif
```

```C
// Lab 1: String.cpp
// Member-function definitions for String.cpp
#include <iostream>
#include <cstring> // strcpy and strcat prototypes
using namespace std;

#include "String.h" // String class definition

// conversion constructor: convert a char * to String
String::String( const char * const zPtr )
{
	length = strlen( zPtr ); // compute length
	sPtr = new char[ length + 1 ]; // allocate storage
	assert( sPtr != 0 ); // terminate if memory not allocated
	strcpy( sPtr, zPtr ); // copy literal to object
} // end String conversion constructor

// copy constructor
String::String( const String &copy )
{
	length = copy.length; // copy length
	sPtr = new char[ length + 1 ]; // allocate storage
	assert( sPtr != 0 ); // ensure memory allocated
	strcpy( sPtr, copy.sPtr ); // copy string
} // end String copy constructor

// destructor
String::~String()
{
	delete [] sPtr; // reclaim string
} // end destructor

// overloaded = operator; avoids self assignment
const String &String::operator=( const String &right )
{
	if ( &right != this ) // avoid self assignment
	{
		delete [] sPtr; // prevents memory leak
		length = right.length; // new String length
		sPtr = new char[ length + 1 ]; // allocate memory
		assert( sPtr != 0 ); // ensure memory allocated
		strcpy( sPtr, right.sPtr ); // copy string
	}
	else
		cout << "Attempted assignment of a String to itself\n";

	return *this; // enables concatenated assignments
} // end function operator=

// concatenate right operand and this object and store in temp object
/* Write the header for the operator+ member function */
{
	/* Declare a temporary String variable named temp */

	/* Set temp’s length to be the sum of the two argument Strings’ lengthes */
	/* Allocate memory for temp.length + 1 chars and assign the pointer to temp.sPtr */
	assert( sPtr != 0 ); // terminate if memory not allocated
	/* Copy the left String argument’s contents into temp.sPtr */
	/* Write a call to strcat to concatenate the string in right onto the end of the string in temp */
	/* Return the temporary String */
} // end function operator+

// overloaded output operator
ostream & operator<<( ostream &output, const String &s )
{
	output << s.sPtr;
	return output; // enables concatenation
} // end function operator<<
```


```C
// Lab 1: StringCat.cpp
// Demonstrating overloaded + operator that does not modify operands
#include <iostream>
using namespace std;

#include "String.h"

int main()
{
	String string1, string2( "The date is" );
	String string3( " August 1, 1993" );
	
	// test overloaded operators
	cout << "string1 = string2 + string3\n";
	/* Write a statement to concatenate string2 and string3, and assign the result to string1 */
	cout << "\"" << string1 << "\" = \"" << string2 << "\" + \"" << string3 << "\"" << endl;
} // end main
```

###Problem-Solving Tips
1. The overloaded + operator should be a member function of class String and should take one parameter,
a const reference to a String.
2. The + operator function should use return type String.
3. The strcat function can be used to concatenate pointer-based strings.

##Lab Exercise 2 — Huge Integer


