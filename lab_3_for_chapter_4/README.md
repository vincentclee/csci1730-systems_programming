##Lab Exercise 1—Department Store
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 4.1)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 4 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using sentinel-controlled repetition.
* Using selection structures.

The follow-up questions and activities also will give you practice:
* Recognizing invalid user input.

###Description of the Problem
Develop a C++ program that will determine whether a department-store customer has exceeded the credit limit
on a charge account. For each customer, the following information is available:

1. Account number (an integer);
2. Balance at the beginning of the month;
3. Total of all items charged by the customer this month;
4. Total of all credits applied to the customer’s account this month;
5. Allowed credit limit.

The program should use a while loop to input each of these facts, calculate the new balance (= beginning balance + charges – credits) and determine whether the new balance exceeds the customer’s credit limit. For those cus-
tomers whose credit limit is exceeded, the program should display the customer's account number, credit limit,
new balance and the message "Credit Limit Exceeded."

###Sample Output
```
Enter account number (-1 to end): 100
Enter beginning balance: 5394.78
Enter total charges: 1000.00
Enter total credits: 500.00
Enter credit limit: 5500.00
New balance is 5894.78
Account:
100
Credit limit: 5500.00
Balance:
5894.78
Credit Limit Exceeded.
Enter account number (-1 to end): 200
Enter beginning balance: 1000.00
Enter total charges: 123.45
Enter total credits: 321.00
Enter credit limit: 1500.00
New balance is 802.45
Enter account number (-1 to end): 300
Enter beginning balance: 500.00
Enter total charges: 274.73
Enter total credits: 100.00
Enter credit limit: 800.00
New balance is 674.73
Enter account number (-1 to end): -1
```

###Template
```C
// Lab 1: customerCredit.cpp
// Create Credit object and invoke its calculateBalance function.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
	int account; // account number
	/* Write declarations for four double variables: balance, charges, credits and creditLimit */
	
	cout << "Enter account number (-1 to end): ";
	/* Write code to read the customer's account number */

	// set floating-point number format
	/* Write code to use the stream manipulators fixed and setprecision to set the floating-point number format */

	// exit if the input is -1 otherwise, proceed with the program
	/* Write a while loop with a condition that tests for the sentinel value */
	{
		/* Write code to prompt for and input the customer's balance */

		/* Write code to prompt for and input the customer's charges */
		
		/* Write code to prompt for and input the customer's credits */
		
		/* Write code to prompt for and input the customer's credit limit */

		// calculate and display new balance
		/* Write a statement to calculate the customer's new balance */
		/* Display the new balance */
		
		// display a warning if the user has exceed the credit limit
		/* Write an if statement to determine whether the credit limit is exceeded */
			/* Display a message if the credit limit was exceeded */
		
		cout << "\n\nEnter Account Number (or -1 to quit): ";
		/* Write code to input the next account number */
	} // end while
} // end main
```

###Problem-Solving Tips
1. Notice that the number of customers is not specified in advance. The problem statement implies that
you should use a sentinel-controlled the loop.
2. The input data consists of one integer and four monetary amounts. The monetary amounts are numbers
with decimal points, so you will use type double to represent them.
3. You will use a while loop to process several sets of customer data.
4. What sentinel value should you use? It needs to be a value that will not be confused with a legitimate
data value. A good choice for this program would be to use -1 for the customer’s account number, be-
cause account numbers are nonnegative integers.
5. Before the loop, you will prompt for the account. Inside the loop, you will prompt for the monetary
amounts. It is a good practice to remind the user of the sentinel value in each prompting message. After
processing the data, you obtain the next account number.
6. While you could prompt each time for all five facts needed for a customer, a better strategy would be to
prompt just for the account number. If it is negative, terminate the loop. If it is nonnegative, prompt
for the remaining four pieces of data for that customer.
7. How do you determine whether the new balance exceeds the credit limit? You have already input the
credit limit, but you will need to calculate the new balance which is equal to the starting balance, plus
the charges, minus the credits.
8. Be sure to follow the spacing and indentation conventions mentioned in the text. Before and after each
control statement, place a line of vertical space to make the control statement stand out. Indent all the
body statements of main, and indent all the body statements of each control statement.
9. Print your outputs neatly in the indicated format. Use setprecision( 2 ) to force two positions of pre-
cision to the right of the decimal point when printing monetary amounts. You will need to
`#include <iomanip> to use function setprecision( 2 ).`
10. Also remember to use the fixed manipulator. This manipulator specifies that the number output
should be output in fixed notation, as opposed to scientific. Fixed notation always keeps a “fixed” decimal point, regardless of the number of digits displayed. For example,
1.50000000000 is expressed in fixed notation. Scientific notation displays numbers in a format such as
1.5E+10.
11. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Questions and Activities
1. Execute the program, and enter a floating-point number when you are prompted for an account number.
Observe what happens. You are no longer asked to input a beginning balance. Your output screen may
resemble the output accompanying this question. Instead, the program prompts you to enter only total
charges, total credits and credit limit. Why does this situation occur?

```
Enter account number (-1 to end): 123.456
Enter beginning balance: Enter total charges:
```

2. Why is it necessary to ask the user to input the first account number before you begin the while loop? What
problems could occur if the user were asked for an account number only inside the while loop?


##Lab Exercise 2 — Payroll
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 4.2)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 4 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using sentinel-controlled repetition.
* Using if...else selection statements.

The follow-up questions and activities also will give you practice:

* Experimenting with <iomanip>.
* Using nested if...else statements.

###Description of the Problem
Develop a C++ program that uses a while statement to determine the gross pay for each of several employees.
The company pays “straight time” for the first 40 hours worked by each employee and pays “time-and-a-half”
for all hours worked in excess of 40 hours. You are given a list of the employees of the company, the number of
hours each employee worked last week and the hourly rate of each employee. Your program should input this
information for each employee and should determine and display the employee's gross pay.

###Sample Output
```
Enter hours worked (-1 to end): 39
Enter hourly rate of the worker ($00.00): 10.00
Salary is $390.00
Enter hours worked (-1 to end): 40
Enter hourly rate of the worker ($00.00): 10.00
Salary is $400.00
Enter hours worked (-1 to end): 41
Enter hourly rate of the worker ($00.00): 10.00
Salary is $415.00
Enter hours worked (-1 to end): -1
```

###Template
```C
// Lab 2: Payroll.cpp
// Calculate wages for a payroll.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std;

int main()
{
	/* Write declarations for hours, rate and salary */

	// processing phase
	// get first employee's hours worked
	cout << "Enter hours worked (-1 to end): ";
	in >> hours;

	// set floating-point number format
	/* Write code to use the stream manipulators fixed and setprecision to set the floating-point number format */

	// loop until sentinel value read from user
	/* Write the while loop */
	{
		// get hourly rate
		/* Write code to prompt for and input hourly rate */

		// if employee worked less than 40 hours
		/* Write code to determine whether hours worked was less than or equal to 40 and if so, calculate base pay. If not, calculate base + overtime pay */
		
		/* Write code to display the salary */
		// prompt for next employee's data
		cout << "\n\nEnter hours worked (-1 to end): ";
		cin >> hours;
	} // end while
} // end main
```

###Problem-Solving Tips
1. Notice that the number of employees is not specified in advance. The problem statement implies that
you should use a sentinel value to control the loop.
2. The input data consists of two doubles per employee, one for the number of hours worked and one for
the hourly rate.
3. You will use a while loop to process several sets of employee data.
4. Before the loop, you will prompt for the number of hours worked. Inside the loop, you will prompt for
the hourly rate. It is a good programming practice to remind the user of the sentinel value in each
prompting message. After processing the data, you obtain the next employee’s number of hours worked.
5. What sentinel value should you use? It needs to be a value that will not be confused with one of the
legitimate data input values. A good choice for this program would be to use –1 for the employee’s num-
ber of hours worked, because the number of hours worked must be a nonnegative value.
6. While you could prompt each time for both pieces of information needed for a customer, a better strat-
egy would be to prompt just for the number of hours worked. If it is -1, terminate the loop. If it is not
-1, prompt for the remaining piece of data for that employee, namely, the hourly rate.
7. How do you calculate the pay for each employee? If the person worked 40 hours or less, multiply the
number of hours worked times the hourly salary; otherwise (else), calculate the pay by multiplying 40
times the hourly salary rate and adding to this value to the number of overtime hours times the overtime
rate. The number of overtime hours is the number of hours in excess of the first 40 hours worked (i.e.,
hours – 40), and the overtime salary is 1.5 times the hourly rate.
8. Be sure to follow the spacing and indentation conventions mentioned in the text. Before and after each
control statement, place a line of vertical space to make the control statement stand out. Indent all the
body statements of main and indent all of the body statements of each control statement.
9. Print your outputs neatly in the indicated format. Remember to use setprecision( 2 ) to force two
positions of precision to the right of the decimal point when printing monetary amounts. You will need
to #include <iomanip> to use function setprecision( 2 ).
10. Also remember to use manipulator fixed. This manipulator specifies that the number output should
be output in fixed notation, as opposed to scientific notation (scientific). Fixed notation always keeps
a “fixed” decimal point, regardless of the number of digits displayed. For example, 1.50000000000 is
expressed in fixed notation. Scientific notation displays numbers in a format such as 1.5E+10.
11. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Questions and Activities
1. Remove the setprecision manipulator on line 23. The line should now read as follows:
`cout << fixed;`  
Run the program again. Compare the output with the prior output. What are the differences? What is the
default precision?
2. Modify the code so that if an employee works exactly 55 hours, that employee receives a $100 bonus, but
no longer receives overtime for the number of hours worked over 40. Make an additional modification that
if the employee works 75 hours or more, that employee receives a $1000 bonus in addition to overtime. De-
termining how to nest the if...else structures properly might seem complicated. It is recommended that
your code resemble the following pseudocode:  

```
If worked 40 hours or less
	Calculate salary
Else
	Calculate base salary for 40 hours

	If worked 55 hours
		Add a $100 bonus to base salary
	Else
		Add overtime salary to base salary

	If worked 75 hours or more
		Add a $1000 bonus to base salary
```

Test your code based on an hourly rate of $10. How much does someone who worked exactly 55 hours earn?
How much does someone who worked 56 hours earn? How much does someone who worked 75 hours earn?


##Lab Exercise 3 — Square of Asterisks
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 4.5)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 4 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using counter-controlled repetition.
* Nesting while loops.

The follow-up question and activity also will give you practice:

* Modifying nested while loops.

###Description of the Problem
Write a program that reads in the size of the side of a square and then prints a hollow square of that size out of
asterisks and blanks. Your program should work for squares of all side sizes between 1 and 20. For example, if
your program reads a size of 5, it should print.
```
*****
*   *
*   *
*   *
*****
```

###Sample Output
```
Enter length of side: 8
********
*      *
*      *
*      *
*      *
*      *
*      *
********
```

###Template
```C
// Lab 3: Asterisks.cpp
// Draw a square of asterisks.
#include <iostream>
using namespace std;

int main()
{
	int stars; // number of stars on a side
	int column; // the current column of the square being printed
	int row = 1; // the current row of the square being printed

	// prompt and read the length of the side from the user
	cout << "Enter length of side: ";
	cin >> stars;

	// valid input, if invalid, set to default
	/* Write an if statement to test whether stars is less than 1 */
	{
		stars = 1;
		cout << "Invalid Input\nUsing default value 1\n";
	} // end if

	/* Write an else if statement to test whether stars is greater than 20 */
	{
		stars = 20;
		cout << "Invalid Input\nUsing default value 20\n";
	} // end else if

	// repeat for as many rows as the user entered
	/* Write a while statement to count rows */
	{
		column = 1;
		
		// and for as many columns as rows
		/* Write a while statement to count columns */
		{
			/* Write a series of if, else if, ... statements to determine whether an asterisk or a space should be displayed at this position in the square */
			/* Increment the column counter */
		} // end inner while

		cout << endl;
		/* Increment the row counter */
	} // end outer while
} // end main
```

###Problem-Solving Tips
1. To display your hollow square, you will need two nested while loops, one of which will iterate over the
rows of the square and the other of which will iterate over the columns of the square.
2. Inside the outer while loop, you should initialize the counter variable for the inner while loop, perform
the inner while loop and then output a newline.
3. Inside the inner while loop, you should display one character, an asterisk if this position occurs in the
first row, last row, first column or last column, or a space otherwise.
4. Be sure to follow the spacing and indentation conventions mentioned in the text. Before and after each
control statement, place a line of vertical space to make the control statement stand out. Indent all the
body statements of main, and indent all the body statements of each control statement.
5. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Question and Activity
1. Modify your program so that the user enters two integers, each between 1 and 20, inclusive. The program
will then display a rectangle of asterisks, using the first integer as the number of rows and the second integer
as the number of columns.

