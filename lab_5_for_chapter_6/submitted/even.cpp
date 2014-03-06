//
//  Lab 1: even.cpp
//  Determine whether inputs are odd or even.
//
//  Created by Vincent Lee on 9/20/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
using namespace std; 

//function prototype for function even, which takes an int parameter and returns a bool
bool even(int input);

int main() {
	int x; //current input
      
	//loop for 3 inputs
	for (int i = 1; i <= 3; i++) {
		cout << "Enter an integer: ";
		cin >> x;
   
		//determine if input is even
		if (even(x))
			cout << x << " is an even integer\n\n";
		else
			cout << x << " is an odd integer\n\n";
	}

	cout << endl;
}

bool even(int input) {
	//if the input divided by 2 has no remainder, it is even.
	//return true if even, false, if not.
	if (input % 2 == 0)
		return true;
	else
		return false;
}
