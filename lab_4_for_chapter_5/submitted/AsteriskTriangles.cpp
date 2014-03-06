//
//  Lab 2: AsteriskTriangles.cpp
//  Draw four triangles composed of asterisks.
//
//  Created by Vincent Lee on 9/13/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
using namespace std; 

int main() {
	int row; //The row position
	int column; //The column position
	int space; //Number of spaces to print

	//First triangle
	//For loop to iterate row from 1 to 10
	for (row = 1; row <= 10; row++) {
		//For loop to iterate column from 1 to row
		for (column = 1; column <= row; column++)
			cout << "*";

		cout << endl;
	}

	//Line Break
	cout << endl;

	//Second triangle
	//For loop to iterate row from 10 down to 1
	for (row = 10; row >= 1; row--) {
		//For header to iterate column from 1 to row
		for (column = 1; column <= row; column++)
			cout << "*";

		cout << endl;
	}

	//Line Break
	cout << endl;

	//Third Triangle
	//For loop to iterate row from 10 down to 1
	for (row = 10; row >= 1; row--) {
		//For loop to iterate space from 10 down to one more than row
		for (space = 10; space >= row+1; space--)
			cout << " ";

		//For loop to iterate column from 1 to row
		for (column = 1; column <= row; column++)
			cout << "*";

		cout << endl;
	}

	//Line Break
	cout << endl;

	//Fourth Triangle
	//For loop to iterate row from 10 down to 1
	for (row = 10; row >= 1; row--) {
		//For loop to iterate space from 1 to one less than row
		for (space = 1; space <= row-1; space++)
			cout << " ";

		//For loop to iterate column from 10 down to row
		for (column = 10; column >= row; column--)
			cout << "*";

		cout << endl;
	}
}
