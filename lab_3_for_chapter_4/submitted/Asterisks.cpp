//
//  Asterisks.cpp
//  Lab 3
//	Draw a square of asterisks.
//
//  Created by Vincent Lee on 9/6/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
using namespace std; 

int main() {
	int stars; // number of stars on a side
	int column; // the current column of the square being printed
	int row = 1; // the current row of the square being printed

	//Prompt and read the length of the side from the user
	cout << "Enter length of side: ";
	cin >> stars;

	//If else statement to detect and correct values below 1 and above 20.
	if (stars < 1) {
		stars = 1;
		cout << "Invalid Input\nUsing default value: 1\n";
	}
	else if (stars > 20) {
		stars = 20;
		cout << "Invalid Input\nUsing default value: 20\n\n";
	}

	//While loop for the row.
	while (row <= stars) {
		column = 1; //Column variable set.

		//While loop for the column.
		while (column <= stars) {
			//Prints first line of stars
			if (row == 1)
				cout << "*";

			//Prints star if on the second row through (last row - 1) on column 1
			if (row != 1 && row != stars && column == 1)
				cout << "*";
			//Prints blank if on the second row through (last row - 1) between column 1 and last column.
			if (row != 1 && row != stars && column > 1 && column < stars)
				cout << " ";
			//Prints star if on the second row through (last row - 1) on last column
			if (row != 1 && row != stars && column == stars)
				cout << "*";

			//Prints last line of stars
			if (row == stars && row != 1)
				cout << "*";

			//Increment column.
			column++;
		}

		cout << endl; //Move to next line.

		//Increment row.
		row++;
	}

	return 0;
}
