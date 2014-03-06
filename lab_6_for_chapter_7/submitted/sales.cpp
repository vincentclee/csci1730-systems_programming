//
//  Lab 3: sales.cpp
//
//  Created by Vincent Lee on 10/09/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream> 
#include <iomanip>
using namespace std; 

int main() {
	const int PEOPLE = 5;
	const int PRODUCTS = 6;
	double sales[PEOPLE][PRODUCTS] = {{0.0}}; //Declaration for array sales here
	double value;
	double totalSales;
	double productSales[PRODUCTS] = {0.0};
	int salesPerson;
	int product;
   
	//Enter sales slips
	cout << "Enter the salesperson (1 - 4), product number (1 - 5), and "
		 << "total sales.\nEnter -1 for the salesperson to end input.\n";
	cin >> salesPerson;
   
	//Continue receiving input for each salesperson until -1 is entered
	while (salesPerson != -1) {
		cin >> product >> value;
		sales[salesPerson][product] += value; //Adds values to the proper element in the sales array
		cin >> salesPerson;
	}

	cout << "\nThe total sales for each salesperson are displayed at the "
			<< "end of each row,\n" << "and the total sales for each product "
			<< "are displayed at the bottom of each column.\n " << setw(12)
			<< 1 << setw(12) << 2 << setw(12) << 3 << setw(12) << 4
			<< setw(12) << 5 << setw(13) << "Total\n" << fixed << showpoint;

	//Display salespeople and sales
	for (int i = 1; i < PEOPLE; i++) {
		totalSales = 0.0;
		cout << i;
      
		//Add total sales, and display individual sales
		for (int j = 1; j < PRODUCTS; j++) {
			totalSales += sales[i][j]; //Adds the current sales element to totalSales
			cout << setw(12) << setprecision(2) << sales[i][j];
			productSales[j] += sales[i][j]; //Adds the current sales element to productSales
		}

		cout << setw(12) << setprecision(2) << totalSales << '\n';
	}

	cout << endl << "Total" << setw(8) << setprecision(2) << productSales[1];

	//Display total product sales
	for (int j = 2; j < PRODUCTS; j++)
		cout << setw(12) << setprecision(2) << productSales[j];

	cout << endl;
}
