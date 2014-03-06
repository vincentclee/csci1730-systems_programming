// Lab 1: IntegerAverage.cpp
// Calculate the average of several integers.

#include <iostream>
using namespace std; 

int main()
{
   int value; // current value
   int count = 0; // number of inputs
   int total; // sum of inputs

   // prompt for input
   cout << "Enter integers (9999 to end):" << endl;
   cin >> value;

   // loop until sentinel value read from user
   /* Write a for header to initialize total to 0
      and loop until value equals 9999 */
   {
      /* Write a statement to add value to total */
      /* Write a statement to increment count */

      cin >> value; // read in next value
   } // end for

   // if user entered at least one value
   if ( count != 0 )
      cout << "\nThe average is: "
           << /* Convert total to a double and divide it by count */ << endl;
   else
      cout << "\nNo values were entered." << endl;
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
