//
//  Lab 3: RationalTest.cpp
//  RationalNumber test program.
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> 
using namespace std;

#include "RationalNumber.h"

int main()
{
   RationalNumber c( 7, 3 ), d( 3, 9 ), x;

   c.printRational();
   cout << " + ";
   d.printRational();
   cout << " = ";
   x = c + d; // test overloaded operators + and =
   x.printRational();

   cout << '\n';
   c.printRational();
   cout << " - ";
   d.printRational();
   cout << " = ";
   x = c - d; // test overloaded operators - and =
   x.printRational();

   cout << '\n';
   c.printRational();
   cout << " * ";
   d.printRational();
   cout << " = ";
   x = c * d; // test overloaded operators * and =
   x.printRational();

   cout << '\n';
   c.printRational();
   cout << " / ";
   d.printRational();
   cout << " = ";
   x = c / d; // test overloaded operators / and =
   x.printRational();

   cout << '\n';
   c.printRational();
   cout << " is:\n";

   // test overloaded greater than operator
   cout << ( ( c > d ) ? "  > " : "  <= " );
   d.printRational();
   cout << " according to the overloaded > operator\n";

   // test overloaded less than operator
   cout << ( ( c < d ) ? "  < " : "  >= " );
   d.printRational();
   cout << " according to the overloaded < operator\n";

   // test overloaded greater than or equal to operator
   cout << ( ( c >= d ) ? "  >= " : "  < " );
   d.printRational();
   cout << " according to the overloaded >= operator\n";

   // test overloaded less than or equal to operator
   cout << ( ( c <= d ) ? "  <= " : "  > " );
   d.printRational();
   cout << " according to the overloaded <= operator\n";
   
   // test overloaded equality operator
   cout << ( ( c == d ) ? "  == " : "  != " );
   d.printRational();
   cout << " according to the overloaded == operator\n";

   // test overloaded inequality operator
   cout << ( ( c != d ) ? "  != " : "  == " );
   d.printRational();
   cout << " according to the overloaded != operator" << endl;
} // end main
