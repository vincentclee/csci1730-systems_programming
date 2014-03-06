// Vincent Lee
// 11-01-2012
// Debugging: Dog.h

#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// class Dog definition
class Dog : public Animal {
public:
   Dog( int = 0, int = 0, string = "Toto" );

   virtual void print() const;
   virtual int getHeight() const;
   virtual int getWeight() const;
   virtual void setHeight( int );
   virtual void setWeight( int );
   string getName() const;
   void setName( string );

private:
   bool useMetric( string ) const;
   string name;
   int metricHeight;
   int metricWeight;

}; // end class Dog

#endif // DOG_H
