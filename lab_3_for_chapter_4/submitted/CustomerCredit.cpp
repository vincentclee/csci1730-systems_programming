//
//  CustomerCredit.cpp
//  Lab 1
//	Create Credit object and invoke its calculateBalance function.
//
//  Created by Vincent Lee on 9/6/12.
//  Copyright (c) 2012 Vincent Lee. All rights reserved.
//

#include <iostream>
#include <iomanip> //Parameterized stream manipulators
using namespace std;

int main() {
	int account; //Account number
    double balance, charges, credits, creditLimit; //Holds money amounts.
    
    //Prompt for account number, and read in.
    cout << "Enter account number (-1 to end): ";
    cin >> account;
    
    //Set floating-point number format to two places behind the decimal.
    cout << setprecision(2) << fixed;
    
    //While loop with account number as conditional statement.
    while (account != -1) {
        //Prompt for beginning balance, and read in.
        cout << "Enter beginning balance: $";
        cin >> balance;
        
        //Prompt for customer's charges, and read in.
        cout << "Enter total charges: $";
        cin >> charges;
        
        //Prompt for customer's credits, and read in.
        cout << "Enter total credits: $";
        cin >> credits;
        
        //Prompt for customer's credit limit, and read in.
        cout << "Enter credit limit: $";
        cin >> creditLimit;
        
        //Calculates new balance, based on balance, plus charges, minus credits.
        balance = balance + charges - credits;
        
        //Display new balance.
        cout << "New balance is $" << balance << endl;
        
        //If statement to check if balance has exceeded credit limit.
        if (balance > creditLimit) {
            cout << "Account: \t$" << account << endl <<
            "Credit limit: \t$" << creditLimit << endl <<
            "Balance: \t$" << balance << endl <<
            "Credit Limit Exceeded." << endl;
        }
        
        //Prompt for new account number, or to quit.
        cout << "\nEnter Account Number (or -1 to quit): ";
        cin >> account;
    }
    
    cout << "\nProgram Terminated.";
    return 0;
}
