// Lab 3: Employee.cpp
// Vincent Lee
// Employee class member-function definitions.
#include <iostream>
using namespace std; 

#include "Employee.h" // Employee class definition

//Constructor initializes firstName, lastName, and monthlySalary
Employee::Employee(string firstName, string lastName, int monthlySalary) {
	setFirstName(firstName);
	setLastName(lastName);
	setMonthlySalary(monthlySalary);
}

//Function to set the first name
void Employee::setFirstName(string firstName) {
	this->firstName = firstName;
}

//Function to retrieve the first name
string Employee::getFirstName() {
	return firstName;
}

//Function to set the last name
void Employee::setLastName(string lastName) {
	this->lastName = lastName;
}

//Function to retrieve the last name
string Employee::getLastName() {
	return lastName;
}

//Function to set the monthly salary
void Employee::setMonthlySalary(int monthlySalary) {
	//If the monthly salary input is negative, set salary to 0.
	if (monthlySalary >= 0)
		this->monthlySalary = monthlySalary;
	else
		this->monthlySalary = 0;
}

//Function to retrieve the monthly salary
int Employee::getMonthlySalary() {
	return monthlySalary;
}
