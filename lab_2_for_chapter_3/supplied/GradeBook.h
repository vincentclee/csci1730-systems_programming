// Lab 2: GradeBook.h
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
   // constructor initializes course name and instructor name
   GradeBook( string, string );
   void setCourseName( string ); // function to set the course name
   string getCourseName(); // function to retrieve the course name
   /* write code to declare a get function for the instructor’s name */
   /* write code to declare a set function for the instructor’s name */
   void displayMessage(); // display welcome message and instructor name
private:
   string courseName; // course name for this GradeBook
   string instructorName; // instructor name for this GradeBook
}; // end class GradeBook  


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
