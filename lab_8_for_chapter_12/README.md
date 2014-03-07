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
