//
//  Lab 1: numbercompare.cpp
//
//  Created by Vincent Lee on 8/28/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> // allows program to perform input and output
using namespace std;

int main() {
    int number1; // first integer read from user
    int number2; // second integer read from user
    int number3; // third integer read from user
    int smallest; // smallest integer read from user
    int largest; // largest integer read from user
    int sum; //sum variable
    int product; //product variable
    double average; //double variable
    
    cout << "Input three different integers: "; // prompt
    cin >> number1 >> number2 >> number3; //Read in 3 numbers
    
    largest = number1; // assume first integer is largest
    
    //Find largest number
    if (number2 > largest)
        largest = number2;
    if (number3 > largest)
        largest = number3;
    
    smallest = number1; // assume first integer is smallest
    
    //Find smallest number
    if (number2 < smallest)
        smallest = number2;
    if (number3 < smallest)
        smallest = number3;
    
    //Finds the sum of the three numbers
    sum = number1 + number2 + number3;
    
    //Calculates the average of the three numbers.
    average = (double) sum/3;
    
    //Calculates the product of the turee numbers
    product = number1 * number2 * number3;
    
    //Print out results
    cout << "Sum: \t\t" << sum << "\nAverage: \t" << average << "\nProduct: \t" << product << "\nSmallest: \t" << smallest << "\nLargest: \t" << largest;
    
    return 0; //No error run
    
} // end main