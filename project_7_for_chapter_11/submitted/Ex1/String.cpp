//
//  Lab 1: String.cpp
//  Member-function definitions for String.cpp
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> 
using namespace std;

#include <cstring> // strcpy and strcat prototypes 
#include "String.h" // String class definition

// conversion constructor: convert a char * to String
String::String( const char * const zPtr ) {
   length = strlen( zPtr ); // compute length
   sPtr = new char[ length + 1 ]; // allocate storage
   assert( sPtr != 0 ); // terminate if memory not allocated
   strcpy( sPtr, zPtr ); // copy literal to object
} // end String conversion constructor

// copy constructor
String::String( const String &copy ) {
   length = copy.length; // copy length
   sPtr = new char[ length + 1 ]; // allocate storage
   assert( sPtr != 0 ); // ensure memory allocated
   strcpy( sPtr, copy.sPtr ); // copy string
} // end String copy constructor

// destructor
String::~String() {
   delete [] sPtr; // reclaim string
} // end destructor

// overloaded = operator; avoids self assignment
const String &String::operator=( const String &right ) {
   if ( &right != this ) { // avoid self assignment
      delete [] sPtr; // prevents memory leak
      length = right.length; // new String length
      sPtr = new char[ length + 1 ]; // allocate memory
      assert( sPtr != 0 ); // ensure memory allocated
      strcpy( sPtr, right.sPtr ); // copy string
   }
   else
      cout << "Attempted assignment of a String to itself\n";

   return *this; // enables concatenated assignments
} // end function operator=

// concatenate right operand and this object and store in temp object
String String::operator+( const String &right ) {
	String temp; // temporary String variable

	temp.length = length + right.length; // get total space
	temp.sPtr = new char[ temp.length + 1 ]; // make room
	assert( sPtr != 0 ); // quit if memory is not there
	strcpy( temp.sPtr, sPtr ); // left most part of the new String
	strcat( temp.sPtr, right.sPtr ); // right most part of the new String
	return temp; // enables concatenated calls
} // end function operator+

// overloaded output operator
ostream & operator<<( ostream &output, const String &s ) {
   output << s.sPtr;
   return output; // enables concatenation
} // end function operator<<
