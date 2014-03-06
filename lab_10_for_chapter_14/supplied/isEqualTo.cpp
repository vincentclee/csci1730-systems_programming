// Lab 2: isEqualTo.cpp
// A function template for equality
#include <iostream> 
using namespace std;

// function template isEqualTo
/* Write a template header with one formal type parameter */
/* Write a header for function template isEqualTo */ 
{
   return arg1 == arg2;
} // end function isEqualTo

int main()
{
   int a; // integers used for
   int b; // testing equality

   // test if two ints input by user are equal
   cout << "Enter two integer values: ";
   cin >> a >> b;
   cout << a << " and " << b << " are "
      << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';

   char c; // chars used for
   char d; // testing equality

   // test if two chars input by user are equal
   cout << "\nEnter two character values: ";
   cin >> c >> d;
   cout << c << " and " << d << " are "
      << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';

   double e; // double values used for
   double f; // testing equality

   // test if two doubles input by user are equal
   cout << "\nEnter two double values: ";
   cin >> e >> f;
   cout << e << " and " << f << " are "
      << ( /* Write a call to isEqualTo */ ? "equal" : "not equal" ) << '\n';
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
