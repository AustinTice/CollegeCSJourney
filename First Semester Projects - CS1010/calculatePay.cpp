// Lab10 - Part2.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Declaring prototype
void showDollars(double,double);

int main()
{
	// init variables
	double hourlyRate, hours;
	// Ask for input.
	cout << "How many hours did you work?" << endl;
	cin >> hours;
	cout << "How much do you get paid per hour?" << endl;
	cin >> hourlyRate;

	// call function
	showDollars(hourlyRate, hours);
	system("pause");
	return 0;
} // End main function

// This function return the hours worked * hourly rate.
void showDollars(double r, double h){
	cout << "Your paycheck for this week is " << (r * h) << endl;
}
