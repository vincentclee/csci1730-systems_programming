//
//  Lab 1: String.h
//  Header file for class String.
//
//  Created by Vincent Lee on 10/18/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#ifndef STRING_H
#define STRING_H

#include <iostream> 
#include <cstring> 
#include <cassert>
using namespace std;

class String {
   friend ostream &operator<<( ostream &output, const String &s );
public:
   String( const char * const = "" ); // conversion constructor
   String( const String & ); // copy constructor
   ~String(); // destructor
   const String &operator=( const String & );
   String operator+( const String & ); //prototype for the operator+ member function
private:
   char *sPtr; // pointer to start of string
   int length; // string length
}; // end class String

#endif
