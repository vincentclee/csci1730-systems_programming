// Vincent Lee
// 10/30/12
// Debugging: debugging.cpp
#include <iostream>
using namespace std;

#include "Animal.h"
#include "Lion.h"
#include "Dog.h"

int main() {
   Animal a1( 0, 0 );
   Dog d1( 60, 120, "Fido" );
   Dog d2;
   Lion lion1( 45, 300 );

   a1.print();
   d1.print();
   d2.print();
   lion1.print();

   a1 = d1;
   cout << "Animal 1 now has the same height and weight as dog 1\n";
   a1.print();

   d2.setHeight(a1.getHeight()); //Set Dog 2 height as Animal 1 height
   d2.setWeight(a1.getWeight()); //Set Dog 2 weight as Animal 1 weight
   cout << "Dog 2 now has the same height and weight as animal 1\n";
   d2.print();
} // end main
