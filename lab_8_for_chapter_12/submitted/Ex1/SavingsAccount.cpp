// Vincent Lee
// 10/30/12
// Lab 1: SavingsAccount.cpp
// Member-function definitions for class SavingsAccount.

#include "SavingsAccount.h" // SavingsAccount class definition

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) {
interestRate = ( rate < 0.0 ) ? 0.0 : rate; // set interest rate
}

// return the amount of interest earned
double SavingsAccount::calculateInterest() {
	return getBalance() * interestRate;
}
