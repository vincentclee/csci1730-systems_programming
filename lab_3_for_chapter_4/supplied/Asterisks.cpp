// Lab 3: Asterisks.cpp
// Draw a square of asterisks.
#include <iostream>
using namespace std; 

int main()
{
   int stars; // number of stars on a side
   int column; // the current column of the square being printed
   int row = 1; // the current row of the square being printed

   // prompt and read the length of the side from the user
   cout << "Enter length of side: ";
   cin >> stars;

   // valid input, if invalid, set to default
   /* Write an if statement to test whether stars is less than 1 */
   {
      stars = 1;
      cout << "Invalid Input\nUsing default value 1\n";
   } // end if
   /* Write an else if statement to test whether stars is greater than 20 */
   {
      stars = 20;
      cout << "Invalid Input\nUsing default value 20\n";
   } // end else if
      
   // repeat for as many rows as the user entered
   /* Write a while statement to count rows */
   {
      column = 1;
        
      // and for as many columns as rows         
      /* Write a while statement to count columns */
      {
         /* Write a series of if, else if, ... statements to
		    determine whether an asterisk or a space should be displayed
			at this position in the square */

         /* Increment the column counter */
      } // end inner while 

      cout << endl;
      /* Increment the row counter */
   } // end outer while 
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
