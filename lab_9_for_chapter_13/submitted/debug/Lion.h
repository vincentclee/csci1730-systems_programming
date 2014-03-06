// Vincent Lee
// 11-01-2012
// Debugging: Lion.h

#ifndef LION_H
#define LION_H

#include "Animal.h"

// class Lion definition
class Lion : public Animal {
public:
   Lion( int = 0, int = 0 );

   virtual void print() const;

}; // end class Lion

#endif // LION_H
