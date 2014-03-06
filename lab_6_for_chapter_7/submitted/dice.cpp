//
//  Lab 1: dice.cpp
//
//  Created by Vincent Lee on 10/09/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> 
#include <iomanip> 
#include <cstdlib>
#include <ctime>
using namespace std; 

int main() {
	const long ROLLS = 36000;
	const int SIZE = 13;
	int expected[SIZE] = {0, 0, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1}; //Contains counts for the expected number of times each sum occurs in 36 rolls of the dice
	int x; //First die
	int y; //Second die
	int sum[SIZE] = {0}; //Array sum.

	srand(time(0));
   
	//Roll dice 36,000 times
	for (int i = 0; i < ROLLS; i++) {
		x = 1 + rand() % 6; //Generates a number between 0 and 7
		y = 1 + rand() % 6; //Generates a number between 0 and 7

		sum[x+y]++; //Find's the sum of the dice roll, and increments that's count.
	}

	cout << setw(10) << "Sum" << setw(10) << "Total" << setw(10)
         << "Expected" << setw(10) << "Actual\n" << fixed << showpoint;

	//Display results of rolling dice
	for (int j = 2; j < SIZE; j++) {
		cout << setw(10) << j << setw(10) << sum[j]
		     << setprecision(3) << setw(9)
             << 100.0 * expected[j] / 36 << "%" << setprecision(3)
             << setw(9) << 100.0 * sum[j] / 36000 << "%\n";
	}
}
