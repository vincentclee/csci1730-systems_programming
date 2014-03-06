// Vincent Lee
// 10/30/12
// Lab 1: SavingsAccount.h
// Definition of SavingsAccount class.
#ifndef SAVINGS_H
#define SAVINGS_H

#include "Account.h" // include the Account header file

class SavingsAccount : public Account {
public:
   // constructor initializes balance and interest rate
   SavingsAccount( double, double );

   double calculateInterest(); // calculate interest
private:
   double interestRate; // interest rate
}; // end class SavingsAccount

#endif
