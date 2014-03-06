// Lab 1: dice.cpp
#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std; 

int main()
{
   const long ROLLS = 36000;
   const int SIZE = 13;

   // array exepected contains counts for the expected
   // number of times each sum occurs in 36 rolls of the dice 
   /* Write the declaration of array exprected here. Assign an
      initializer list containing the expected values here. Use
      SIZE for the number of elements */
   int x; // first die
   int y; // second die
   /* Write declaration for array sum here. Initialize all
      elements to zero. Use SIZE for the number of elements */

   srand( time( 0 ) );
   
   // roll dice 36,000 times
   /* Write a for loop that iterates ROLLS times. Randomly
      generate values for x (i.e., die1) and y (i,e, die2)
      and increment the appropriate counter in array sum that
      corresponds to the sum of x and y */
   
   cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
      << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;

   // display results of rolling dice
   for ( int j = 2; j < SIZE; j++ )
      cout << setw( 10 ) << j << setw( 10 ) << sum[ j ] 
         << setprecision( 3 ) << setw( 9 ) 
         << 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )
         << setw( 9 ) << 100.0 * sum[ j ] / 36000 << "%\n";
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
