// Debugging: Lion.cpp

#include <iostream>
using namespace std;

#include "Lion.h"

// default constructor
Lion::Lion( int h, int w )
   : Animal( h, w ) 
{
   // empty

} // end class Lion constructor

// function print definition
void Lion::print() const
{
   cout << "This animal is a lion\n";
   Animal::print();

} // end function print


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
