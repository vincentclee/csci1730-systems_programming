##Lab Exercise 1 — Prime Numbers

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 6.1)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 6 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Writing function prototypes to specify the name of the function, the type of data returned by the func-
   tion, the number of parameters the function expects to receive, the types of the parameters and the order
  in which these parameters are expected.
* Making function calls and passing arguments to a function.
* Returning values from a function.

The follow-up question and activity will also give you practice:

* Writing a program that performs a similar task.

###Description of the Problem
Write a program that inputs a series of integers and passes them one at a time to funciton even, which uses the
modulus operator to determine whether an integer is even. The function should take an integer argument and
return true if the integer is even and false otherwise.

###Sample Output
```
Enter an integer: 4
4 is an even integer
Enter an integer: 3
3 is an odd integer
Enter an integer: 2
2 is an even integer
```

Template
```C
// Lab 1: even.cpp
// Determine whether inputs are odd or even.
#include <iostream>
using namespace std;
/* Write a function prototype for function even, which takes an int parameter
and returns a bool */
int main()
{
int x; // current input
// loop for 3 inputs
for ( int i = 1; i <= 3; i++ )
{
cout << "Enter an integer: ";
cin >> x;
// determine if
if ( /* Write a
cout << x <<
else
cout << x <<
} // end for
input is even
call to function even to determine if x is even */ )
" is an even integer\n\n";
" is an odd integer\n\n";
cout << endl;
} // end main
/* Define function even. Use the modulus operator to determine if an integer
is evenly divisible by two. */
```
###Problem-Solving Tips
1. Function even contains an algorithm for determining if a number is even. Function even should return
true if the number is even and false otherwise. If a number is divisible by two without a remainder, it
is even. Use the modulus operator, %, to test for a remainder.
2. Be sure to follow the spacing and indentation conventions mentioned in the text.
3. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Question and Activity
1. Write another function odd that returns true if an integer is odd and false otherwise. Modify main to use
function odd instead of function even. The program’s output should be identical to the one shown in the
sample output for Lab Exercise 1.

