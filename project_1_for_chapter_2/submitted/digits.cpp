//
//  Lab 3: digits.cpp
//
//  Created by Vincent Lee on 8/28/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> // allows program to perform input and output
using namespace std;

int main() {
    int number; // integer read from user
    
    cout << "Enter a five-digit integer: "; // prompt
    cin >> number; // read integer from user
    
    cout << number/10000 << "    ";
    number = number % 10000;
    cout << number/1000 << "    ";
    number = number % 1000;
    cout << number/100 << "    ";
    number = number % 100;
    cout << number/10 << "    ";
    number = number % 10;
    cout << number << endl;
    
    return 0; //No error run
    
} // end main