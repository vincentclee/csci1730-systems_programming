// Vincent Lee
// 11-01-2012
// Debugging: Debugging.cpp

#include <iostream>
using namespace std;

#include "Animal.h"
#include "Lion.h"
#include "Dog.h"

void setHeightWeight( Animal * );

int main() {
   Dog dog1( 60, 120, "Fido" );
   Lion lion1( 45, 300 );

   setHeightWeight( &lion1 );
   setHeightWeight( &dog1 );
} // end main

// function setHeightWeight definition
void setHeightWeight( Animal *a ) {
   int height;
   int weight;

   a->print();
   cout << "Enter a new height (using standard units): ";
   cin >> height;
   a->setHeight( height );

   cout << "Enter a new weight (using standard units): ";
   cin >> weight;
   a->setWeight( weight );

   height = a->getHeight();
   weight = a->getWeight();

   cout << "Here are the new height and weight values:\n"
        << height << endl
        << weight << endl << endl;

} // end function setHeightWeight
