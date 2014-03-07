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

This problem is intended to be solved in a closed-lab session with a teaching assistant or instructor present. The
problem is divided into six parts:

1. Lab Objectives
2. Description of the Problem
3. Sample Output
4. Program Template (Fig. L 7.4)
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

* Using double-subscripted arrays to store tables of information.
* Nesting for loops to access multiple-subscripted arrays.

The follow-up question and activities also will give you practice:

* Using const ints to declare identifiers that are used in an array declaration.
* Initializing multidimensional arrays.
* Using character arrays to store strings.

###Description of the Problem
Use a double-subscripted array to solve the following problem. A company has four salespeople (1 to 4) who sell
five different products (1 to 5). Each salesperson passes in slips for each different type of product sold. Each slip
contains the following:  
a) The salesperson number  
b) The product number  
c) The total dollar value of that product sold that day  

Thus, each salesperson passes in between 0 and 5 sales slips per day. Assume that the information from all of the
slips for last month are available. Write a program that reads all this information for last month’s sales and sum-
marize the total sales by salesperson by product. All totals should be stored in the two-dimensional array sales.
After processing all the information for last month, print the results in tabular format with each of the columns
representing a particular salesperson and each of the rows representing a particular product. Cross total each row
to get the total sales of each product for last month; cross total each column to get the total sales by salesperson
for last month. Your tabular printout should include these cross totals to the right of the totaled rows and to the
bottom of the totaled columns.

###Sample Output
```
Enter the salesperson (1 - 4), product number (1 - 5), and total sales.
Enter -1 for the salesperson to end input.
1 1 9.99
1 2 12.49
1 5 19.98
2 3 15.75
2 4 21.23
3 1 17.33
4 5 22.22
4 1 19.65
-1
The total sales for each salesperson are displayed at the end of each row,
and the total sales for each product are displayed at the bottom of each column.

           1      2      3      4      5   Total
1       9.99  12.49   0.00   0.00  19.98   42.46
2       0.00   0.00  15.75  21.23   0.00   36.98
3      17.33   0.00   0.00   0.00   0.00   17.33
4      19.65   0.00   0.00   0.00  22.22   41.87

Total  46.97  12.49  15.75  21.23  42.20
Press any key to continue . . . 
```

###Template
```C
// Lab 3: sales.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int PEOPLE = 5;
	const int PRODUCTS = 6;
	/* Write the declaration for array sales here */
	double value;
	double totalSales;
	double productSales[ PRODUCTS ] = { 0.0 };
	int salesPerson;
	int product;

	// enter sales slips
	cout << "Enter the salesperson (1 - 4), product number (1 - 5), and " << "total sales.\nEnter -1 for the salesperson to end input.\n";
	
	cin >> salesPerson;
	
	// continue receiving input for each salesperson until -1 is entered
	while ( salesPerson != -1 )
	{
		cin >> product >> value;
		/* Write a statement that adds values to the proper element in the sales array */
		cin >> salesPerson;
	} // end while
	
	cout << "\nThe total sales for each salesperson are displayed at the "
		<< "end of each row,\n" << "and the total sales for each product "
		<< "are displayed at the bottom of each column.\n " << setw( 12 )
		<< 1 << setw( 12 ) << 2 << setw( 12 ) << 3 << setw( 12 ) << 4
		<< setw( 12 ) << 5 << setw( 13 ) << "Total\n" << fixed << showpoint;

	// display salespeople and sales
	for ( int i = 1; /* Write condition here */; i++ )
	{
		totalSales = 0.0;
		cout << i;

		// add total sales, and display individual sales
		for ( int j = 1; /* Write condition here */; j++ )
		{
			/* Write a statement that adds the current sales element to totalSales */
			cout << setw( 12 ) << setprecision( 2 ) << sales[ i ][ j ];
			/* Write a statement that adds the current sales element to productSales */
		} // end inner for
		
		cout << setw( 12 ) << setprecision( 2 ) << totalSales << '\n';
	} // end outer for

	cout << "\nTotal" << setw( 8 ) << setprecision( 2 ) << productSales[ 1 ];

	// display total product sales
	for ( int j = 2; j < PRODUCTS; j++ )
		cout << setw( 12 ) << setprecision( 2 ) << productSales[ j ];
	
	cout << endl;
} // end main
```

###Problem-Solving Tips
1. This problem asks the reader to input a series of numbers representing the salesperson number, product
number and the dollar amount. The product number and salesperson number represent the row sub-
script and column subscript in the sales array where the dollar amount is added. Each array begins with
subscript zero; therefore, it is recommended that you oversize the array by one element in each dimen-
sion. This allows you to map the product number and salesperson number directly to a subscript with-
out having to subtract one.
2. Table columns contain the total sales for each product. Table rows contain the sales figures for each
salesperson. To create the output, the table header must first be printed. (See template.) When program
control reaches the outer for loop, the salesperson number is printed. The inner for loop prints the
amount of each product that the salesperson sold. When the inner loop finishes, control returns to the
outer loop and the \n character is printed.
3. To display totals in the right-most column, simply sum each element in the row and display the total.
This is best done when the array is output. To display the totals at the bottom, declare a one-dimen-
sional array of five elements. While outputting sales, simply add the current column’s value to the ap-
propriate element of the single-subscripted array. After outputting sales and the totals for each row,
iterate through the single-subscripted array and output its values.

###Follow-Up Questions and Activities
1. Explain why keyword const must be present when declaring the variables PRODUCTS and PEOPLE. Why do
these two constants have the values 6 and 5 rather than 5 and 4?
2. Change the declaration of productSales, in your solution that corresponds to line 18 in the program tem-
plate, so that salesperson 1 has sold $75.00 of product 3 initially and so that salesperson 4 has sold $63.00
of product 1 initially. All other array values should be initialized to 0.0. [Hint: Use an initializer list to ini-
tialize the array.]
3. Create an additional array that stores the names of all of the salespeople. Allow the user to input the first
names of the four employees. Limit the names to 20 characters. When generating the output table, use the
names of the salespeople rather than numbers.

