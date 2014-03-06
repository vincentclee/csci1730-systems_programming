// Debugging: Dog.cpp
#include <iostream>
using namespace std;

#include "Dog.h"

// constructor
Dog::Dog( const int h, const int w, string n )
   : Animal( h, w )
{  
   setName( n );
} // end class Dog constructor

// function setName definition
void Dog::setName( const char * n )
{
   n = name;
} // end function setName

// function print definition
void Dog::Print() const
{
   cout << "This animal is a dog, its name is: " << name << endl;
        
   print();
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
