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
