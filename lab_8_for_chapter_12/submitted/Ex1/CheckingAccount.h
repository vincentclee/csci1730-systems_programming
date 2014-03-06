// Vincent Lee
// 10/30/12
// Lab 1: CheckingAccount.h
// Definition of CheckingAccount class.
#ifndef CHECKING_H
#define CHECKING_H

#include "Account.h" // include the Account header file

class CheckingAccount : public Account {
public:
   // constructor initializes balance and transaction fee
   CheckingAccount( double, double );

   void credit( double ); // Redeclare member function credit, which will be redefined
   bool debit( double ); // Redeclare member function debit, which will be redefined
private:
   double transactionFee; // data member transactionFee

   // utility function to charge fee
   void chargeFee();
}; // end class CheckingAccount

#endif
