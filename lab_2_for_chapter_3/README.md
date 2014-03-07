##Lab Exercise 1 — Modifying Class Account

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 3.1–Fig. L 3.3)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 3 of C++ How to Program, Seventh Edi-
tion. In this lab, you will practice:

* Creating member functions.
* Invoking functions and receiving return values from functions.
* Testing a condition using an if statement.
* Outputting variables with stream insertion and the cout object.

###Description of the Problem
Modify class Account (Fig. L 3.1 and Fig. L 3.2) to provide a member function called debit that withdraws
money from an Account. Ensure that the debit amount does not exceed the Account’s balance. If it does, the
balance should be left unchanged and the function should print a message indicating "Debit amount exceeded
account balance." Modify class AccountTest (Fig. L 3.3) to test member function debit.

###Sample Output
```
account1 balance: $50.00
account2 balance: $0.00
Enter withdrawal amount for account1: 25
subtracting 25 from account1 balance
account1 balance: $25
account2 balance: $0.00
Enter withdrawal amount for account2: 10
subtracting 10 from account2 balance
Debit amount exceeded account balance.
account1 balance: $25
account2 balance: $0
```

###Program Template
```C
// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
Account( int ); // constructor initializes balance
	void credit( int ); // add an amount to the account balance
	/* write code to declare member function debit. */
	int getBalance(); // return the account balance
private:
	int balance; // data member that stores the balance
}; // end class Account
```

```C
// Lab 1: Account.cpp
// Member-function definitions for class Account.
#include <iostream>
using namespace std;

#include "Account.h" // include definition of class Account

// Account constructor initializes data member balance
Account::Account( int initialBalance )
{
	balance = 0; // assume that the balance begins at 0

	// if initialBalance is greater than 0, set this value as the
	// balance of the Account; otherwise, balance remains 0
	if ( initialBalance > 0 )
		balance = initialBalance;
	
	// if initialBalance is negative, print error message
	if ( initialBalance < 0 )
		cout << "Error: Initial balance cannot be negative.\n" << endl;
} // end Account constructor

// credit (add) an amount to the account balance
void Account::credit( int amount )
{
	balance = balance + amount; // add amount to balance
} // end function credit

/* write code to define member function debit. */

// return the account balance
int Account::getBalance()
{
	return balance; // gives the value of balance to the calling function
} // end function getBalance
```

```C
// Lab 1: AccountTest.cpp
// Create and manipulate Account objects.
#include <iostream>
using namespace std;

// include definition of class Account from Account.h
#include "Account.h"

// function main begins program execution
int main()
{
	Account account1( 50 ); // create Account object
	Account account2( 0 ); // create Account object

	// display initial balance of each object
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;

	int withdrawalAmount; // stores withdrawal amount read from user

	cout << "\nEnter withdrawal amount for account1: "; // prompt
	cin >> withdrawalAmount; // obtain user input
	cout << "\nsubtracting " << withdrawalAmount << " from account1 balance\n\n";
	/* write code to withdraw money from account1 */

	// display balances
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
	cout << "\nEnter withdrawal amount for account2: "; // prompt
	cin >> withdrawalAmount; // obtain user input
	cout << "\nsubtracting " << withdrawalAmount << " from account2 balance\n\n";
	/* write code to withdraw money from account2 */

	// display balances
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
} // end main
```

###Problem-Solving Tips
1. Declare public member function debit with a return type of void.
2. Use a parameter to enable the program to specify the amount the user wishes to withdraw.
3. In the body of member function debit, use an if statement to test whether the withdrawal amount is
more than the balance. Output an appropriate message if the condition is true.
4. Use another if statement to test whether the withdrawal amount is less than or equal to the balance.
Decrement the balance appropriately.
5. Be sure to follow the spacing and indentation conventions mentioned in the text.
6. If you have any questions as you proceed, ask your lab instructor for help.


##Lab Exercise 2 — Modifying class GradeBook
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Problem of the Description
3. Sample Output
4. Program Template (Fig. L 3.4, Fig. L 3.5 and Fig. L 3.6)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description, and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 3 of C++ How to Program, Seventh Edi-
tion. In this lab, you will practice:

* Declaring data members.
* Providing set and get functions to manipulate a data member’s value.
* Declaring member functions with parameters.

###Description of the Problem
Modify class GradeBook (Fig. L 3.4 and Fig. L 3.6). Include a second string data member that represents the
name of the course’s instructor. Provide a set function to change the instructor’s name and a get function to re-
trieve it. Modify the constructor to specify two parameters—one for the course name and one for the instructor’s
name. Modify member function displayMessage such that it first outputs the welcome message and course
name, then outputs "This course is presented by: " followed by the instructor’s name. Modify the test ap-
plication (Fig. L 3.6) to demonstrate the class’s new capabilities.

###Sample Output
```
Welcome to the grade book for
CS101 Introduction to C++ Programming!
This course is presented by: Sam Smith
Changing instructor name to Judy Jones
Welcome to the grade book for
CS101 Introduction to C++ Programming!
This course is presented by: Judy Jones
```

###Program Template
```C
// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
	// constructor initializes course name and instructor name
	GradeBook( string, string );
	void setCourseName( string ); // function to set the course name
	string getCourseName(); // function to retrieve the course name
	/* write code to declare a get function for the instructor’s name */
	/* write code to declare a set function for the instructor’s name */
	void displayMessage(); // display welcome message and instructor name
private:
	string courseName; // course name for this GradeBook
	string instructorName; // instructor name for this GradeBook
}; // end class GradeBook
```

```C
// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
	setCourseName( course ); // initializes courseName
	setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
	courseName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
	return courseName;
} // end function getCourseName

/* write code to define a get member function for the instructor’s name */

/* write code to define a set member function for the instructor’s name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
	// display a welcome message containing the course name
	cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
/* write code to output the instructor’s name */
} // end function displayMessage
```

```C
// Lab 2: GradeBookTest.cpp
// Test program for modified GradeBook class.
#include <iostream>
using namespace std;

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main()
{
	// create a GradeBook object; pass a course name and instructor name
	GradeBook gradeBook( "CS101 Introduction to C++ Programming" );

	// display welcome message and instructor's name
	gradeBook.displayMessage();
	
	/* write code to change instructor’s name and output changes */
} // end main
```

###Problem-Solving Tips
1. In class GradeBook, declare a string data member to represent the instructor’s name.
2. Declare a public set function for the instructor’s name that does not return a value and takes a string
as a parameter. In the body of the set function, assign the parameter’s value to the data member that
represents the instructor’s name.
3. Declare a public get function that returns a string and takes no parameters. This member function
should return the instructor’s name.
4. Modify the constructor to take two string parameters. Assign the parameter that represents the instruc-
tor’s name to the appropriate data member.
5. Add an output statement to member function displayMessage to output the value of the data member
you declared earlier.
6. Be sure to follow the spacing and indentation conventions mentioned in the text.
7. If you have any questions as you proceed, ask your lab instructor for help.


##Lab Exercise 3 — Creating an Employee Class
This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 3.7, Fig. L 3.8 and Fig. L 3.9)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 3 of C++ How to Program, Seventh Edi-
tion. In this lab, you will practice:

* Creating a class definition.
* Declaring data members.
* Defining a constructor.
* Defining set and get functions.
* Writing a test application to demonstrate the capabilities of another class.

###Description of the Problem
Create a class called Employee that includes three pieces of information as data members—a first name (type
string), a last name (type string) and a monthly salary (type int). [Note: In subsequent chapters, we’ll use num-
bers that contain decimal points (e.g., 2.75)—called floating-point values—to represent dollar amounts.] Your
class should have a constructor that initializes the three data members. Provide a set and a get function for each
data member. If the monthly salary is not positive, set it to 0. Write a test program that demonstrates class Em-
ployee’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Em-
ployee a 10 percent raise and display each Employee’s yearly salary again.

###Sample Output
```
Employee 1: Bob Jones; Yearly Salary: 34500
Employee 2: Susan Baker; Yearly Salary: 37800
Increasing employee salaries by 10%
Employee 1: Bob Jones; Yearly Salary: 37944
Employee 2: Susan Baker; Yearly Salary: 41580
```

###Program Template
```C
// Lab 3: Employee.h
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
	/* Declare a constructor that has one parameter for each data member */
	/* Declare a set method for the employee’s first name */
	/* Declare a get method for the employee’s first name */
	/* Declare a set method for the employee’s last name */
	/* Declare a get method for the employee’s last name */
	/* Declare a set method for the employee’s monthly salary */
	/* Declare a get method for the employee’s monthly salary */
private:
	/* Declare a string data member for the employee’s first name */
	/* Declare a string data member for the employee’s last name */
	/* Declare an int data member for the employee’s monthly salary */
}; // end class Employee
```

```C
// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition
/* Define the constructor. Assign each parameter value to the appropriate data member. Write code that validates the value of salary to ensure that it is not negative. */

/* Define a set function for the first name data member. */

/* Define a get function for the first name data member. */

/* Define a set function for the last name data member. */

/* Define a get function for the last name data member. */

/* Define a set function for the monthly salary data member. Write code that validates the salary to ensure that it is not negative. */

/* Define a get function for the monthly salary data member. */
```

```C
// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
	/* Create two Employee objects and assign them to Employee variables. */
	
	/* Output the first name, last name and salary for each Employee. */
	
	/* Give each Employee a 10% raise. */
	
	/* Output the first name, last name and salary of each Employee again. */
} // end main
```

###Problem-Solving Tips
1. Class Employee should declare three data members.
2. The constructor must declare three parameters, one for each data member. The value for the salary
should be validated to ensure it is not negative.
3. Declare a public set and get member functions for each data member. The set functions should not re-
turn values and should each specify a parameter of a type that matches the corresponding data member
(string for first name and last name, int for the salary). The get functions should receive no parameters
and should specify a return type that matches the corresponding data member.
4. When you call the constructor from the main function, you must pass it three arguments that match the
parameters declared by the constructor.
5. Giving each employee a raise will require a call to the get function for the salary to obtain the current
salary and a call to the set function for the salary to specify the new salary.
6. Be sure to follow the spacing and indentation conventions mentioned in the text.
7. If you have any questions as you proceed, ask your lab instructor for help.
