// Vincent Lee
// 11-01-2012
// Debugging: Animal.h

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std; 

// Note: class Animal is an abstract class
// class Animal definition
class Animal {
public:
   Animal( int = 0, int = 0 );

   virtual void setHeight( int );
   virtual void setWeight( int );
   virtual int getHeight() const;
   virtual int getWeight() const;
   virtual void print() const = 0;

protected:
   int height;
   int weight;

}; // end class Animal

#endif // ANIMAL_H
