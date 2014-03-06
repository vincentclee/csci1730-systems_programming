//
//  Lab 3: RationalNumber.cpp
//  RationalNumber member-function definitions.
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <cstdlib>
#include <iostream> 
using namespace std;

#include "RationalNumber.h"

// RationalNumber constructor sets n and d and calls reduction
RationalNumber::RationalNumber( int n, int d) {
	numerator = n;
	denominator = ( d > 0 ) ? d : 1;
	reduction();
}

// overloaded + operator
RationalNumber RationalNumber::operator+( const RationalNumber &addition ) {
	return RationalNumber( numerator * addition.denominator + denominator * addition.numerator, denominator * addition.denominator );
}

// overloaded - operator
RationalNumber RationalNumber::operator-( const RationalNumber &subtraction ) {
	return RationalNumber( numerator * subtraction.denominator - denominator * subtraction.numerator, denominator * subtraction.denominator );
}

// overloaded * operator
RationalNumber RationalNumber::operator*( const RationalNumber &multiplication ) {
	return RationalNumber( numerator * multiplication.numerator, denominator * multiplication.denominator );
}

// overloaded / operator
RationalNumber RationalNumber::operator/( const RationalNumber &division ) {
	RationalNumber divide;

	if ( division.numerator != 0 )
		return RationalNumber( numerator * division.denominator, denominator * division.numerator );
	else {
		cout << "Hi. Can't divide by zero. I am exiting now!" << endl;
		exit( 1 );
	}
}

// overloaded > operator
bool RationalNumber::operator>( const RationalNumber &greaterThan ) const {
	if ( static_cast< double >( numerator ) / denominator > static_cast< double >( greaterThan.numerator ) / greaterThan.denominator )
		return true;
	else
		return false;
}

// overloaded < operator
bool RationalNumber::operator<( const RationalNumber &lessThan ) const {
	if ( static_cast< double >( numerator ) / denominator < static_cast< double >( lessThan.numerator ) / lessThan.denominator )
		return true;
	else
		return false;
}

// overloaded >= operator
bool RationalNumber::operator>=( const RationalNumber &greaterThanOrEqual ) const {
	return *this == greaterThanOrEqual || *this > greaterThanOrEqual;
}

// overloaded <= operator
bool RationalNumber::operator<=( const RationalNumber &lessThanOrEqual ) const {
	return *this == lessThanOrEqual || *this < lessThanOrEqual;
}

// overloaded == operator
bool RationalNumber::operator==( const RationalNumber &equal ) const {
	if ( numerator == equal.numerator && denominator == equal.denominator )
		return true;
	else
		return false;
}

// overloaded != operator
bool RationalNumber::operator!=( const RationalNumber &notEqual ) const {
	return !( *this == notEqual );
}

// function printRational definition
void RationalNumber::printRational() const
{
   if ( numerator == 0 ) // print fraction as zero
      cout << numerator;
   else if ( denominator == 1 ) // print fraction as integer
      cout << numerator;
   else
      cout << numerator << '/' << denominator;
} // end function printRational

// function reduction definition
void RationalNumber::reduction()
{
   int largest, gcd = 1;  // greatest common divisor;

   largest = ( numerator > denominator ) ? numerator: denominator;

   for ( int loop = 2; loop <= largest; loop++ )
       if ( numerator % loop == 0 && denominator % loop == 0 )
          gcd = loop;

   numerator /= gcd;
   denominator /= gcd;
} // end function reduction
