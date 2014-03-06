//
//  Lab 3: gcd.cpp
//  Finds greatest common divisor (GCD) of 2 inputs.
//
//  Created by Vincent Lee on 9/20/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
using namespace std; 

//prototype for gcd
int gcd(int x, int y);

int main() {
	int a; //first number
	int b; //second number

	//loop for 5 pairs of inputs
	for (int j = 1; j <= 5; j++) {
		cout << "Enter two integers: ";
		cin >> a >> b;

		cout << "The greatest common divisor of " << a << " and " << b << " is ";

		//find greatest common divisor of a and b
		cout <<  gcd(a, b) << endl;
	}
}

int gcd(int x, int y) {
	int greatest = 1; //current greatest common divisor, 1 is minimum

	//loop from 2 to smaller of x and y
	for (int i = 2; i <= ((x < y) ? x : y); i++) {
		//if current i divides both x and y
	  	if ((x % i == 0) && (y % i == 0))
	  		greatest = i; //update greatest common divisor
	}

	//return greatest
	return greatest;
}
