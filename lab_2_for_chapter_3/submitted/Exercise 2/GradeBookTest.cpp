// Lab 2: GradeBookTest.cpp
// Vincent Lee
// Test program for modified GradeBook class.
#include <iostream>
using namespace std; 

// include definition of class GradeBook from GradeBook.h
#include "GradeBook.h"

// function main begins program execution
int main() {
   // create a GradeBook object; pass a course name and instructor name
   GradeBook gradeBook("CS101 Introduction to C++ Programming", "Chris Plaue");

   // display welcome message and instructor's name
   gradeBook.displayMessage();

   //set new instructor
   gradeBook.setInstructorName("Tianming Liu");
   //Print the change
   gradeBook.changeInstructorMessage();

   // display new message and instructor's name
   gradeBook.displayMessage();
} // end main
