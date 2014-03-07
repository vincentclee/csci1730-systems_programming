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
a) Account number (an integer);
b) Balance at the beginning of the month;
c) Total of all items charged by the customer this month;
d) Total of all credits applied to the customer’s account this month;
e) Allowed credit limit.

The program should use a while loop to input each of these facts, calculate the new balance (= beginning balance
+ charges – credits) and determine whether the new balance exceeds the customer’s credit limit. For those cus-
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
/* Write declarations for four double variables:
balance, charges, credits and creditLimit */
cout << "Enter account number (-1 to end): ";
/* Write code to read the customer's account number */
// set floating-point number format
/* Write code to use the stream manipulators fixed and
setprecision to set the floating-point number format */
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

Problem-Solving Tips
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
#include <iomanip> to use function setprecision( 2 ).
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

