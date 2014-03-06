// Debugging: debugging.cpp
#include <iostream>
using namespace std;

#include "Animal.h"
#include "Lion.h"

int main()
{
   Animal a1( 0, 0 );
   Dog d1( 60, 120, "Fido" );
   Dog d2;
   Lion lion1( 45, 300 );

   a1.print();
   d1.print();
   d2.print();
   lion1.print();

   a1 = d1;
   cout << "Animal 1 now has the same height and weight "
        << "as dog 1\n";
   a1.print();

   d2 = a1;
   cout << "Dog 2 now has the same height and weight as animal 1\n"
   d2.print();
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
