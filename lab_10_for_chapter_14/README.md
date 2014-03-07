##Lab Exercise 1 — Overloading printArray

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 14.1)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 14 of C++ How To Program, Seventh
Edition. In this lab, you will practice
* Overloading a function template for printing an array.
* Using function templates to create function-template specializations.

###Problem Description
Overload function template printArray of Fig. 14.1 so that it takes two additional integer arguments, namely
int lowSubscript and int highSubscript. A call to this function will print only the designated portion of the
array. Validate lowSubscript and highSubscript; if either is out of range or if highSubscript is less than or
equal to lowSubscript, the overloaded printArray function should return 0; otherwise, printArray should re-
turn the number of elements printed. Then modify main to demonstrate both versions of printArray on arrays
a, b and c (lines 23–25 of Fig. 14.1). Be sure to test all capabilities of both versions of printArray.

###Sample Output
```
Using original printArray function
1 2 3 4 5
Array a contains:
1 2 3 4 5
5 elements were output
Array a from positions 1 to 3 is:
2 3 4
3 elements were output
Array a output with invalid subscripts:
0 elements were output
Using original printArray function
1.1 2.2 3.3 4.4 5.5 6.6 7.7
Array b contains:
1.1 2.2 3.3 4.4 5.5 6.6 7.7
7 elements were output
Array b from positions 1 to 3 is:
2.2 3.3 4.4
3 elements were output
Array b output with invalid subscripts:
0 elements were output
Using original printArray function
H E L L O
Array c contains:
H E L L O
5 elements were output
Array c from positions 1 to 3 is:
E L L
3 elements were output
Array c output with invalid subscripts:
0 elements were output
```

###Template
```C
// Lab 1: TemplateOverload.cpp
// Using template functions
#include <iostream>
using namespace std;

// function template printArray definition
// original function from Fig. 14.1
template< typename T >
void printArray( const T *array, int count )
{
	// display array
	for ( int i = 0; i < count; i++ )
		cout << array[ i ] << " ";
	
	cout << endl;
} // end function printArray

// overloaded function template printArray
// takes upper and lower subscripts to print
/* Write a header for an overloaded printArray function that takes two additional int arguments, lowSubscript and highSubscript; remember to include the template header */
{
	// check if subscript is negative or out of range
	if ( /* Write conditions to test if the size if negative, or if the range is invalid */ )
		return 0;

	int count = 0;

	// display array
	for ( /* Write code to iterate from lowSubscript up to and including highSubscript */ )
	{
		++count;
		cout << array[ i ] << ' ';
	} // end for

	cout << '\n';
	return count; // number or elements output
} // end overloaded function printArray

int main()
{
	const int ACOUNT = 5; // size of array a
	const int BCOUNT = 7; // size of array b
	const int CCOUNT = 6; // size of array c

	// declare and initialize arrays
	int a[ ACOUNT ] = { 1, 2, 3, 4, 5 };
	double b[ BCOUNT ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
	char c[ CCOUNT ] = "HELLO"; // 6th position for null
	int elements;

	// display array a using original printArray function
	cout << "\nUsing original printArray function\n";
	printArray( a, ACOUNT );

	// display array a using new printArray function
	cout << "Array a contains:\n";
	elements = /* Write a call to printArray that specifies 0 to ACOUNT - 1 as the range */
	cout << elements << " elements were output\n";

	// display elements 1-3 of array a
	cout << "Array a from positions 1 to 3 is:\n";
	elements = /* Write a call to printArray that specifies 1 to 3 as the range */
	cout << elements << " elements were output\n";

	// try to print an invalid element
	cout << "Array a output with invalid subscripts:\n";
	elements = /* Write a call to printArray that specifies -1 to 10 as the range */
	cout << elements << " elements were output\n\n";

	// display array b using original printArray function
	cout << "\nUsing original printArray function\n";
	printArray( b, BCOUNT );
	
	// display array b using new printArray function
	cout << "Array b contains:\n";
	elements = /* Write a call to printArray that specifies 0 to BCOUNT - 1 as the range */
	cout << elements << " elements were output\n";

	// display elements 1-3 of array b
	cout << "Array b from positions 1 to 3 is:\n";
	elements = /* Write a call to printArray that specifies 1 to 3 as the range */
	cout << elements << " elements were output\n";

	// try to print an invalid element
	cout << "Array b output with invalid subscripts:\n";
	elements = /* Write a call to printArray that specifies -1 to 10 as the range */
	cout << elements << " elements were output\n\n";

	// display array c using original printArray function
	cout << "\nUsing original printArray function\n";
	printArray( c, CCOUNT );

	// display array c using new printArray function
	cout << "Array c contains:\n";
	elements = /* Write a call to printArray that specifies 0 to CCOUNT - 2 as the range */
	cout << elements << " elements were output\n";

	// display elements 1-3 of array c
	cout << "Array c from positions 1 to 3 is:\n";
	elements = /* Write a call to printArray that specifies 1 to 3 as the range */
	out << elements << " elements were output\n";

	// try to display an invalid element
	cout << "Array c output with invalid subscripts:\n";
	elements = /* Write a call to printArray that specifies -1 to 10 as the range */
	cout << elements << " elements were output" << endl;
} // end main
```

###Problem-Solving Tips
1. To overload the printArray function template, declare another function template, also named print- Array, that takes two additional int parameters, lowSubscript and highSubscript.
2. When iterating over the range from lowSubscript to highSubscript, make sure to include both values within the range, to avoid an off-by-one error.


##Lab Exercise 2 — Equality Function Template
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 14.2)
5. Problem-Solving Tip
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tip as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 14 of C++ How To Program, Seventh
Edition. In this lab, you will practice

* Overloading a function template for testing equality.
* Using function templates to create function-template specializations.

The follow-up questions and activities also will give you practice:

* Overloading operators to enable function templates to function with user-defined types.

###Problem Description
Write a simple function template for predicate function isEqualTo that compares its two arguments of the same
type with the equality operator (==) and returns true if they are equal and false if they are not equal. Use this
function template in a program that calls isEqualTo only with a variety of built-in types.

###Sample Output
```
Enter two integer values: 2 5
2 and 5 are not equal
Enter two character values: a a
a and a are equal
Enter two double values: 2.5 7.5
2.5 and 7.5 are not equal
```

###Template
```C
// Lab 2: isEqualTo.cpp
// A function template for equality
#include <iostream>
using namespace std;

// function template isEqualTo
/* Write a template header with one formal type parameter */
/* Write a header for function template isEqualTo */
{
	return arg1 == arg2;
} // end function isEqualTo

int main()
{
	int a; // integers used for
	int b; // testing equality

	// test if two ints input by user are equal
	cout << "Enter two integer values: ";
	cin >> a >> b;
	out << a << " and " << b << " are " << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';

	char c; // chars used for
	char d; // testing equality

	// test if two chars input by user are equal
	cout << "\nEnter two character values: ";
	cin >> c >> d;
	cout << c << " and " << d << " are " << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';

	double e; // double values used for
	double f; // testing equality

	// test if two doubles input by user are equal
	cout << "\nEnter two double values: ";
	cin >> e >> f;
	cout << e << " and " << f << " are " << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';
} // end main
```

###Problem-Solving Tip
1. Function template isEqualTo compares two values for equality, so both parameters should be of the same type and use the same formal type parameter.

###Follow-Up Questions and Activities
1. Now write a version of the program that calls isEqualTo with a user-defined class type, but does not overload the equality operator for that class type. What happens when you attempt to compile and run this program?
2. Now overload the equality operator for the user-defined type. Now what happens when you attempt to compile and run this program?


