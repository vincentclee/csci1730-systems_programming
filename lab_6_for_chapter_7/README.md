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
	/* Write the declaration of array exprected here. Assign an initializer list containing the expected values here. Use SIZE for the number of elements */
	int x; // first die
	int y; // second die
	/* Write declaration for array sum here. Initialize all elements to zero. Use SIZE for the number of elements */ 
	
	srand( time( 0 ) );
	
	// roll dice 36,000 times
	/* Write a for statement that iterates ROLLS times. Randomly generate values for x (i.e., die1) and y (i,e, die2) and increment the appropriate counter in array sum that corresponds to the sum of x and y */
	
	cout << setw( 10 ) << "Sum" << setw( 10 ) << "Total" << setw( 10 ) << "Expected" << setw( 10 ) << "Actual\n" << fixed << showpoint;

	// display results of rolling dice
	for ( int j = 2; j < SIZE; j++ )
		cout << setw( 10 ) << j << setw( 10 ) << sum[ j ] << setprecision( 3 ) << setw( 9 ) << 100.0 * expected[ j ] / 36 << "%" << setprecision( 3 ) << setw( 9 ) << 100.0 * sum[ j ] / 36000 << "%\n";
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

###Follow-Up Questions and Activities
1. Why is the variable SIZE initialized to 13 when there are only 11 possible die-roll outcomes?
2. What happens if the < operator on line 47 of the program template is changed to <=?
3. What happens if the elements of array sum are not initialized to zero? Try running the program without ini-
tializing the array. Show your results.
4. Modify the program to use a two-dimensional array similar to the diagram in Figure L 7.1. Now, rather
than counting the number of times each sum appears, increment the correct cell in the array. Print this array
with the number of times each dice combination occurred. A sample output may look like the following:
```
   1     2     3     4     5     6
1  1011  971   1027  1025  971   1015
2  1013  968   990   968   1081  993
3  993   1014  983   973   1019  977
4  980   1004  974   1022  946   1046
5  1003  1021  1019  979   1004  1056
6  1026  1015  931   989   1014  979
```

##Lab Exercise 2 — Bubble Sort

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 7.3–Fig. L 7.4)
5. Problem-Solving Tips
6. Follow-Up Question and Activity

The program template represents a complete working C++ program, with one or more key lines of code replaced
with comments. Read the problem description and examine the sample output; then study the template code.
Using the problem-solving tips as a guide, replace the /* */ comments with C++ code. Compile and execute the
program. Compare your output with the sample output provided. Then answer the follow-up question. The
source code for the template is available from the Companion Website for C++ How to Program, Seventh Edition
at www.pearsonhighered.com/deitel/.

###Lab Objectives
This lab was designed to reinforce programming concepts from Chapter 7 of C++ How To Program, Seventh Edi-
tion. In this lab, you will practice:

* Sorting data using the bubble sort algorithm.

The follow-up question and activity also will give you practice:

* Optimizing a program to be more efficient.

###Description of the Problem
In the bubble sort algorithm, smaller values gradually “bubble” their way upward to the top of the array like air
bubbles rising in water, while the larger values sink to the bottom. The bubble sort makes several passes through
the array. On each pass, successive pairs of elements are compared. If a pair is in increasing order (or the values
are identical), we leave the values as they are. If a pair is in decreasing order, their values are swapped in the array.
Write a program that sorts an array of 10 integers using bubble sort.

```
Data items in original order
2  6  4  8  10  12  89  68  45  37
Data items in ascending order
2  4  6  8  10  12  37  45  68  89
```

###Template
```C
// Lab 2: bubblesort.cpp
// This program sorts an array's values into ascending order.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int arraySize = 10; // size of array a
	int a[ arraySize ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int hold; // temporary location used to swap array elements

	cout << "Data items in original order\n";
	
	// output original array
	for ( int i = 0; i < arraySize; i++ )
		cout << setw( 4 ) << a[ i ];

	// bubble sort
	// loop to control number of passes
	/* Write a for header to loop for one iteration less than the size of the array */
	{
		// loop to control number of comparisons per pass
		/* Write a for header to iterate j from 0 and keep looping while j is less than arraySize - 1 */
		{
			// compare side-by-side elements and swap them if
			// first element is greater than second element
			/* Write an if statement to test if element j is greater than element j + 1 */
			{
				/* Write code to swap the values in element j and element j + 1, using hold as temporary storage */
			} // end if
		} // end for
	} // end for

	cout << "\nData items in ascending order\n";

	// output sorted array
	for ( int k = 0; k < arraySize; k++ )
		cout << setw( 4 ) << a[ k ];
	
	cout << endl;
} // end main
```

###Problem-Solving Tips
1. Each “bubbling” pass through the array brings one element, the ith up to its correct position. This means
that the program will require arraySize - 1 passes through the array to sort the entire array.
2. Each bubbling pass will look at each pair of adjacent elements and swap them if they are not already in
sorted order.
3. To swap two elements, the value of one element will have to be stored in a temporary storage variable
while the value of the other element is placed in the first, and then the second element can be replaced
with the temporary storage value.

###Follow-Up Question and Activity
1. This bubble sort algorithm is inefficient for large arrays. Make the following simple modifications to im-
prove the performance of the bubble sort:   
a) After the first pass, the largest number is guaranteed to be in the highest-numbered element of the array;
after the second pass, the two highest numbers are “in place,” and so on. Instead of making nine com-
parisons on every pass, modify the bubble sort to make eight comparisons on the second pass, seven on
the third pass, and so on.   
b) The data in the array may already be in the proper order or near-proper order, so why make nine passes
if fewer will suffice? Modify the sort to check at the end of each pass if any swaps have been made. If
none have been made, then the data must already be in the proper order, so the program should termi-
nate. If swaps have been made, then at least one more pass is needed.

##Lab Exercise 3 — Salespeople
