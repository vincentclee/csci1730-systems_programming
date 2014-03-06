//
//  Payroll.cpp
//  Lab 2
//	Calculate wages for a payroll.
//
//  Created by Vincent Lee on 9/6/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//
#include <iostream>
#include <iomanip> // parameterized stream manipulators
using namespace std; 

int main() {
	int hours; //Hours worked
	double rate, salary; //double variables for money.

	//Prompt for hours worked, and read in.
	cout << "Enter hours worked (-1 to end): ";
	cin >> hours;

    //Set floating-point number format to two places behind the decimal.
    cout << setprecision(2) << fixed;

    //While loop with hours worked as conditional statement.
    while (hours != -1) {
    	//Prompt for hourly rate, and read in.
    	cout << "Enter hourly rate of the worker ($00.00): $";
    	cin >> rate;

    	//If hours is greater than 40, hours more than 40 1.5x pay.
    	//Else rate * hours.
    	if (hours > 40)
    		salary = (rate * 40) + (rate * 1.5 * (hours - 40));
    	else
    		salary = rate * hours;

    	//Display total salary.
    	cout << "Salary is $" << salary;

    	//Prompt for next employee's data
    	cout << "\n\nEnter hours worked (-1 to end): ";
    	cin >> hours;
    }

    cout << "\nProgram Terminated.";
    return 0;
}
