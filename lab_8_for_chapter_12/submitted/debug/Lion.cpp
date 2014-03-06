// Vincent Lee
// 10/30/12
// Debugging: Lion.cpp
#include <iostream>
using namespace std;

#include "Lion.h"

// default constructor
Lion::Lion( const int h, const int w ) : Animal( h, w ) {
   // empty
} // end class Lion constructor

// function print definition
void Lion::print() const {
   cout << "This animal is a lion\n";
   Animal::print();
} // end function print
