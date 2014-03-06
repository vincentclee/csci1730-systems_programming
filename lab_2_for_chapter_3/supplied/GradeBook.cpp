// Lab 2: GradeBook.cpp
// Member-function definitions for class GradeBook.
#include <iostream>
using namespace std; 

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// constructor initializes courseName and instructorName 
// with strings supplied as arguments
GradeBook::GradeBook( string course, string instructor )
{
   setCourseName( course ); // initializes courseName
   setInstructorName( instructor ); // initialiZes instructorName
} // end GradeBook constructor

// function to set the course name
void GradeBook::setCourseName( string name )
{
   courseName = name; // store the course name
} // end function setCourseName

// function to retrieve the course name
string GradeBook::getCourseName()
{
   return courseName;
} // end function getCourseName

/* write code to define a get member function for the instructor’s name */

/* write code to define a set member function for the instructor’s name */

// display a welcome message and the instructor's name
void GradeBook::displayMessage()
{
   // display a welcome message containing the course name
   cout << "Welcome to the grade book for\n" << getCourseName() << "!" 
      << endl;
   /* write code to output the instructor’s name */
} // end function displayMessage


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
