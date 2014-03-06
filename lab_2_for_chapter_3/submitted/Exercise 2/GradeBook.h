// Lab 2: GradeBook.h
// Vincent Lee
// Definition of GradeBook class that stores an instructor's name.
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook {
public:
   // constructor initializes course name and instructor name
   GradeBook( string, string );
   void setCourseName( string ); // function to set the course name
   string getCourseName(); // function to retrieve the course name
   void setInstructorName(string); // function to set the instructor name
   string getInstructorName(); // function to retrieve the instructor name
   void displayMessage(); // display welcome message and instructor name
   void changeInstructorMessage(); // display instructor name change
private:
   string courseName; // course name for this GradeBook
   string instructorName; // instructor name for this GradeBook
}; // end class GradeBook
