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
   /* Write declarations for a vector of four pointers
      to Account objects, called accounts */   

   // initialize vector with Accounts
   accounts[ 0 ] = new SavingsAccount( 25.0, .03 ); 
   accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
   accounts[ 2 ] = new SavingsAccount( 200.0, .015 ); 
   accounts[ 3 ] = new CheckingAccount( 400.0, .5 );

   cout << fixed << setprecision( 2 );

   // loop through vector, prompting user for debit and credit amounts
   for ( size_t i = 0; i < accounts.size(); i++ )
   {
      cout << "Account " << i + 1 << " balance: $" 
         << /* Call the getBalance function through Account pointer i */;

      double withdrawalAmount = 0.0;
      cout << "\nEnter an amount to withdraw from Account " << i + 1 
         << ": ";
      cin >> withdrawalAmount;
      /* Call the debit function through Account pointer i */

      double depositAmount = 0.0;
      cout << "Enter an amount to deposit into Account " << i + 1 
         << ": ";
      cin >> depositAmount;
      /* Call the credit function through Account pointer i */

      // downcast pointer
      SavingsAccount *savingsAccountPtr =
         /* Write a dynamic_cast operation to to attempt to downcast
		    Account pointer i to a SavingsAccount pointer */

      // if Account is a SavingsAccount, calculate and add interest
      if ( /* Write a test to determine if savingsAccountPtr isn't 0 */ )
      {
         double interestEarned = /* Call member function calculateInterest
								    through savingsAccountPtr */;
         cout << "Adding $" << interestEarned << " interest to Account "
            << i + 1 << " (a SavingsAccount)" << endl;
         /* Use the credit function to credit interestEarned to
		    the SavingsAccount pointed to by savingsAccountPtr*/
      } // end if
      
      cout << "Updated Account " << i + 1 << " balance: $" 
         << /* Call the getBalance function through Account pointer i */
		 << "\n\n";
   } // end for
} // end main


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
