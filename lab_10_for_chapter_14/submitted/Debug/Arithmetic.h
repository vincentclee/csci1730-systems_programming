// Vincent Lee
// 11/07/2012
// Debugging: Arithmetic.h

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

// template class Arithmetic
template< typename T >
class Arithmetic {
public:
   Arithmetic( T, T );
   T addition() const;
   T subtraction() const;
   T multiplication() const;
   T division() const;
private:
   T value1;
   T value2;
}; // end class Arithmetic

// constructor
template< typename T >
Arithmetic< T >::Arithmetic( T v1, T v2 ) {
   value1 = v1;
   value2 = v2;
} // end class Arithmetic constructor

// template function addition
template< typename T >
T Arithmetic< T >::addition() const {
   return value1 + value2;
} // end function addition

// template function subtraction
template< typename T >
T Arithmetic< T >::subtraction() const {
   return value1 - value2;
} // end function subtraction

// template function multiplication
template< typename T >
T Arithmetic< T >::multiplication() const {
   return value1 * value2; 
} // end function multiplication

// template function division
template< typename X >
X Arithmetic< X >::division() const {
   return value1 / value2;
} // end function division

#endif //ARITHMETIC_H
