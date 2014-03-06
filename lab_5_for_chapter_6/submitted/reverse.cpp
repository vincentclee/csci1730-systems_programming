//
//  Lab 2: reverse.cpp
//  Reverse the digits of a number.
//
//  Created by Vincent Lee on 9/20/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
#include <iomanip> 
using namespace std; 

//prototype for reverseDigits
int reverseDigits(int n);

int main() {
	int number; //input number

	cout << "Enter a number between 1 and 9999: ";
	cin >> number;

	cout << "The number with its digits reversed is: ";

	//find number with digits reversed
	cout << reverseDigits(number) << endl;
}

int reverseDigits(int n) {
	int reverse = 0; //reversed number
	int divisor = 1000; //current divisor
	int multiplier = 1; //current multiplier

	//loop until single-digit number
	while (n > 9) {
		//if n >= current divisor, determine digit
		if (n >= divisor) {
			//update reversed number with current digit
			reverse += n / divisor * multiplier;
			n %= divisor; //update n
			divisor /= 10;//reduces divisor by a factor of 10
			multiplier *= 10; //increases multiplier by a factor of 10
		}
		else //else, no digit
			divisor /= 10; //update divisor
	}
   
	reverse += n * multiplier;

	return reverse; //return reversed number
}
