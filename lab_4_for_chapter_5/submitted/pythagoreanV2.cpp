//
//  Lab 3: pythagoreanV2.cpp
//  Find Pythagorean triples using exact computing.
//
//  Created by Vincent Lee on 9/13/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
#include <time.h>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
	clock_t start, end;
	start = clock(); //Start clock

	int count = 0; //Number of triples found

	//Column Titles
	cout << "Side 1\tSide 2\tSide3" << endl;

	//side1 values range from 1 to 498
	for (int side1 = 1; side1 <= 498; side1++) {
		//side2 values range from current (side1+1) to 499
		for (int side2 = side1+1; side2 <= 499; side2++) {
			//Calculate the hypotenuse^2
			int hypotenuseSquared = (side1 * side1) + (side2 * side2);

			//Calculate hypotenuse
			double hypotenuese = sqrt(hypotenuseSquared);

			//If the square root of the hypotenuse is a whole number, it is the third side
			//Also square root of the hypotenuse is less than or equal to 500.
			if (floor(hypotenuese) == hypotenuese && hypotenuese <= 500) {
				cout << side1 << '\t' << side2 << '\t' << hypotenuese << '\n';
				count++;
			}
		}
	}

	//Display total number of triples found
	cout << "A total of " << count << " triples were found." << endl;

	end = clock(); //End clock

	cout << "Time required for execution: " << (double)(end-start)/CLOCKS_PER_SEC << " seconds.";
}
