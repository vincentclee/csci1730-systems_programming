// Vincent Lee
// 10/30/12
// Debugging: Dog.cpp
#include <iostream>
using namespace std;

#include "Dog.h"

// constructor
Dog::Dog( const int h, const int w, string n ) : Animal( h, w ) {
   setName( n );
} // end class Dog constructor

// function setName definition
void Dog::setName( const string n ) {
   name = n;
} // end function setName

// function print definition
void Dog::print() const {
   cout << "This animal is a dog, its name is: " << name << endl;

   Animal::print();
} // end function print
