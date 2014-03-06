//
//  Lab 3: RationalNumber.h
//  RationalNumber class definition.
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#ifndef RATIONAL_NUMBER_H
#define RATIONAL_NUMBER_H

class RationalNumber {
public:
   RationalNumber( int = 0, int = 1 ); // default constructor
   RationalNumber operator+( const RationalNumber& ); // addition
   RationalNumber operator-( const RationalNumber& ); // subtraction
   RationalNumber operator*( const RationalNumber& ); // multiplication
   RationalNumber operator/( const RationalNumber& ); // division
   
   // relational operators
   bool operator>( const RationalNumber& ) const; // greater than operator
   bool operator<( const RationalNumber& ) const; // less than operator
   bool operator>=( const RationalNumber& ) const; // greater than or equal to operator
   bool operator<=( const RationalNumber& ) const; // less than or equal to operator

   // equality operators
   bool operator==( const RationalNumber& ) const; // equality operator
   bool operator!=( const RationalNumber& ) const; // inequality operator
   
   void printRational() const; // display rational number
private:
   int numerator; // private variable numerator
   int denominator; // private variable denominator
   void reduction(); // function for fraction reduction
}; // end class RationalNumber

#endif
