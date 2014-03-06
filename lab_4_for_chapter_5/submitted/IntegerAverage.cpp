//
//  Lab 1: IntegerAverage.cpp
//  Calculate the average of several integers.
//
//  Created by Vincent Lee on 9/13/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
using namespace std; 

int main() {
	int value; //Current value
	int count = 0; //Number of inputs
	int total; //Sum of inputs
	double average; //Average of all numbers
	bool DEBUG = false; //For debugging

	//Prompt for input
	cout << "Enter integers (9999 to end):" << endl;
	cin >> value;

	//Loop until sentinel value read from user
	for (total = 0; value != 9999;) {
		total+=value; //Adds value to total
		count++; //Increments numbers added to total.

		cin >> value; //Read in next value
	}

	//Calculate average (total/count)
	average = (double) total/count;

	if (DEBUG) cout << "Total: " << total << endl;
	if (DEBUG) cout << "Count: " << count << endl;

	//If user entered at least one value
	if (count != 0)
		cout << "\nThe average is: " << average << endl;
	else
		cout << "\nNo values were entered." << endl;
}
