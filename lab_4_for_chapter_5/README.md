##Lab Exercise 1—Integer Average

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 5.1)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 5 of C++ How To Program, Seventh Edi-
tion. In this lab, you’ll practice:

* Using sentinel-controlled repetition with a for loop.

The follow-up question and activity also will give you practice:

* Using counter-controlled repetition with a for loop.

###Description of the Problem
Write a program that uses a for statement to calculate and print the average of several integers. Assume the last
value read is the sentinel 9999. A typical input sequence might be

`10 8 11 7 9 9999`

indicating that the program should calculate the average of all the values preceding 9999.

###Sample Output
```
Enter integers (9999 to end):
10 8 11 7 9 9999
The average is: 9
```

###Template
```C
// Lab 1: IntegerAverage.cpp
// Calculate the average of several integers.
#include <iostream>
using namespace std;
int main()
{
int value; // current value
int count = 0; // number of inputs
int total; // sum of inputs
// prompt for input
cout << "Enter integers (9999 to end):" << endl;
cin >> value;
// loop until sentinel value read from user
/* Write a for header to initialize total to 0
and loop until value equals 9999 */
{
/* Write a statement to add value to total */
/* Write a statement to increment count */
cin >> value; // read in next value
} // end for
// if user
if ( count
cout <<
<<
else
cout <<
} // end main
Fig. L 5.1 |
entered at least one value
!= 0 )
"\nThe average is: "
/* Convert total to a double and divide it by count */ << endl;
"\nNo values were entered." << endl;
```

###Problem-Solving Tips
1. When used for sentinel-controlled repetition, a for loop can be written much like a while loop, using
the same loop-continuation condition as a while loop.
2. When performing sentinel-controlled repetition, a for loop does not need to increment any counter
variable. But it can still initialize a variable if so desired.
3. If you have any questions as you proceed, ask your lab instructor for help.

###Follow-Up Question and Activity
1. Modify the program to perform counter-controlled repetition. Assume that the first integer entered by the
user represents the number of subsequent integers that the user will input to be averaged.


