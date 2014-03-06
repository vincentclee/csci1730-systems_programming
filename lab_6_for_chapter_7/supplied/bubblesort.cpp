// Lab 2: bubblesort.cpp
// This program sorts an array's values into ascending order.
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
   const int arraySize = 10; // size of array a
   int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
   int hold; // temporary location used to swap array elements

   cout << "Data items in original order\n";

   // output original array
   for ( int i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << a[ i ];

   // bubble sort
   // loop to control number of passes
   /* Write a for header to loop for one iteration less than the size
      of the array */
   {
      // loop to control number of comparisons per pass
      /* Write a for header to iterate j from 0 and keep
         looping while j is less than arraySize - 1 */
      {
         // compare side-by-side elements and swap them if 
         // first element is greater than second element
         /* Write an if statement to test if element j is greater than
		    element j + 1 */
         {      
            /* Write code to swap the values in element j and
			   element j + 1, using hold as temporary storage */
         } // end if
      } // end for
   } // end for

   cout << "\nData items in ascending order\n";

   // output sorted array
   for ( int k = 0; k < arraySize; k++ )
      cout << setw( 4 ) << a[ k ];

   cout << endl;
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
