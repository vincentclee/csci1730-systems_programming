// Vincent Lee
// 11-01-2012
// Debugging: Animal.cpp

#include <iostream>
using namespace std;

#include "Animal.h"

// default constructor
Animal::Animal( int h, int w ) {
   height = h;
   weight = w;

} // end class Animal constructor

// function print definition
void Animal::print() const {
   cout << "This animal's height and weight are as follows:\n"
        << "Height: " << height << "\tWeight: " << weight
        << endl << endl;

} // end function print

// return height
int Animal::getHeight() const {
   return height;

} // end function getHeight

// return weight
int Animal::getWeight() const {
   return weight;

} // end function getWeight

// function setHeight definition
void Animal::setHeight( int h ) {
   height = h;

} // end function setHeight

// function setWeight definition
void Animal::setWeight( int w ) {
   weight = w;

} // end function setWeight
