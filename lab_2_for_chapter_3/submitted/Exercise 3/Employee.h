// Lab 3: Employee.h
// Vincent Lee
// Employee class definition.

#include <string> // program uses C++ standard string class
using namespace std; 

// Employee class definition
class Employee {
public:
   Employee(string, string, int); //constructor initializes employee first and last name, and monthly salary
   void setFirstName(string); //function to set the employee first name
   string getFirstName(); //function to retrieve the employee first name
   void setLastName(string); //function to set the employee last name
   string getLastName(); //function to retrieve the employee last name
   void setMonthlySalary(int); //function to set the employee monthly salary
   int getMonthlySalary(); //function to retrieve the employee monthly salary
private:
   string firstName; //Employee first name for this Employee
   string lastName; //Employee last name for this Employee
   int monthlySalary; //Employee monthly salary for this Employee
}; // end class Employee
