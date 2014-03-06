// Vincent Lee
// 11-01-2012
// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using namespace std;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee )
   : Account( initialBalance ) { // initialize base class
   transactionFee = ( fee < 0.0 ) ? 0.0 : fee; // set transaction fee
} // end CheckingAccount constructor

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount ) {
   Account::credit( amount ); // always succeeds
   chargeFee();
} // end function credit

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount ) {
   bool success = Account::debit( amount ); // attempt to debit

   if ( success ) { // if money was debited, charge fee and return true
      chargeFee();
      return true;
   } // end if
   else // otherwise, do not charge fee and return false
      return false;
} // end function debit

// subtract transaction fee
void CheckingAccount::chargeFee() {
   Account::setBalance( getBalance() - transactionFee );
   cout << "$" << transactionFee << " transaction fee charged." << endl;
} // end function chargeFee
