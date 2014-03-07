##Lab Exercise 1—Integer Average

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 5.1)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 5 of C++ How To Program, Seventh Edi-
tion. In this lab, you’ll practice:

* Using sentinel-controlled repetition with a for loop.

The follow-up question and activity also will give you practice:

* Using counter-controlled repetition with a for loop.

###Description of the Problem
Write a program that uses a for statement to calculate and print the average of several integers. Assume the last
value read is the sentinel 9999. A typical input sequence might be

`10 8 11 7 9 9999`

indicating that the program should calculate the average of all the values preceding 9999.

###Sample Output
```
Enter integers (9999 to end):
10 8 11 7 9 9999
The average is: 9
```

###Template
```C
// Lab 1: IntegerAverage.cpp
// Calculate the average of several integers.

#include <iostream>
using namespace std;
int main()
{
	int value; // current value
	int count = 0; // number of inputs
	int total; // sum of inputs

	// prompt for input
	cout << "Enter integers (9999 to end):" << endl;
	cin >> value;

	// loop until sentinel value read from user
	* Write a for header to initialize total to 0 and loop until value equals 9999 */
	{
		/* Write a statement to add value to total */
		/* Write a statement to increment count */
		
		cin >> value; // read in next value
	} // end for
	
	// if user entered at least one value
	if ( count != 0 )
		cout << "\nThe average is: " << /* Convert total to a double and divide it by count */ << endl;
	else
		cout << "\nNo values were entered." << endl;
} // end main
```

###Problem-Solving Tips
1. When used for sentinel-controlled repetition, a for loop can be written much like a while loop, using
the same loop-continuation condition as a while loop.
2. When performing sentinel-controlled repetition, a for loop does not need to increment any counter
variable. But it can still initialize a variable if so desired.
3. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Question and Activity
1. Modify the program to perform counter-controlled repetition. Assume that the first integer entered by the
user represents the number of subsequent integers that the user will input to be averaged.


##Lab Exercise 2 — Asterisk Triangles

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 5.2)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 5 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using counter-controlled repetition with for loops.
* Using nested for loops.

The follow-up question and activity also will give you practice:

* Using nested for loops.

###Description of the Problem
Write a program that uses for statements to print the following patterns separately, one below the other. Use
for loops to generate the patterns. All asterisks (*) should be printed by a single statement of the form cout <<
'*'; (this causes the asterisks to print side by side). [Hint: The last two patterns require that each line begin with
an appropriate number of blanks.]
```
(a)
*
**
***
****
*****
******
*******
********
*********
**********
(b)
**********
*********
********
*******
******
*****
****
***
**
*
(c)
**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
(d)
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
```

###Sample Output
```
*
**
***
****
*****
******
*******
********
*********
**********

**********
*********
********
*******
******
*****
****
***
**
*

**********
 *********
  ********
   *******
    ******
     *****
      ****
       ***
        **
         *
         
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 *********
**********
```

###Template
```C
// Lab 2: AsteriskTriangles.cpp
// Draw four triangles composed of asterisks.

#include <iostream>
using namespace std;

int main()
{
	int row; // the row position
	int column; // the column position
	int space; // number of spaces to print
	
	// first triangle
	/* Write a for header to iterate row from 1 to 10 */
	{
		/* Write a for header to iterate column from 1 to row */
			cout << "*";
		
		cout << endl;
	} // end for

	cout << endl;

	// second triangle
	/* Write a for header to iterate row from 10 down to 1 */
	{
		/* Write a for header to iterate column from 1 to row */
			cout << "*";
		
		cout << endl;
	} // end for
	
	cout << endl;

	// third triangle
	/* Write a for header to iterate row from 10 down to 1 */
	{
		/* Write a for header to iterate space from 10 down to one more than row */
			cout << " ";
		
		/* Write a for header to iterate column from 1 to row */
			cout << "*";
		
		cout << endl;
	} // end for

	cout << endl;

	// fourth triangle
	/* Write a for header to iterate row from 10 down to 1 */
	{
		/* Write a for header to iterate space from 1 to one less than row */
			cout << " ";
		
		/* Write a for header to iterate column from 10 down to row */
			cout << "*";
		
		cout << endl;
	} // end for
} // end main
```

###Problem-Solving Tips
1. Use nested for loops—the outer loop will iterate over the rows and the inner loop will iterate over the
columns.
2. For pattern (a), simply output as many asterisks for each row as that row number.
3. For pattern (b), have the row counter count backwards from 10 to 1 and output as many asterisks for
each row as that row number.
4. For pattern (c), have the row counter count backwards from 10 to 1 and output 10
by row asterisks.
- row spaces followed
5. For pattern (d), have the row counter count backwards from 10 to 1 and output row
by 10 - row + 1 asterisks.
- 1 spaces followed
6. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Question and Activity
1. Combine your code from the four separate problems into a single program that prints all four patterns side
by side by making clever use of nested for loops.


##Lab Exercise 3 — Pythagorean Triples
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 5.3)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 5 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using counter-controlled repetition.
* Using “brute force” to solve a problem.
* Nesting for loops.

The follow-up questions and activities will also give you practice:

* Using break statements.
* Using continue statements.
* Using long integers.

###Description of the Problem
A right triangle can have sides that are all integers. A set of three integer values for the sides of a right triangle is
called a Pythagorean triple. These three sides must satisfy the relationship that the sum of the squares of two of
the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for side1, side2 and hypotenuse
all no larger than 500. Use a triple-nested for loop that tries all possibilities. This is an example of “brute force
computing.” You will learn in more advanced computer-science courses that there are many interesting problems
for which there is no known algorithmic approach other than using sheer brute force.

###Sample Output
```
Side 1  Side 2  Side3
3       4       5
5       12      13
6       8       10
7       24      25
8       15      17

...

300     400     500
319     360     481
320     336     464
325     360     485
340     357     493
A total of 386 triples were found.
```

###Template
```C
// Lab 3: pythagorean.cpp
// Find Pythagorean triples using brute force computing.
#include <iostream>
using namespace std;

int main()
{
	int count = 0; // number of triples found
	long int hypotenuseSquared; // hypotenuse squared
	long int sidesSquared; // sum of squares of sides

	cout << "Side 1\tSide 2\tSide3" << endl;
	
	// side1 values range from 1 to 500
	/* Write a for header for side1 */
	{
		// side2 values range from current side1 to 500
		/* Write a for header for side2 */
		{
			// hypotenuse values range from current side2 to 500
			/* Write a for header for hypotenuse */
			{
				// calculate square of hypotenuse value
				/* Write a statement to calculate hypotenuseSquared */

				// calculate sum of squares of sides
				/* Write a statement to calculate the sum of the sides Squared */
				
				// if (hypotenuse)^2 = (side1)^2 + (side2)^2,
				// Pythagorean triple
				if ( hypotenuseSquared == sidesSquared )
				{
					// display triple
					cout << side1 << '\t' << side2 << '\t' << hypotenuse << '\n';
					++count; // update count
				} // end if
			} // end for
		} // end for
	} // end for

	// display total number of triples found
	cout << "A total of " << count << " triples were found." << endl;
} // end main
```

###Problem-Solving Tips
1. This program does not require any input from the user.
2. This program can take a significant amount of time to run, depending on your computer’s processor
speed. If you have a CPU monitor available on your system, it is worth taking a look at it when this
program executes.
3. Do not be concerned that you are trying values that do not seem to make sense, such as a 1–1–500 tri-
angle. Remember that brute-force techniques try all possible values.
4. The formula for the Pythagorean Theorem is hypotenuse2 = (side1)2 + (side2)2.
5. To avoid producing duplicate Pythagorean triples, start the second for loop at side2 = side1 and the
third for loop at hypotenuse = side2. This way, when a Pythagorean triple is found, side1 will be the
shortest side of the triangle and hypotenuse will be the longest side.
6. Be sure to follow the spacing and indentation conventions mentioned in the text. Before and after each
control statement, place a line of vertical space to make the control statement stand out. Indent all the
body statements of main, and indent all of the body statements of each control statement.
7. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Questions and Activities
1. How many times did this program execute the innermost for loop? Add another counter to the program
that counts the number of times this loop iterates. Declare a new variable of type long, named loopCounter
and initialize it to 0. Then add a statement in the innermost for statement that increments loopCounter by
	1. Before exiting the program, print the value of loopCounter. Do the numbers match?
2. Add a break statement to the program inside the innermost for loop. This break statement should be called
after the 20th Pythagorean triple is found. Explain what happens to the program after the 20th triple is
found. Are all three for loops exited, or just the innermost one? What happens when the break statement
is placed inside the middle loop? The outermost loop?
3. Add a continue statement to the program that prevents a Pythagorean triple from being found when side1
is equal to 8. Using your solution to Follow-Up Question 1, calculate how many times this new program ex-
ecutes the innermost for loop. Explain why the continue statement affected the output.
4. Explain why a long variable is used for hypotenuseSquared and sideSquared. Modify the program so that
they are both of type short instead of type long. Rerun the program. What happens?


