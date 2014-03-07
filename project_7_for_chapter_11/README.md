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

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 11.6–Fig. L 11.8)
5. Problem-Solving Tip
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tip as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

##Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 11 of C++ How To Program, Seventh
Edition. In this lab, you will practice:

* Overloading arithmetic and comparison operators to enhance a huge integer class, HugeInt.
* Writing function prototypes for overloaded operators.
* Calling overloaded operator functions.

The follow-up questions and activities also will give you practice:

* Analyzing algorithms.

###Description of the Problem
A machine with 32-bit integers can represent integers in the range of approximately –2 billion to +2 billion. This
fixed-size restriction is rarely troublesome, but there are applications in which we would like to be able to use a
much wider range of integers. This is what C++ was built to do, namely, create powerful new data types. Con-
sider class HugeInt of Figs. 11.8–11.10. Study the class carefully, then overload the relational and equality oper-
ators. [Note: We do not show an assignment operator or copy constructor for class HugeInt, because the
assignment operator and copy constructor provided by the compiler are capable of copying the entire array data
member properly.]

###Sample Output
```
n1 is 7654321
n2 is 7891234
n3 is 99999999999999999999999999999
n4 is 1
result is 0
n1 is not equal to n2
n1 is less than n2
n1 is less than or equal to n2
7654321 + 7891234 = 15545555
99999999999999999999999999999 + 1
= 100000000000000000000000000000
7654321 + 9 = 7654330
7891234 + 10000 = 7901234
12341234 - 7888 = 12333346
```

###Template
```C
// Lab 2: Hugeint.h
// HugeInt class definition.
#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
using namespace std;

class HugeInt
{
	friend ostream &operator<<( ostream &, const HugeInt & );
public:
	HugeInt( long = 0 ); // conversion/default constructor
	HugeInt( const char * ); // conversion constructor
	
	// addition operator; HugeInt + HugeInt
	HugeInt operator+( const HugeInt & ) const;
	
	// addition operator; HugeInt + int
	HugeInt operator+( int ) const;
	
	// addition operator;
	// HugeInt + string that represents large integer value
	HugeInt operator+( const char * ) const;
	
	/* Write prototypes for the six relational and equality operators */
	
	int getLength() const;
private:
	short integer[ 30 ];
}; // end class HugeInt
#endif
```

```C
// Lab 2: Hugeint.cpp
// HugeInt member-function and friend-function definitions.
#include <iostream>
#include <cctype> // isdigit function prototype
#include <cstring> // strlen function prototype
using namespace std;

#include "Hugeint.h" // HugeInt class definition

// default constructor; conversion constructor that converts
// a long integer into a HugeInt object
HugeInt::HugeInt( long value )
{
	// initialize array to zero
	for ( int i = 0; i <= 29; i++ )
		integer[ i ] = 0;

	// place digits of argument into array
	for ( int j = 29; value != 0 && j >= 0; j-- )
	{
		integer[ j ] = value % 10;
		value /= 10;
	} // end for
} // end HugeInt default/conversion constructor

// conversion constructor that converts a character string
// representing a large integer into a HugeInt object
HugeInt::HugeInt( const char *string )
{
	// initialize array to zero
	for ( int i = 0; i <= 29; i++ )
		integer[ i ] = 0;

	// place digits of argument into array
	int length = strlen( string );

	for ( int j = 30 - length, k = 0; j <= 29; j++, k++ )
		if ( isdigit( string[ k ] ) )
			integer[ j ] = string[ k ] - '0';
} // end HugeInt conversion constructor

// get function calculates length of integer
int HugeInt::getLength() const
{
	int i;
	for ( i = 0; i <= 29; i++ )
		if ( integer[ i ] != 0 )
			break; // break when first digit is reached

	return 30 - i; // length is from first digit (at i) to end of array
} // end function getLength

// addition operator; HugeInt + HugeInt
HugeInt HugeInt::operator+( const HugeInt &op2 ) const
{
	HugeInt temp; // temporary result
	int carry = 0;
	for ( int i = 29; i >= 0; i-- )
	{
		temp.integer[ i ] = integer[ i ] + op2.integer[ i ] + carry;
		
		// determine whether to carry a 1
		if ( temp.integer[ i ] > 9 )
		{
			temp.integer[ i ] %= 10; // reduce to 0-9
			carry = 1;
		} // end if
		else // no carry
			carry = 0;
	} // end for
	
	return temp; // return copy of temporary object
} // end function operator+

// addition operator; HugeInt + int
HugeInt HugeInt::operator+( int op2 ) const
{
	// convert op2 to a HugeInt, then invoke
	// operator+ for two HugeInt objects
	return *this + HugeInt( op2 );
} // end function operator+

// addition operator;
// HugeInt + string that represents large integer value
HugeInt HugeInt::operator+( const char *op2 ) const
{
	// convert op2 to a HugeInt, then invoke
	// operator+ for two HugeInt objects
	return *this + HugeInt( op2 );
} // end function operator+

// equality operator; HugeInt == HugeInt
/* Write a definition for the == operator */

// inequality operator; HugeInt != HugeInt
/* Write a definition for the != operator by calling the == operator */

// less than operator; HugeInt < HugeInt
/* Write a definition for the < operator */

// less than or equal operator; HugeInt <= HugeInt
/* Write a definition for the <= operator by calling the < and == operators */

// greater than operator; HugeInt > HugeInt
/* Write a definition for the > operator by calling the <= operator */

// greater than or equal operator; HugeInt >= HugeInt
/* Write a definition for the >= operator by calling the > and == operators */
// overloaded output operator
ostream& operator<<( ostream &output, const HugeInt &num )
{
	int i;
	for ( i = 0; ( num.integer[ i ] == 0 ) && ( i <= 29 ); i++ )
		; // skip leading zeros
	
	if ( i == 30 )
		output << 0;
	else

	for ( ; i <= 29; i++ )
		output << num.integer[ i ];

	return output;
} // end function operator<<
```

```C
// Lab 2: HugeIntTest.cpp
// HugeInt test program.
#include <iostream>
using namespace std;

#include "Hugeint.h"

int main()
{
	HugeInt n1( 7654321 );
	HugeInt n2( 7891234 );
	HugeInt n3( "99999999999999999999999999999" );
	HugeInt n4( "1" );
	HugeInt result;

	cout << "n1 is " << n1 << "\nn2 is " << n2
		<< "\nn3 is " << n3 << "\nn4 is " << n4
		<< "\nresult is " << result << "\n\n";

	// test relational and equality operators
	if ( n1 == n2 )
		cout << "n1 equals n2" << endl;

	if ( n1 != n2 )
		cout << "n1 is not equal to n2" << endl;
	
	if ( n1 < n2 )
		cout << "n1 is less than n2" << endl;

	if ( n1 <= n2 )
		cout << "n1 is less than or equal to n2" << endl;

	if ( n1 > n2 )
		cout << "n1 is greater than n2" << endl;

	if ( n1 >= n2 )
		cout << "n1 is greater than or equal to n2" << endl;

	result = n1 + n2;
	cout << n1 << " + " << n2 << " = " << result << "\n\n";

	cout << n3 << " + " << n4 << "\n= " << ( n3 + n4 ) << "\n\n";
	
	result = n1 + 9;
	cout << n1 << " + " << 9 << " = " << result << endl;
	
	result = n2 + "10000";
	cout << n2 << " + " << "10000" << " = " << result << endl;
} // end main
```

###Problem-Solving Tip
1. You can implement the !=, >, >= and <= operators in terms of the overloaded == and < operators.

###Follow-Up Questions and Activities
1. Describe precisely how the overloaded addition operator for HugeInt operates.
2. What restrictions does the class have?


##Lab Exercise 3 — Rational Numbers


This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 11.9–Fig. L 11.11)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 11 of C++ How To Program, Seventh
Edition. In this lab, you will practice:
* Overloading operators to create a class capable of storing rational numbers (fractions) and performing
   rational number arithmetic.
* Writing function prototypes for overloaded operators.
* Implementing overloaded operator functions.

The follow-up questions and activities also will give you practice:
* Overloading the << operator.
* Making a class more robust to prevent runtime errors.

###Description of the Problem
Create a class RationalNumber (fractions) with the following capabilities:  
a) Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies fractions that are
not in reduced form and avoids negative denominators.  
b) Overload the addition, subtraction, multiplication and division operators for this class.  
c)
Overload the relational and equality operators for this class.

###Sample Output
```
7/3 + 1/3 = 8/3
7/3 - 1/3 = 2
7/3 * 1/3 = 7/9
7/3 / 1/3 = 7
7/3 is:
> 1/3 according to the overloaded > operator
>= 1/3 according to the overloaded < operator
>= 1/3 according to the overloaded >= operator
> 1/3 according to the overloaded <= operator
!= 1/3 according to the overloaded == operator
!= 1/3 according to the overloaded != operator
```

###Template
```C
// Lab 3: RationalNumber.h
// RationalNumber class definition.
#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber
{
public:
	RationalNumber( int = 0, int = 1 ); // default constructor
	/* Write prototype for operator + */
	/* Write prototype for operator - */
	/* Write prototype for operator * */
	/* Write prototype for operator / */

	//relational operators
	/* Write prototype for operator > */
	/* Write prototype for operator < */
	/* Write prototype for operator >= */
	/* Write prototype for operator <= */

	// equality operators
	/* Write prototype for operator == */
	/* Write prototype for operator != */
	void printRational() const; // display rational number
private:
	int numerator; // private variable numerator
	int denominator; // private variable denominator
	void reduction(); // function for fraction reduction
}; // end class RationalNumber
#endif
```

```C
// Lab 3: RationalNumber.cpp
// RationalNumber member-function definitions.
#include <cstdlib>
#include <iostream>
using namespace std;

#include "RationalNumber.h"

// RationalNumber constructor sets n and d and calls reduction
/* Implement the RationalNumber constructor. Validate d first to ensure that it is a positive number and set it to 1 if not. Call the reduction utility function at the end */
// overloaded + operator

/* Write definition for overloaded operator + */
// overloaded - operator

/* Write definition for overloaded operator - */
// overloaded * operator

/* Write definition for overloaded operator * */
// overloaded / operator

/* Write definition for overloaded operator /. Check if the client is attempting to divide by zero and report an error message if so */
// overloaded > operator

/* Write definition for operator > */
// overloaded < operator

/* Write definition for operator < */
// overloaded >= operator

/* Write definition for operator >= */
// overloaded <= operator

/* Write definition for operator <= */
// overloaded == operator

/* Write definition for operator == */
// overloaded != operator

/* Write definition for operator != */
// function printRational definition
void RationalNumber::printRational() const
{
	if ( numerator == 0 ) // print fraction as zero
		cout << numerator;
	else if ( denominator == 1 ) // print fraction as integer
		cout << numerator;
	else
		cout << numerator << '/' << denominator;
} // end function printRational

// function reduction definition
void RationalNumber::reduction()
{
	int largest, gcd = 1; // greatest common divisor;
	
	largest = ( numerator > denominator ) ? numerator: denominator;
	
	for ( int loop = 2; loop <= largest; loop++ )
		if ( numerator % loop == 0 && denominator % loop == 0 )
			gcd = loop;

	numerator /= gcd;
	denominator /= gcd;
} // end function reduction
```
```C
// Lab 3: RationalTest.cpp
// RationalNumber test program.
#include <iostream>
using namespace std;

#include "RationalNumber.h"

int main()
{
	RationalNumber c( 7, 3 ), d( 3, 9 ), x;

	c.printRational();
	cout << " + ";
	d.printRational();
	cout << " = ";
	x = c + d; // test overloaded operators + and =
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " - ";
	d.printRational();
	cout << " = ";
	x = c - d; // test overloaded operators - and =
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " * ";
	d.printRational();
	cout << " = ";
	x = c * d; // test overloaded operators * and =
	x.printRational();

	cout << '\n';
	c.printRational();
	cout << " / ";
	d.printRational();
	cout << " = ";
	x = c / d; // test overloaded operators / and =
	x.printRational();
	
	cout << '\n';
	c.printRational();
	cout << " is:\n";
	
	// test overloaded greater than operator
	cout << ( ( c > d ) ? " > " : " <= " );
	d.printRational();
	cout << " according to the overloaded > operator\n";

	// test overloaded less than operator
	cout << ( ( c < d ) ? " < " : " >= " );
	d.printRational();
	cout << " according to the overloaded < operator\n";

	// test overloaded greater than or equal to operator
	cout << ( ( c >= d ) ? " >= " : " < " );
	d.printRational();
	cout << " according to the overloaded >= operator\n";

	// test overloaded less than or equal to operator
	cout << ( ( c <= d ) ? " <= " : " > " );
	d.printRational();
	cout << " according to the overloaded <= operator\n";

	// test overloaded equality operator
	cout << ( ( c == d ) ? " == " : " != " );
	d.printRational();
	cout << " according to the overloaded == operator\n";

	// test overloaded inequality operator
	cout << ( ( c != d ) ? " != " : " == " );
	d.printRational();
	cout << " according to the overloaded != operator" << endl;
} // end main
```

###Problem-Solving Tips
1. When comparing RationalNumbers, you can cast the numerator to a double and then divide by the de-
nominator to determine the value of that RationalNumber as a double. The <=, >=, > and != operators
can be implemented in terms of == and <.
2. To implement the arithmetic operators, use the following formulas:
```
Addition: (a/b) + (c/d) = (ad + bc) / (bd).
Subtraction: (a/b) – (c/d) = (ad – bc) / (bd).
Multiplication: (a/b) * (c/d) = (ac) / (bd).
Division: (a/b) / (c/d) = (ad) / (bc).
```
Remember to check for division by zero.

###Follow-Up Questions and Activities
1. Rewrite the printRational member function as an overloaded << friend function.
2. Make the RationalNumber class more robust by providing additional tests for division by zero in each of the
relational operators that divides a numerator by a denominator.
3. Is it possible to add another overloaded operator> function that returns a pointer to the larger of the two
rational numbers? Why or why not?


