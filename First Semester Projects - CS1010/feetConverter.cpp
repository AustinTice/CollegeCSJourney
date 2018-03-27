// Austin_TiceConvert.cpp : Defines the entry point for the console application.
// Austin Tice
// CISP 1010- PASS7 Functions
// This program will accept user input and then manipulate that data to return that value in miles,yards, or inches.

// Header Files
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Global Variables
double finalMiles,finalYards,finalInches, feetChoice;
int optionChoice;

// Function prototypes
void menu();
double showMiles(double);
double showYards(double);
double showInches(double);

// Begin main function
int main()
{
	// Ask for user input
	cout << "Enter a distance in feet: ";
	cin >> feetChoice;
	cout << "\n";
	// Everything happens in the main function following this call.
	menu();
	return 0;
}

// Function Declarations
void menu(){
	// Check to make sure feet is postitive
	if(feetChoice >= 0){
		// Display menu of options
		cout << "1.\tConvert to miles" << endl;
		cout << "2.\tConvert to yards" << endl;
		cout << "3.\tConvert to inches" << endl;
		cout << "4.\tExit the program" << endl << endl;
		// Ask user for which conversion method they would like.
		cout << "Enter your choice: ";
		cin >> optionChoice;
		// Take the user input and decide which function to invoke with this switch statement
		switch(optionChoice){
			case 1:
				cout << fixed << setprecision(1) << feetChoice << " feet is " << setprecision(8)
					 << showMiles(feetChoice) << " miles" << endl << endl;
				// recursion to go back to the beginning of this method
				menu();
				break;
			case 2:
				cout << fixed << setprecision(1) << feetChoice << " feet is " << setprecision(4)
					 <<  showYards(feetChoice) << " yards" << endl << endl;
				// recursion to go back to the beginning of this method
				menu();
				break;
			case 3:
				cout << fixed << setprecision(1) << feetChoice << " feet is " << setprecision(4)
					 <<  showInches(feetChoice) << " inches" << endl << endl;
				// recursion to go back to the beginning of this method
				menu();
				break;
				// Default operator if the value of the user input is not 1,2, or 3
			default:
				cout << "Please enter a valid number: " << endl;
				// Checks specifically for 4
				if(optionChoice == 4){
					cout << "I had a blast converting with you today! Let's do it again sometime :)"
						 << endl;
					break;
				}
				// recursion to go back to the beginning of this method
				menu();
		} // end switch
	} // end if

	// if feet choice is negative we will get another distance and reinvoke the function through recursion
	else{
		cout << "You input an invalid number! Try again." << endl;
		cout << "Enter a distance in feet: ";
		cin >> feetChoice;
		menu();
	}
}
// Calculate miles
double showMiles(double feet){
	finalMiles = feet/5280;
	return finalMiles;
}
// Calculate Yards
double showYards(double feet){
	finalYards = feet/3;
	return finalYards;
}
// Calculate Inches
double showInches(double feet){
	finalInches = feet * 12;
	return finalInches;
}
