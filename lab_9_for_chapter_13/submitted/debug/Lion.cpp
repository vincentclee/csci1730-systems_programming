// Vincent Lee
// 11-01-2012
// Debugging: Lion.cpp

#include <iostream>
using namespace std;

#include "Animal.h"
#include "Lion.h"

// default constructor
Lion::Lion( int h, int w ) : Animal( h, w ) {
   // empty

} // end class Lion constructor

// function print definition
void Lion::print() const {
   cout << "This animal is a lion\n";
   Animal::print();
}
