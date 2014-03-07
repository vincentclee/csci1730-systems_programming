##Lab Exercise 1 — Sum, Average, Product, Smallest and Largest

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 2.3)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 2 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using cout to output text and variables.
* Using cin to input data from the user.
* Using if statements to make decisions based on the truth or falsity of a condition.
* Using the arithmetic operators to perform calculations.
* Using relational operators to compare values.

The follow-up questions and activities also will give you practice:
* Comparing < to <=.
* Modifying existing code to perform the same task in a different manner.

###Description of the Problem
Write a program that inputs three integers from the keyboard, and prints the sum, average, product, smallest
and largest of these numbers. The screen dialogue should appear as follows: [Note: 13, 27 and 14 are input by
the user.]

###Sample Output
```
Input three different integers: 13 27 14
Sum is 54
Average is 18
Product is 4914
Smallest is 13
Largest is 27
```

###Template
```C
// Lab 1: numbercompare.cpp
#include <iostream> // allows program to perform input and output
using namespace std;

int main()
{
	int number1; // first integer read from user
	int number2; // second integer read from user
	int number3; // third integer read from user
	int smallest; // smallest integer read from user
	int largest; // largest integer read from user

	cout << "Input three different integers: "; // prompt
	/* Write a statement to read in values for number1, number2 and number3 using a single input statement */

	largest = number1; // assume first integer is largest

	/* Write a statement to determine if number2 is greater than largest. If so assign number2 to largest */

	/* Write a statement to determine if number3 is greater than largest. If so assign number3 to largest */

	smallest = number1; // assume first integer is smallest

	/* Write a statement to determine if number2 is less than smallest. If so assign number2 to smallest */

	/* Write a statement to determine if number3 is less than smallest. If so assign number3 to smallest */

	/* Write an output statement that prints the sum, average, product, largest and smallest */
} // end main
```

###Problem-Solving Tips
1. Prompt the user to input three integer values. You will use a single input statement to read all three
values.
2. Sometimes it is useful to make an assumption to help solve or simplify a problem. For example, we as-
sume number1 is the largest of the three values and assign it to largest. You will use if statements to
determine whether number2 or number3 are larger.
3. Using an if statement, compare largest to number2. If the content of number2 is larger, then store the
variable’s value in largest.
4. Using an if statement, compare largest to number3. If the content of number3 is larger, then store the
variable’s value in largest. At this point you are guaranteed to have the largest value stored in largest.
5. Perform similar steps to those in Steps 2–4 to determine the smallest value.
6. Write a statement that outputs the sum, average, product (i.e., multiplication), largest and smallest values.
7. Be sure to follow the spacing and indentation conventions mentioned in the text.
8. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Questions and Activities
1. Modify your solution to use three separate input statements rather than one. Write a separate prompt for
each cin.
2. Does it matter whether 

##Lab Exercise 2 — Multiples

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 2.4)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 2 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using cout to output text and values.
* Using cin to input data from the user.
* Using if statements to make decisions based on the truth or falsity of a condition.
* Using the modulus operator (%) to determine the remainder of an integer division operation.

The follow-up questions and activities also will give you practice:

* Understanding the modulus operator.
* Recognizing common mistakes with the if statement.
* Adapting a program to solve a similar problem.

###Description of the Problem
Write a program that reads in two integers and determines and prints whether the first is a multiple of the second.
[Hint: Use the modulus operator.]

###Sample Output
```
Enter two integers: 22 8
22 is not a multiple of 8
```
###Template
```C
// Lab 2: multiples.cpp
#include <iostream> // allows program to perform input and output
using namespace std;

int main()
{
	/* Write variables declarations here */
	
	cout << "Enter two integers: "; // prompt
	/* Write an input statement to read data into variables here */
	
	// using modulus operator
	if ( /* Write a condition that tests whether number1 is a multiple of number2 */)
		cout << number1 << " is a multiple of " << number2 << endl;

	if ( /* Write a condition that tests whether number1 is not a multiple of number2 */ )
		cout << number1 << " is not a multiple of " << number2 << endl;
} // end main
```

###Problem-Solving Tips
1. The input data consists of two integers, so you will need two int variables to store the input values.
2. Use cin to read the user input into the int variables.
3. Use an if statement to determine whether the first number input is a multiple of the second number
input. Use the modulus operator, %. If one number divides into another evenly, the modulus operation
results in 0. If the result is 0, display a message indicating that the first number is a multiple of the second
number.
4. Use an if statement to determine whether the first number input is not a multiple of the second number
input. If one number does not divide into another evenly, the modulus operation results in a non-zero
value. If non-zero, display a message indicating that the first number is not a multiple of the second.
5. Be sure to follow the spacing and indentation conventions mentioned in the text.
6. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Questions and Activities
1. Can the modulus operator be used with non-integer operands? Can it be used with negative numbers? What
is output by each expression in Fig. L 2.5? If there is an error, explain why.
2. Place a semicolon at the end of the if statement in your solution that corresponds to the if statement in
lines 16–18 in the template. What happens? Explain.
3. Rewrite the output statement in your solution that corresponds to the output statement in line 15 in the
template. This statement should now look as follows:
```C
cout << number1;
cout << " is a multiple of ";
cout << number2 << endl;
```
Rerun the program and observe the differences. Why is the output different?
4. Modify the program to determine whether a number entered is even or odd. [Note: Now, the user needs to
enter only one number.]
