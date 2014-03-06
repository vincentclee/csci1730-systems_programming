// Vincent Lee
// 10/30/12
// Debugging: Dog.h
#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// class Dog definition
class Dog : public Animal {
public:
   Dog( const int = 0, const int = 0, string = "Toto" );

   void print() const;
   void setName( string ) ;
private:
   string name;
}; // end class Dog

#endif // DOG_H
