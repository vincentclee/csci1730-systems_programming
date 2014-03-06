// Vincent Lee
// 11-01-2012
// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.
#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) {// initialize base class
   interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interestRate
} // end SavingsAccount constructor

// return the amount of interest earned
double SavingsAccount::calculateInterest() {
   return getBalance() * interestRate;
} // end function calculateInterest
