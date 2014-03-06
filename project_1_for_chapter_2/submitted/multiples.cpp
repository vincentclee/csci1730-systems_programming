//
//  Lab 2: multiples.cpp
//
//  Created by Vincent Lee on 8/28/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> // allows program to perform input and output
using namespace std;

int main() {
    int number1; //Number1 variable
    int number2; //Number2 variable
    
    cout << "Enter two integers: "; // prompt
    cin >> number1 >> number2; //Get two numbers
    
    //using modulus operator
    if (number1 % number2 == 0)
        cout << number1 << " is a multiple of " << number2 << endl;
    
    if (number1 % number2 != 0)
        cout << number1 << " is not a multiple of " << number2 << endl;
    
    return 0; //No error run
    
} // end main