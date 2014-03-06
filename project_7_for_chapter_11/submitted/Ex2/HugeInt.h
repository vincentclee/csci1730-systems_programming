//
//  Lab 2: Hugeint.h
//  HugeInt class definition.
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#ifndef HUGEINT_H
#define HUGEINT_H

#include <iostream>
using namespace std;

class HugeInt {
   friend ostream &operator<<( ostream &, const HugeInt & );
public:
   HugeInt( long = 0 ); // conversion/default constructor
   HugeInt( const char * ); // conversion constructor

   // addition operator; HugeInt + HugeInt
   HugeInt operator+( const HugeInt & ) const;

   // addition operator; HugeInt + int
   HugeInt operator+( int ) const; 

   // addition operator; 
   // HugeInt + string that represents large integer value
   HugeInt operator+( const char * ) const;

   bool operator==( const HugeInt & ) const; // equality operator
   bool operator!=( const HugeInt & ) const; // inequality operator
   bool operator<( const HugeInt & ) const; // less than operator
   bool operator<=( const HugeInt & ) const; // less than or equal to operator
   bool operator>( const HugeInt & ) const; // greater than operator
   bool operator>=( const HugeInt & ) const; // greater than or equal to operator

   HugeInt operator-( const HugeInt & ) const; // subtraction operator
   HugeInt operator*( const HugeInt & ) const; // multiply operator
   HugeInt operator/( const HugeInt & ) const; // division operator

   int getLength() const;
private:
   short integer[ 30 ];
}; // end class HugeInt

#endif
