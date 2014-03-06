//
//  Lab 3: pythagorean.cpp
//  Find Pythagorean triples using brute force computing.
//
//  Created by Vincent Lee on 9/13/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
#include <time.h>
using namespace std; 

int main() {
	clock_t start, end;
	start = clock(); //Start clock

	int count = 0; //Number of triples found
	long int hypotenuseSquared; //Hypotenuse squared
	long int sidesSquared; //Sum of squares of sides

	//Column Titles
	cout << "Side 1\tSide 2\tSide3" << endl;

	//side1 values range from 1 to 500
	for (long int side1 = 1; side1 <= 500; side1++) {
		//side2 values range from current side1 to 500
		for (long int side2 = side1; side2 <= 500; side2++) {
			//Hypotenuse values range from current side2 to 500
			for (long int hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
				//Calculate square of hypotenuse value
				hypotenuseSquared = hypotenuse * hypotenuse;

				//Calculate sum of squares of sides
				sidesSquared = (side1 * side1) + (side2 * side2);

				//If (hypotenuse)^2 = (side1)^2 + (side2)^2, Pythagorean triple
				if (hypotenuseSquared == sidesSquared) {
					//Display triple
					cout << side1 << '\t' << side2 << '\t' << hypotenuse << '\n';
					count++; //Update count
				}
			}
		}
	}

	//Display total number of triples found
	cout << "A total of " << count << " triples were found." << endl;

	end = clock(); //End clock

	cout << "Time required for execution: " << (double)(end-start)/CLOCKS_PER_SEC << " seconds.";
}
