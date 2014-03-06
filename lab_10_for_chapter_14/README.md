##Lab Exercise 1 — Overloading printArray

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The problem is divided into five parts:
1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 14.1)
5. Problem-Solving Tips

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. The source code for the template is available
from the Companion Website for C++ How to Program, Seventh Edition at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 14 of C++ How To Program, Seventh
Edition. In this lab, you will practice
* Overloading a function template for printing an array.
* Using function templates to create function-template specializations.

###Problem Description
Overload function template printArray of Fig. 14.1 so that it takes two additional integer arguments, namely
int lowSubscript and int highSubscript. A call to this function will print only the designated portion of the
array. Validate lowSubscript and highSubscript; if either is out of range or if highSubscript is less than or
equal to lowSubscript, the overloaded printArray function should return 0; otherwise, printArray should re-
turn the number of elements printed. Then modify main to demonstrate both versions of printArray on arrays
a, b and c (lines 23–25 of Fig. 14.1). Be sure to test all capabilities of both versions of printArray.


Sample Output
Using original printArray function
1 2 3 4 5
Array a contains:
1 2 3 4 5
5 elements were output
Array a from positions 1 to 3 is:
2 3 4
3 elements were output
Array a output with invalid subscripts:
0 elements were output
Using original printArray function
1.1 2.2 3.3 4.4 5.5 6.6 7.7
Array b contains:
1.1 2.2 3.3 4.4 5.5 6.6 7.7
7 elements were output
Array b from positions 1 to 3 is:
2.2 3.3 4.4
3 elements were output
Array b output with invalid subscripts:
0 elements were output
Using original printArray function
H E L L O
Array c contains:
H E L L O
5 elements were output
Array c from positions 1 to 3 is:
E L L
3 elements were output
Array c output with invalid subscripts:
0 elements were output
Template
