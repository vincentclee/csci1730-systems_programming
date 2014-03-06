// Vincent Lee
// 10/30/12
// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initialBalance, double fee ) : Account( initialBalance ) {
	transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee amount
}

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount ) {
	Account::credit( amount );
	chargeFee();
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount ) {
	bool success = Account::debit( amount );

	if ( success ) { // if there was a debit, charge fee and return true.
		chargeFee();
		return true;
	}
	else // if not, don't charge fee, and return false.
		return false;
}

// subtract transaction fee
void CheckingAccount::chargeFee() {
	Account::setBalance( getBalance() - transactionFee );
	cout << "$" << transactionFee << " transaction fee charged." << endl;
}
