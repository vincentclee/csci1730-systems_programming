// Debugging: debugging.cpp

#include <iostream>
using namespace std;

#include "Arithmetic.h"

// template function printResult definition
< typename T >
void printResult( T number )
{
   cout << "The result of the operation is: " << number << endl;
} // end function printResult

int main()
{
   Arithmetic a( 5, 3 );
   Arithmetic< int > b( 7.3, 5.2 );

   cout << "Arithmetic performed on object a:\n";
   printResult( a< int >.addition() );
   printResult( a< int >.subtraction() );
   printResult( a< int >.multiplication() );
   printResult( a< int >.division() );

   cout << "\nArithmetic performed on object b:\n";
   printResult( b.addition() );
   printResult( b.subtraction() );
   printResult( b.multiplication() );
   printResult( b.division() );
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
