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

Follow-Up Questions and Activities
1. Modify your solution to use three separate input statements rather than one. Write a separate prompt for
each cin.
2. Does it matter whether 

##Lab Exercise 2 — Multiples


