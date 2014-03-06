// Lab 2: Payroll.cpp
// Calculate wages for a payroll.
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; 

int main()
{
   /* Write declarations for hours, rate and salary */

   // processing phase
   // get first employee's hours worked
   cout << "Enter hours worked (-1 to end): ";
   cin >> hours;

   // set floating-point number format
   /* Write code to use the stream manipulators fixed and
      setprecision to set the floating-point number format */

   // loop until sentinel value read from user
   /* Write the while loop */
   {
      // get hourly rate
      /* Write code to prompt for and input hourly rate */
      
      // if employee worked less than 40 hours
      /* Write code to determine whether hours worked was 
	     less than or equal to 40 and if so, calculate  
		 base pay. If not, calculate base + overtime pay */
      
      /* Write code to display the salary */

      // prompt for next employee's data
      cout << "\n\nEnter hours worked (-1 to end): ";
      cin >> hours;
   } // end while
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
