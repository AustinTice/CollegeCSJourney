// TicePASS6.cpp.cpp : Defines the entry point for the console application.
// Name : Austin Tice
// Date: 3/19/2018
// Class : CISP 1010
// Assignment: Programming Assignment 6
// Purpose: This program reads 'BeginningBalance.txt', feeds that information through a while loop that will run twice, calculates the totals
// of the information given and outputs that info. In this process it is also writing to a new file that is dynamically created called 'newBal.txt'.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	// initialize variables
	double customerNumber,
		   beginningBalance, beginningBalanceTotal=0,
		   financeCharge, financeChargeTotal=0,
		   purchases, purchasesTotal=0,
		   payments, paymentsTotal=0,
		   endingBalance, endingBalanceTotal=0;
	// Creating and opening streams for the beginning file that will be read and creating the newBalance file
	fstream beginningBal,
		    newBal;
	beginningBal.open("BeginningBalance.txt");
	newBal.open("newBal.txt", ios::out);
	// Beginning Output
	cout << "Cust No.   " << "Beg. Bal.   " << "Finance Charge   " << "Purchases   " << "Payments   " << "Ending Bal.\n";
	// Begin iteration through "BeginningBalance.txt"
	while(beginningBal >> customerNumber){
		// Reading Customer Number into customerNumber and writing to newBal
		cout << customerNumber << "         ";
		newBal << customerNumber << endl;
		// Reading Beginning Balance into beginningBalance
		beginningBal >> beginningBalance;
		cout << fixed << setprecision(2) << beginningBalance << "\t    ";
		// Calculating BeginningBalance total
		beginningBalanceTotal += beginningBalance;
		// Calculate Finanace Charge
		financeCharge = beginningBalance * .01;
		cout << financeCharge << "\t  ";
		// Calculating Finance Charge total
		financeChargeTotal += financeCharge;
		// Reading Purchases into purchases
		beginningBal >> purchases;
		cout << purchases << "     ";
		// Calculate the purchases total
		purchasesTotal += purchases;
		// Read Payments into payments
		beginningBal >> payments;
		cout << payments << "\t";
		// Calculate payments total
		paymentsTotal += payments;
		// Calculate endingBalance
		endingBalance = beginningBalance + financeCharge + purchases - payments;
		cout << endingBalance << endl;
		// Calculate endingBalance Total
		endingBalanceTotal += endingBalance;
		//Formatted like this to ensure that only the ending balance has precision to the hundreths place.
		newBal << fixed << setprecision(2) << endingBalance << fixed << setprecision(0) << endl;
		cout << fixed << setprecision(0);
	}
	// This row of ugly text is responsible for formatting the totals of the above 2 columns
	cout << "\nTotals  " << fixed << setprecision(2) <<"    "<< beginningBalanceTotal <<"\t    "<< financeChargeTotal << "\t  " << purchasesTotal << "     "
		<< paymentsTotal << "\t" << endingBalanceTotal << endl;
	// Close the opened streams
	beginningBal.close();
	newBal.close();
	system("pause");
	return 0;
} d
