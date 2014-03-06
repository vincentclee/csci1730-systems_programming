// Lab 3: EmployeeTest.cpp
// Vincent Lee
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std; 
  
#include "Employee.h" //include definition of class Employee

// function main begins program execution
int main() {
	Employee employee1("Chris", "Plaue", 2875); //Create Employee object
	Employee employee2("Tianming", "Liu", 3150); //Create Employee object

	//Output the first name, last name and salary for each Employee.
	cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; Yearly Salary: " << 12*employee1.getMonthlySalary() << endl;
	cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; Yearly Salary: " << 12*employee2.getMonthlySalary() << endl;

	//Give each Employee a 10% raise.
	cout << endl << "Increasing employee salaries by 10%" << endl;
	employee1.setMonthlySalary(1.1*employee1.getMonthlySalary());
	employee2.setMonthlySalary(1.1*employee2.getMonthlySalary());

	//Output the first name, last name and salary of each Employee again.
	cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; Yearly Salary: " << 12*employee1.getMonthlySalary() << endl;
	cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; Yearly Salary: " << 12*employee2.getMonthlySalary() << endl;
} //end main
