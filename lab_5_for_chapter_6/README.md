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

/* Write a function prototype for function even, which takes an int parameter and returns a bool */

int main()
{
   int x; // current input

   // loop for 3 inputs
   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter an integer: ";
      cin >> x;
      
      // determine if input is even
      if ( /* Write a call to function even to determine if x is even */ )
         cout << x << " is an even integer\n\n";
      else
         cout << x << " is an odd integer\n\n";
   } // end for

   cout << endl;
} // end main

/* Define function even. Use the modulus operator to determine if an integer is evenly divisible by two. */
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


##Lab Exercise 2 — Reversing Digits

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 6.2)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 6 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice

* Writing function prototypes to specify the name of the function, the type of data returned by the func-
   tion, the number of parameters the function expects to receive, the types of the parameters and the order
  in which the parameters are expected.
* Using multiple functions to perform specific tasks.

The follow-up questions and activities also will give you practice:

* Nesting function calls.
* Tracing through a program.
* Comparing call-by-reference to call-by-value.

###Description of the Problem
Write a function that takes an integer value and returns the number with its digits reversed. For example, given
the number 7631, the function should return 1367.

###Sample Output
```
Enter a number between 1 and 9999: 7631
The number with its digits reversed is: 1367
```

Template
```C
// Lab 2: reverse.cpp
// Reverse the digits of a number.
#include <iostream>
#include <iomanip>
using namespace std;

/* Write prototype for reverseDigits */

int main()
{
	int number; // input number
	
	cout << "Enter a number between 1 and 9999: ";
	cin >> number;
	
	cout << "The number with its digits reversed is: ";
	
	// find number with digits reversed
	cout << /* Write call to reverseDigits */ << endl;
} // end main

// reverseDigits returns number obtained by reversing digits of n
/* Write function header for reverseDigits */
{
	int reverse = 0; // reversed number
	int divisor = 1000; // current divisor
	int multiplier = 1; // current multiplier

	// loop until single-digit number
	while ( n > 9 )
	{
		// if n >= current divisor, determine digit
		if ( n >= divisor )
		{
			// update reversed number with current digit
			reverse += n / divisor * multiplier;
			n %= divisor; // update n
			/* Write a line of code that reduces divisor by a factor of 10 */
			/* Write a line of code that increases multiplier by a factor of 10 */
		} // end if
		else // else, no digit
			divisor /= 10; // update divisor
	} // end while
	
	reverse += n * multiplier;
	eturn reverse; // return reversed number
} // end function reverseDigits
```

###Problem-Solving Tips
1. This problem requires that one integer be input by the user.
2. You should write a function called reverseDigits that takes the four-digit number as an argument.
3. The algorithm for reverseDigits is as follows: Using a while loop, isolate each individual digit and
store it in its reverse position. This task is accomplished by dividing the number by divisor to get one
digit and multiplying the number by its new position (e.g., one’s position, ten’s position, etc.). For ex-
ample, the first digit is multiplied by one, the second digit is multiplied by ten, etc.
4. In the body of the loop, during each iteration, the number must be reduced by a factor of 10, the di-
visor must be reduced by a factor of 10 and the multiplier must be increased by a factor of 10.
5. Be sure to follow the spacing and indentation conventions mentioned in the text.
6. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Questions and Activities
1. Add code to main so that it reverses number twice (i.e., reverse it once, then reverse the result of the first func-
tion call). Do not store the value of number after it has been reversed once. Is the number that has been re-
versed twice equal to the original number?
2. What happens if divisor is initialized to 100 instead of 1000? Try to solve this problem on paper first; then
compare your answer with the one given by the computer. Are they the same?
3. Rewrite reverseDigits to take its arguments pass-by-reference. It should no longer return a value; it should
just modify the number it is passed. [Note: This problem is intended for students who have studied pass-by-
reference in Section 6.14 in C++ How to Program, Seventh Edition.]


##Lab Exercise 3 — Greatest Common Divisor
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 6.3)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 6 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Writing function prototypes to specify the name of the function, the type of data returned by the func-
   tion, the number of parameters the function expects to receive, the types of the parameters and the order
  in which the parameters are expected.
* Passing multiple arguments to a function.

The follow-up questions and activities also will give you practice:

* Using the conditional operator (?:).
* Passing arguments by reference.

###Description of the Problem
The greatest common divisor (GCD) of two integers is the largest integer that evenly divides into each of the two
integers. Write a function gcd that returns the greatest common divisor of two integers.

###Sample Output
```
Enter two integers: 6 8
The greatest common divisor of 6 and 8 is 2

Enter two integers: 789 4
The greatest common divisor of 789 and 4 is 1

Enter two integers: 9999 27
The greatest common divisor of 9999 and 27 is 9

Enter two integers: 73652 8
The greatest common divisor of 73652 and 8 is 4

Enter two integers: 99 11
The greatest common divisor of 99 and 11 is 11
```

Template
```C
// Lab 3: gcd.cpp
// Finds greatest common divisor (GCD) of 2 inputs.
#include <iostream>
using namespace std;

/* Write prototype for gcd */

int main()
{
	int a; // first number
	int b; // second number

	// loop for 5 pairs of inputs
	for ( int j = 1; j <= 5; j++ )
	{
		cout << "Enter two integers: ";
		cin >> a >> b;
		
		cout << "The greatest common divisor of " << a << " and " << b << " is ";
		
		// find greatest common divisor of a and b
		cout << /* Write call for gdc */ << endl;
	} // end for
} // end main

// gcd finds greatest common divisor of x and y
/* Write header for gcd */
{
	int greatest = 1; // current greatest common divisor, 1 is minimum
	
	// loop from 2 to smaller of x and y
	for ( int i = 2; i <= ( ( x < y ) ? x : y ); i++ )
	{
		// if current i divides both x and y
		if ( /* Write condition to determine if both x and y are divisible by i */ )
			greatest = i; // update greatest common divisor
	} // end for

	/* Write a statement to return greatest */
} // end function gcd
```

###Problem-Solving Tips
1. The program requires that two integers be input. Write a loop that allows several pairs of integers to be
input during execution. This will allow you to test the program more thoroughly.
2. The program should contain one function gcd that implements the greatest-common-divisor algo-
rithm. Every value up to and including the smallest of the two numbers must be divided into both the
numbers. Use the modulus operator to check for a remainder. If the remainder is zero for both numbers,
a common divisor has been found. Return the greatest common divisor from the function.
3. Be sure to follow the spacing and indentation conventions mentioned in the text.
4. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Questions and Activities
1. Rewrite the for loop in your solution that corresponds to line 37 in the program template so that it does
not use the conditional operator (?:). [Hint: You will need to use the logical AND operator (&&).]
2. Create another function called input, that receives references to two integer variables and replaces their val-
ues with two values input by the user. Use this function to input the values for a and b.

