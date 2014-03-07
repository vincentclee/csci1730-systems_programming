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

##Lab Exercise 3 — Separating Digits

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 2.6)
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

* Using the modulus operator (%) to determine the remainder of a division operation.
* Integer division, which differs from floating-point division because integer division truncates the deci-
   mal portion of the result.

The follow-up questions and activities also will give you practice:

* Using the division and modulus operators.
* Examining what happens during program execution when the user enters invalid input.
* Adapting a program to solve a similar problem.

###Problem Description
Write a program that inputs a five-digit number, separates the number into its individual digits and prints the
digits separated from one another by three spaces each. [Hint: Use integer division and the modulus operator.]
For example, if the user inputs 42339, the program should print what is shown in the sample output.

###Sample Output
```
4  2  3  3  9
```

###Template
```C
// Lab 3: digits.cpp
#include <iostream> // allows program to perform input and output
using namespace std;

int main()
{
	int number; // integer read from user
	
	cout << "Enter a five-digit integer: "; // prompt
	cin >> number; // read integer from user

	/* Write a statement to print the left-most digit of the 5-digit number */
	/* Write a statement that changes number from 5-digits to 4-digits */
	/* Write a statement to print the left-most digit of the 4-digit number */
	* Write a statement that changes number from 4-digits to 3-digits */
	* Write a statement to print the left-most digit of the 3-digit number */
	* Write a statement that changes number from 3-digits to 2-digits */
	* Write a statement to print the left-most digit of the 2-digit number */
	* Write a statement that changes number from 2-digits to 1-digit */
	out << number << endl;
} // end main
```

###Problem-Solving Tips
1. The input data consists of one integer, so you will use an int variable (number) to represent it. Note that
the description indicates that one five-digit number is to be input—not five separate digits.
2. You will use a series of statements to “break down” the number into its individual digits using modulus
(%) and division (/) calculations.
3. After the number has been input using cin, divide the number by 10000 to get the leftmost digit. Why
does this work? In C++, dividing an integer by an integer results in an integer. For example, 42339 /
10000 evaluates to 4 because 10000 divides evenly into 42339 four times. The remainder 2339 is trun-
cated.
4. Change the number to a 4-digit number using the modulus operator. The number modulus 10000 eval-
uates to the integer remainder—in this case, the right-most four digits. For example, 42339 % 10000 re-
sults in 2339. Assign the result of this modulus operation to the variable that stores the five-digit number
input.
5. Repeat this pattern of division and modulus reducing the divisor by a factor of 10 each time (i.e., 1000,
100, 10). After the number is changed to a four-digit number, divide/modulus by 1000. After the num-
ber is changed to a three-digit number, divide/modulus by 100. And so on.
6. Be sure to follow the spacing and indentation conventions mentioned in the text.
7. If you have any questions as you proceed, ask your lab instructor for assistance.

###Follow-Up Questions and Activities
1. What are the results of the following expressions?  
24 / 5 =  
18 % 3 =  
13 % 9 =  
13 / 2 % 2 =
2. What happens when the user inputs a number which has fewer than five digits? Why? What is the output
when 1763 is entered?
3. The program you completed in this lab exercise inputs a number with multiple digits and separates the dig-
its. Write the inverse program, a program which asks the user for three one-digit numbers and combines
them into a single three-digit number. [Hint: Use multiplication and addition to form the three-digit num-
ber.]


