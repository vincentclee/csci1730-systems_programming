##Lab Exercise 1 — Rolling Dice

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 7.2)
5. Problem-Solving Tips
6. Follow-Up Questions and Activities

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up questions. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 7 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Using rand to generate random numbers and using srand to seed the random-number generator.
* Declaring, initializing and referencing arrays.

The follow-up questions and activities also will give you practice:

* Remembering that arrays begin with subscript 0 and recognizing off-by-one errors.
* Preventing array out-of-bounds errors.
* Using two-dimensional arrays.

###Description of the Problem
Write a program that simulates the rolling of two dice. The program should call rand to roll the first die, and
should call rand again to roll the second die. The sum of the two values should then be calculated. [Note: Each
die has an integer value from 1 to 6, so the sum of the two values will vary from 2 to 12, with 7 being the most
frequent sum and 2 and 12 being the least frequent sums.] Figure L 7.1 shows the 36 possible combinations of
the two dice. Your program should roll the two dice 36,000 times. Use a one-dimensional array to tally the num-
bers of times each sum appears. Print the results in a tabular format. Also, determine if the totals are reasonable
(i.e., there are six ways to roll a 7, so approximately one sixth of all the rolls should be 7).

###Sample Output
```
Sum  Total  Expected  Actual
2    1000   2.778%    2.778%
3    1958   5.556%    5.439%
4    3048   8.333%    8.467%
5    3979   11.111%   11.053%
6    5007   13.889%   13.908%
7    6087   16.667%   16.908%
8    4996   13.889%   13.878%
9    3971   11.111%   11.031%
10   2996   8.333%    8.322%
11   2008   5.556%    5.578%
12   950    2.778%    2.639%
```

###Template
```C
// Lab 1: dice.cpp
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
const long ROLLS = 36000;
const int SIZE = 13;
// array exepected contains counts for the expected
// number of times each sum occurs in 36 rolls of the dice
/* Write the declaration of array exprected here. Assign an
initializer list containing the expected values here. Use
SIZE for the number of elements */
int x; // first die
int y; // second die
/* Write declaration for array sum here. Initialize all
elements to zero. Use SIZE for the number of elements */
srand( time( 0 ) );
// roll dice 36,000 times
/* Write a for statement that iterates ROLLS times. Randomly
generate values for x (i.e., die1) and y (i,e, die2)
and increment the appropriate counter in array sum that
corresponds to the sum of x and y */
cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 )
<< "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;
// display results of rolling dice
for ( int j = 2; j < SIZE; j++ )
cout << setw( 10 ) << j << setw( 10 ) << sum[ j ]
<< setprecision( 3 ) << setw( 9 )
<< 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 )
<< setw( 9 ) << 100.0 * sum[ j ] / 36000 << "%\n";
} // end main
```

###Problem-Solving Tips
1. Remember that array subscripts always begin with zero. This is also true for each dimension of a mul-
tiple-subscripted array (which this lab does not use).
2. The actual percentage is the likelihood, based on the results of your program, that a dice roll produced
a certain result. In other words, if you roll the dice 36,000 times the actual percentage will be the (num-
ber of times a result occurred / 36000) * 100.
3. The expected percentage is the statistical probability that a dice roll will produce a certain result. This
can be calculated from the diagram “36 possible outcomes of rolling two dice,” shown in the problem
description. For example, there is only one combination that will produce the sum of 2 and there are
36 total combinations that occur with equal likelihood. Therefore, the expected percentage of rolling a
2 is 1/36 or 2.778%.

Follow-Up Questions and Activities
1. Why is the variable SIZE initialized to 13 when there are only 11 possible die-roll outcomes?
2. What happens if the < operator on line 47 of the program template is changed to <=?
3. What happens if the elements of array sum are not initialized to zero? Try running the program without ini-
tializing the array. Show your results.
4. Modify the program to use a two-dimensional array similar to the diagram in Figure L 7.1. Now, rather
than counting the number of times each sum appears, increment the correct cell in the array. Print this array
with the number of times each dice combination occurred. A sample output may look like the following:


