###Lab Exercise 1 — Account Hierarchy


This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 12.1–Fig. L 12.7)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 12 of C++ How To Program, Seventh
Edition. In this lab, you will practice:

* Using inheritance to create an account hierarchy that includes a Account class, a SavingsAccount class
   and a CheckingAccount class.
* Using private data members to limit access to data members.
* Redefining base-class member functions in a derived class.

###Description of the Problem
Create an inheritance hierarchy that a bank might use to represent customers’ bank accounts. All customers at
this bank can deposit (i.e., credit) money into their accounts and withdraw (i.e., debit) money from their ac-
counts. More specific types of accounts also exist. Savings accounts, for instance, earn interest on the money they
hold. Checking accounts, on the other hand, charge a fee per transaction (i.e., credit or debit).
Create an inheritance hierarchy containing base class Account and derived classes SavingsAccount and
CheckingAccount that inherit from class Account. Base class Account should include one data member of type
double to represent the account balance. The class should provide a constructor that receives an initial balance
and uses it to initialize the data member. The constructor should validate the initial balance to ensure that it is
greater than or equal to 0.0. If not, the balance should be set to 0.0 and the constructor should display an error
message, indicating that the initial balance was invalid. The class should provide three member functions.
Member function credit should add an amount to the current balance. Member function debit should with-
draw money from the Account and ensure that the debit amount does not exceed the Account’s balance. If it

does, the balance should be left unchanged and the function should print the message "Debit amount exceeded
Member function getBalance should return the current balance.
Derived class SavingsAccount should inherit the functionality of an Account, but also include a data
member of type double indicating the interest rate (percentage) assigned to the Account. SavingsAccount’s con-
structor should receive the initial balance, as well as an initial value for the SavingsAccount’s interest rate. Sav-
ingsAccount should provide a public member function calculateInterest that returns a double indicating the
amount of interest earned by an account. Member function calculateInterest should determine this amount
by multiplying the interest rate by the account balance. [Note: SavingsAccount should inherit member functions
credit and debit as is without redefining them.]
Derived class CheckingAccount should inherit from base class Account and include an additional data
member of type double that represents the fee charged per transaction. CheckingAccount’s constructor should
receive the initial balance, as well as a parameter indicating a fee amount. Class CheckingAccount should redefine
member functions credit and debit so that they subtract the fee from the account balance whenever either
transaction is performed successfully. CheckingAccount’s versions of these functions should invoke the base-class
Account version to perform the updates to an account balance. CheckingAccount’s debit function should charge
a fee only if money is actually withdrawn (i.e., the debit amount does not exceed the account balance). [Hint:
Define Account’s debit function so that it returns a bool indicating whether money was withdrawn. Then use
the return value to determine whether a fee should be charged.]
After defining the classes in this hierarchy, write a program that creates objects of each class and tests their
member functions. Add interest to the SavingsAccount object by first invoking its calculateInterest function,
then passing the returned interest amount to the object’s credit function.
account balance."

###Sample Output
```
account1 balance: $50.00
account2 balance: $25.00
account3 balance: $80.00
Attempting to debit $25.00 from account1.
Attempting to debit $30.00 from account2.
Debit amount exceeded account balance.
Attempting to debit $40.00 from account3.
$1.00 transaction fee charged.
account1 balance: $25.00
account2 balance: $25.00
account3 balance: $39.00
Crediting $40.00 to account1.
Crediting $65.00 to account2.
Crediting $20.00 to account3.
$1.00 transaction fee charged.
account1 balance: $65.00
account2 balance: $90.00
account3 balance: $58.00
Adding $2.70 interest to account2.
New account2 balance: $92.70
```

Template
```C
// Lab 1: Account.h
// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double ); // constructor initializes balance
   void credit( double ); // add an amount to the account balance
   bool debit( double ); // subtract an amount from the account balance
   void setBalance( double ); // sets the account balance
   double getBalance(); // return the account balance
private:
   double balance; // data member that stores the balance
}; // end class Account

#endif
```

```C
// Lab 1: Account.cpp
// Member-function definitions for class Account.
#include <iostream>
using namespace std;

#include "Account.h" // include definition of class Account

// Account constructor initializes data member balance
Account::Account( double initialBalance )
{
   // if initialBalance is greater than or equal to 0.0, set this value
   // as the balance of the Account
   if ( initialBalance >= 0.0 )
      balance = initialBalance;
   else // otherwise, output message and set balance to 0.0
   {
      cout << "Error: Initial balance cannot be negative." << endl;
      balance = 0.0;
   } // end if...else
} // end Account constructor

// credit (add) an amount to the account balance
void Account::credit( double amount )
{
   balance = balance + amount; // add amount to balance
} // end function credit

// debit (subtract) an amount from the account balance
// return bool indicating whether money was debited
bool Account::debit( double amount )
{
   if ( amount > balance ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      balance = balance - amount;
      return true;
   } // end else
} // end function debit

// set the account balance
void Account::setBalance( double newBalance )
{
   balance = newBalance;
} // end function setBalance

// return the account balance
double Account::getBalance()
{
   return balance;
} // end function getBalance
```

```C
// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H

/* Write a directive to include the Account header file */

/* Write a line to have class SavingsAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and interest rate
   /* Declare a two-parameter constructor for SavingsAccount */
   /* Declare member function calculateInterest */
private:
   /* Declare data member interestRate */
}; // end class SavingsAccount

#endif
```

```C
// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
/* Write the SavingsAccount constructor to call the Account constructor and validate and set the interest rate value */

// return the amount of interest earned
/* Write the calculateInterest member function to return the interest based on the current balance and interest rate */
```

```C
// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

/* Write a directive to include the Account header file */
/* Write a line to have class CheckingAccount inherit publicly from Account */
{
public:
   // constructor initializes balance and transaction fee
   /* Declare a two-argument constructor for CheckingAccount */
   /* Redeclare member function credit, which will be redefined */
   /* Redeclare member function debit, which will be redefined */
private:
   /* Declare data member transactionFee */
   // utility function to charge fee
   /* Declare member function chargeFee */
}; // end class CheckingAccount
#endif
```

```C
// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
/* Write the CheckingAccount constructor to call the Account constructor and validate and set the transaction fee value */

// credit (add) an amount to the account balance and charge fee
/* Write the credit member function to call Account's credit function and then charge a fee */

// debit (subtract) an amount from the account balance and charge fee
/* Write the debit member function to call Account's debit function and then charge a fee if it returned true*/

// subtract transaction fee
/* Write the chargeFee member function to subtract transactionFee from the current balance and display a message */
```

```C
// Lab 1: bankAccounts.cpp
// Test program for Account hierarchy.
#include <iostream>
#include <iomanip>
using namespace std;

#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition

int main()
{
	Account account1( 50.0 ); // create Account object
	SavingsAccount account2( 25.0, .03 ); // create SavingsAccount object
	CheckingAccount account3( 80.0, 1.0 ); // create CheckingAccount object
	
	cout << fixed << setprecision( 2 );
	
	// display initial balance of each object
	cout << "account1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
	cout << "account3 balance: $" << account3.getBalance() << endl;

	cout << "\nAttempting to debit $25.00 from account1." << endl;
	account1.debit( 25.0 ); // try to debit $25.00 from account1
	cout << "\nAttempting to debit $30.00 from account2." << endl;
	account2.debit( 30.0 ); // try to debit $30.00 from account2
	cout << "\nAttempting to debit $40.00 from account3." << endl;
	account3.debit( 40.0 ); // try to debit $40.00 from account3

	// display balances
	cout << "\naccount1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
	cout << "account3 balance: $" << account3.getBalance() << endl;

	cout << "\nCrediting $40.00 to account1." << endl;
	account1.credit( 40.0 ); // credit $40.00 to account1
	cout << "\nCrediting $65.00 to account2." << endl;
	account2.credit( 65.0 ); // credit $65.00 to account2
	cout << "\nCrediting $20.00 to account3." << endl;
	account3.credit( 20.0 ); // credit $20.00 to account3

	// display balances
	cout << "\naccount1 balance: $" << account1.getBalance() << endl;
	cout << "account2 balance: $" << account2.getBalance() << endl;
	cout << "account3 balance: $" << account3.getBalance() << endl;

	// add interest to SavingsAccount object account2
	/* Declare a variable interestEarned and assign it the interest account2 should earn */
	cout << "\nAdding $" << interestEarned << " interest to account2." << endl;
	/* Write a statement to credit the interest to account2's balance */
	
	cout << "\nNew account2 balance: $" << account2.getBalance() << endl;
} // end main
```

###Problem-Solving Tips
1. Each derived class constructor, SavingsAccount and CheckingAccount, should call the Account constructor explicitly.
2. Do not use the debit member function inside the chargeFee member function, because the debit
member function would then call the chargeFee member function, leading to infinite recursion. In-
stead use the inherited get and set functions for the account balance.

