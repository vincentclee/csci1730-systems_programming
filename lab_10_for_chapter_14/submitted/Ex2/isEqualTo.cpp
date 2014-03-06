// Vincent Lee
// 11/07/2012
// Lab 2: isEqualTo.cpp
// A function template for equality
#include <iostream> 
using namespace std;

// function template isEqualTo
template < typename T >
bool isEqualTo( const T &arg1, const T &arg2 ) {
   return arg1 == arg2;
} // end function isEqualTo

int main() {
   int a; // integers used for
   int b; // testing equality

   // test if two ints input by user are equal
   cout << "Enter two integer values: ";
   cin >> a >> b;
   cout << a << " and " << b << " are "
      << ( isEqualTo( a, b ) ? "equal" : "not equal" ) << '\n';

   char c; // chars used for
   char d; // testing equality

   // test if two chars input by user are equal
   cout << "\nEnter two character values: ";
   cin >> c >> d;
   cout << c << " and " << d << " are "
      << ( isEqualTo( c, d ) ? "equal" : "not equal" ) << '\n';

   double e; // double values used for
   double f; // testing equality

   // test if two doubles input by user are equal
   cout << "\nEnter two double values: ";
   cin >> e >> f;
   cout << e << " and " << f << " are "
      << ( isEqualTo( e, f ) ? "equal" : "not equal" ) << '\n';
} // end main
