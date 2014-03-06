// Vincent Lee
// 10/30/12
// Lab 2: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class using composition.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
using namespace std; 

#include "CommissionEmployee.h" // CommissionEmployee class definition

class BasePlusCommissionEmployee : public CommissionEmployee {
public:
   BasePlusCommissionEmployee( const string &, const string &, 
      const string &, double = 0.0, double = 0.0, double = 0.0 );
   
   void setFirstName( const string & ); // set first name
   string getFirstName() const; // return first name

   void setLastName( const string & ); // set last name
   string getLastName() const; // return last name

   void setSocialSecurityNumber( const string & ); // set SSN
   string getSocialSecurityNumber() const; // return SSN

   void setGrossSales( double ); // set gross sales amount
   double getGrossSales() const; // return gross sales amount

   void setCommissionRate( double ); // set commission rate
   double getCommissionRate() const; // return commission rate

   void setBaseSalary( double ); // set base salary
   double getBaseSalary() const; // return base salary

   double earnings() const; // calculate earnings
   void print() const; // print BasePlusCommissionEmployee object
private:
   double baseSalary; // base salary
   string firstName;
   string lastName;
   string socialSecurityNumber;
   double grossSales;
   double commissionRate;
}; // end class BasePlusCommissionEmployee

#endif
