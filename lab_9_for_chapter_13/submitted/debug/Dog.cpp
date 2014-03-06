// Vincent Lee
// 11-01-2012
// Debugging: Dog.cpp

#include <iostream>
using namespace std;

#include "Animal.h"
#include "Dog.h"

// default constructor
Dog::Dog( const int h, const int w, const string n ) : Animal( h, w ) {
   setName( n );
   metricHeight = h * 2.5;
   metricWeight = w / 2.2;

} // end class Dog constructor

// return name
string Dog::getName() const {
   return name;

} // end function getName

// function setName definition
void Dog::setName( string n ) {
   name = n;

} // end function setName

// function print definition
void Dog::print() const {
   cout << "This animal is a dog, its name is: "
        << name << endl;
   Animal::print();

} // end function print

// return height
int Dog::getHeight() const {
   if ( useMetric( "height" ) )
      return metricHeight;

   else
      return Animal::getHeight();

} // end function print

// return weight
int Dog::getWeight() const {
   if ( useMetric( "weight" ) )
      return metricWeight;

   else
      return Animal::getWeight();

} // end function getWeight

// function setHeight definition
void Dog::setHeight( int h ) {
   height = h;
   metricHeight = h * 2.5;

} // end function setHeight

// function setWeight definition
void Dog::setWeight( int w ) {
   weight = w;
   metricWeight = w / 2.2;

} // end function setWeight

// function useMetric definition
bool Dog::useMetric( string type ) const {
   int choice = 0;

   cout << "Which units would you like to see the "
        << type << " in? (Enter 1 or 2)\n"
        << "\t1. metric\n"
        << "\t2. standard\n";

   cin >> choice;

   if ( choice == 1 )
      return true;

   else
      return false;

} // end function useMetric
