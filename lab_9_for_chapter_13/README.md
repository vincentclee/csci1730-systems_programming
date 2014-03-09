##Lab Exercise — Polymorphic Banking

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into five parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 13.2–Fig. L 13.8)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 13 of C++ How To Program, Seventh
Edition. In this lab, you will practice:

* Creating an Account base class that contains virtual functions and derived classes SavingsAccount and
CheckingAccount.
* Defining virtual functions.
* Calling virtual functions.
* Downcasting with a pointer with the dynamic_cast operator.

###Description of the Problem
Develop a polymorphic banking program using the Account hierarchy created in Exercise 12.10. Create a vector
of Account pointers to SavingsAccount and CheckingAccount objects. For each Account in the vector, allow
the user to specify an amount of money to withdraw from the Account using member function debit and an
amount of money to deposit into the Account using member function credit. As you process each Account,
determine its type. If an Account is a SavingsAccount, calculate the amount of interest owed to the Account
using member function calculateInterest, then add the interest to the account balance using member func-
tion credit. After processing an Account, print the updated account balance obtained by invoking base class
member function getBalance.


###Sample Output
```
Account 1 balance: $25.00
Enter an amount to withdraw from Account 1: 15.00
Enter an amount to deposit into Account 1: 10.50
Adding $0.61 interest to Account 1 (a SavingsAccount)
Updated Account 1 balance: $21.11
Account 2 balance: $80.00
Enter an amount to withdraw from Account 2: 90.00
Debit amount exceeded account balance.
Enter an amount to deposit into Account 2: 45.00
$1.00 transaction fee charged.
Updated Account 2 balance: $124.00
Account 3 balance: $200.00
Enter an amount to withdraw from Account 3: 75.50
Enter an amount to deposit into Account 3: 300.00
Adding $6.37 interest to Account 3 (a SavingsAccount)
Updated Account 3 balance: $430.87
Account 4 balance: $400.00
Enter an amount to withdraw from Account 4: 56.81
$0.50 transaction fee charged.
Enter an amount to deposit into Account 4: 37.83
$0.50 transaction fee charged.
Updated Account 4 balance: $380.02
```

###Template
```C
// Lab 1: Account.h
// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account( double ); // constructor initializes balance
	/* Write a function prototype for virtual function credit */
	/* Write a function prototype for virtual function debit */
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

#include "Account.h" // Account class definition

class SavingsAccount : public Account
{
public:
	// constructor initializes balance and interest rate
	SavingsAccount( double, double );
	double calculateInterest(); // determine interest owed
private:
	double interestRate; // interest rate (percentage) earned by account
}; // end class SavingsAccount

#endif
```

```C
// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
: Account( initialBalance ) // initialize base class
{
	interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
} // end SavingsAccount constructor

// return the amount of interest earned
double SavingsAccount::calculateInterest()
{
	return getBalance() * interestRate;
} // end function calculateInterest
```

```C
// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // Account class definition

class CheckingAccount : public Account
{
public:
	// constructor initializes balance and transaction fee
	CheckingAccount( double, double );
	/* Write a function prototype for virtual function credit, which will redefine the inherited credit function */
/* Write a function prototype for virtual function debit, which will redefine the inherited debit function */
private:
	double transactionFee; // fee charged per transaction
	// utility function to charge fee
	void chargeFee();
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
CheckingAccount::CheckingAccount( double initialBalance, double fee )
: Account( initialBalance ) // initialize base class
{
	transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee
} // end CheckingAccount constructor

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	Account::credit( amount ); // always succeeds
	chargeFee();
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	bool success = Account::debit( amount ); // attempt to debit
	if ( success ) // if money was debited, charge fee and return true
	{
		chargeFee();
		return true;
	} // end if
	else // otherwise, do not charge fee and return false
		return false;
} // end function debit

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	Account::setBalance( getBalance() - transactionFee );
	cout << "$" << transactionFee << " transaction fee charged." << endl;
} // end function chargeFee
```

```C
// Lab 1: polymorphicBanking.cpp
// Processing Accounts polymorphically.
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition

int main()
{
	// create vector accounts
	/* Write declarations for a vector of four pointers to Account objects, called accounts */

	// initialize vector with Accounts
	accounts[ 0 ] = new SavingsAccount( 25.0, .03 );
	accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
	accounts[ 2 ] = new SavingsAccount( 200.0, .015 );
	accounts[ 3 ] = new CheckingAccount( 400.0, .5 );

	cout << fixed << setprecision( 2 );

	// loop through vector, prompting user for debit and credit amounts
	for ( size_t i = 0; i < accounts.size(); i++ )
	{
		cout << "Account " << i + 1 << " balance: $" << /* Call the getBalance function through Account pointer i */;
		double withdrawalAmount = 0.0;
		cout << "\nEnter an amount to withdraw from Account " << i + 1 << ": ";
		cin >> withdrawalAmount;
		/* Call the debit function through Account pointer i */
		double depositAmount = 0.0;
		cout << "Enter an amount to deposit into Account " << i + 1 << ": ";
		cin >> depositAmount;
		/* Call the credit function through Account pointer i */

		// downcast pointer
		SavingsAccount *savingsAccountPtr =
		/* Write a dynamic_cast operation to to attempt to downcast Account pointer i to a SavingsAccount pointer */
		
		// if Account is a SavingsAccount, calculate and add interest
		if ( /* Write a test to determine if savingsAccountPtr isn't 0 */ )
		{
			double interestEarned = /* Call member function calculateInterest through savingsAccountPtr */;
			cout << "Adding $" << interestEarned << " interest to Account " << i + 1 << " (a SavingsAccount)" << endl;
			/* Use the credit function to credit interestEarned to the SavingsAccount pointed to by savingsAccountPtr*/
		} // end if
		
		cout << "Updated Account " << i + 1 << " balance: $" << /* Call the getBalance function through Account pointer i */ << "\n\n";
	} // end for
} // end main
```

###Problem-Solving Tips
1. To achieve polymorphism, declare the functions that should be called polymorphically as virtual. To
indicate a virtual function within a class definition, add “virtual” before the function prototype.
When the virtual functions are redefined in a derived class, those member function prototypes should
also be preceded by the keyword virtual as a good programming practice.
2. To determine if a pointer to an Account object is actually pointing to a SavingsAccount object, down-
cast it to a SavingsAccount * using the dynamic_cast operator. If the pointer returned by this opera-
tion is not the null pointer (i.e., 0) then the object is a SavingsAccount object and that pointer can be
used to access members unique to class SavingsAccount.
3. Remember that your compiler may require you to enable run-time type information (RTTI) for this
particular project before this program will run correctly.

###Debugging
The program (Fig. L 13.9–Fig. L 13.15) in this section does not run properly. Fix all the compilation errors so
that the program will compile successfully. Once the program compiles, compare the output with the sample
output, and eliminate any logic errors that may exist. The sample output demonstrates what the program’s out-
put should be once the program’s code has been corrected.

###Sample Output
```
This animal is a lion
This animal's height and weight are as follows:
Height: 45	Weight: 300
Enter a new height (using standard units): 50
Enter a new weight (using standard units): 400
Here are the new height and weight values
50	400
This animal is a dog, its name is: Fido
This animal's height and weight are as follows:
Height: 60	Weight: 120
Enter a new height (using standard units): 50
Enter a new weight (using standard units): 116
Which units would you like to see the height in? (Enter 1 or 2)
1. metric
2. standard
2
Which units would you like to see the weight in? (Enter 1 or 2)
1. metric
2. standard
1
Here are the new height and weight values
50	52
```

###Broken Code
```C
// Debugging: Animal.h
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

// Note: class Animal is an abstract class
// class Animal definition
class Animal
{
public:
	Animal( int = 0, int = 0 );
	void setHeight( int );
	virtual int getHeight() const = 0;
	void setWeight( int );
	virtual int getWeight() const = 0;
	virtual void print() const = 0;
private:
	int height;
	int weight;
}; // end class Animal

#endif // ANIMAL_H
```

```C
// Debugging: Animal.cpp
#include <iostream>
using namespace std;

#include "Animal.h"

// default constructor
Animal::Animal( int h, int w )
{
	height = h;
	weight = w;
} // end class Animal constructor

// function print definition
virtual void Animal::print() const
{
	cout << "This animal's height and weight are as follows:\n"
		<< "Height: " << height << "\tWeight: " << weight
		<< endl << endl;
} // end function print

// return height
int Animal::getHeight() const
{
	return height;
} // end function getHeight

// return weight
int Animal::getWeight() const
{
	return weight;
} // end function getWeight

// function setHeight definition
virtual void Animal::setHeight( int h )
{
	height = h;
} // end function setHeight

// function setWeight definition
virtual void Animal::setWeight( int w )
{
	weight = w;
} // end function setWeight
```

```C
// Debugging: Lion.h
#ifndef LION_H
#define LION_H

#include "Animal.h"

// class Lion definition
class Lion : public Animal
{
public:
	Lion( int = 0, int = 0 );
	virtual void print() const;
}; // end class Lion

#endif // LION_H
```

```C
// Debugging: Lion.cpp
#include <iostream>
using namespace std;

#include "Lion.h"

// default constructor
Lion::Lion( int h, int w )
: Animal( h, w )
{
	// empty
} // end class Lion constructor

// function print definition
void Lion::print() const
{
	cout << "This animal is a lion\n";
	Animal::print();
} // end function print
```

```C
// Debugging: Dog.h
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// class Dog definition
class Dog : public Animal
{
public:
	Dog( int = 0, int = 0, string = "Toto" );
	virtual void print() const = 0;
	virtual void getHeight() const = 0;
	virtual void getWeight() const = 0;
	string getName() const;
	void setName( string );
private:
	bool useMetric( string ) const;
	string name;
	int metricHeight;
	int metricWeight;
}; // end class Dog

#endif // DOG_H
```

```C
// Debugging Dog.cpp
#include <iostream>
using namespace std;

#include "Dog.h"

// default constructor
Dog::Dog( int h, int w, string n )
: Animal( h, w )
{
	setName( n );
	metricHeight = h * 2.5;
	metricWeight = w / 2.2;
} // end class Dog constructor

// return name
string Dog::getName() const
{
	return name;
} // end function getName

// function setName definition
void Dog::setName( string n )
{
	name = n;
} // end function setName

// function print definition
void Dog::print() const
{
	cout << "This animal is a dog, its name is: " << name << endl;
	Animal::print();
} // end function print

// return height
int Dog::getHeight()
{
	if ( useMetric( "height" ) )
		return metricHeight;
	else
		return Animal::getHeight();
} // end function print

// return weight
int Dog::getWeight()
{
	if ( useMetric( "weight" ) )
		return metricWeight;
	else
		return Animal::getWeight();
} // end function getWeight

// function useMetric definition
bool Dog::useMetric( string type ) const
{
	int choice = 0;
	cout << "Which units would you like to see the "
		<< type << " in? (Enter 1 or 2)\n"
		<< "\t1. metric\n"
		<< "\t2. standard\n";

	cin >> choice;
	if ( choice == 1 )
		return true;
	else
		return false;
} // end function useMetric
```

```C
// Debugging: Debugging.cpp
#include <iostream>
using namespace std;

#include "Animal.h"
#include "Lion.h"
#include "Dog.h"

void setHeightWeight( Animal ) const;
int main()
{
	Dog dog1( 60, 120, "Fido" );
	Lion lion1( 45, 300 );
	setHeightWeight( lion1 );
	setHeightWeight( dog1 );
} // end main

// function setHeightWeight definition
void setHeightWeight( Animal )
{
	int height;
	int weight;
	a->print();
	cout << "Enter a new height (using standard units): ";
	cin >> height;
	a->setHeight( height );
	
	cout << "Enter a new weight (using standard units): ";
	cin >> weight;
	a->setWeight( weight );
	
	height = a->getHeight();
	weight = a->getWeight();
	
	cout << "Here are the new height and weight values:\n"
		<< height << endl
		<< weight << endl << endl;
} // end function setHeightWeight
```

