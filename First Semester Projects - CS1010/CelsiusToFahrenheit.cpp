// CelsiusToFahrenheit.cpp : Defines the entry point for the console application.
// Name: Austin Tice
// Date: 2/26/2018
// This program converts Celsius to Fahrenheit (0-30).

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	// Init Variable F.
	double F = 0;
	// Beginning for loop to convert Celsius(C) to Fahrenheit(F).
	for(int C = 0; C <= 30; C++){
		// Assign F to the conversion formula. Using 1.8 instead of 9/5.
		F = 1.8 * C + 32;
		// Output the conversions to the console.
		cout << setprecision(1) << fixed << "Celsius: " << C << "\nFahrenheit: " << F << "\n\n";
	}
	system("pause");
	return 0;
}
