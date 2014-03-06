// Lab 1: String.h
// Header file for class String.
#ifndef STRING_H
#define STRING_H

#include <iostream> 
#include <cstring> 
#include <cassert>
using namespace std;

class String
{
   friend ostream &operator<<( ostream &output, const String &s );
public:
   String( const char * const = "" ); // conversion constructor
   String( const String & ); // copy constructor
   ~String(); // destructor
   const String &operator=( const String & );
   /* Write a prototype for the operator+ member function */
private:
   char *sPtr; // pointer to start of string
   int length; // string length
}; // end class String

#endif


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
