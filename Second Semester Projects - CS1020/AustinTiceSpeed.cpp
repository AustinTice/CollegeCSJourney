/* Austin Tice
   CISP 1020
   9/10/2018
   This program will determine and output the speed of light under the 3 mediums air, water, and steel. Including user input and input validation.
*/
#include "stdafx.h"
#include <iostream>
#include <iomanip>

void displayMenu();
void displayTime(int);
int main(){
	// variable used to store the distance the user inputs
	int userPick;
	// calls the function to show the user the options to pick from.
	displayMenu();
	std::cin >> userPick;
	// call our main displayTime that will use the pick input to determine which medium to calculate the distance for.
	displayTime(userPick);
	system("pause");
	return 0;
}
// This will show our menu
void displayMenu(){
	std::cout << "Select one of the following:\n\n" 
			  << " Medium\t\tSpeed" << std::endl
		      << "1. Air\t\t1,100 ft/s" << std::endl
			  << "2. Water\t4,900 ft/s" << std::endl
			  << "3. Steel\t16,400 ft/s" << std::endl;
}

void displayTime(int userPick){
	// formatting for 4 decimal places
	std::cout << std::fixed << std::setprecision(4);
	// Init variables for speed of light under the following 3 mediums
	double airFeetPerSecond = 1100;
	double waterFeetPerSecond = 4900;
	double steelFeetPerSecond = 16400;
	// Used to determine the time via the given medium
	double timeItWouldTake;
	// input validation since we only have 3 options we check those cases
	while(userPick < 1 || userPick > 3){
		std::cout << "Enter a valid number" << std::endl;
		std::cin >> userPick;
	}
	// init our distance
	int userDistance = 0;
	// ask the user that they want to check for
	std::cout << "What distance are you traveling?" << std::endl;
	std::cin >> userDistance;
	// use the distance inputted to change our timeItWouldTake variables value and ensure the proper calculation
	switch(userPick){
		case 1:
			timeItWouldTake = (userDistance / airFeetPerSecond);
			break;
		case 2:
			timeItWouldTake = (userDistance / waterFeetPerSecond);
			break;
		case 3:
			timeItWouldTake = (userDistance / steelFeetPerSecond);
			break;
			
	}	
	//output our final string after getting all the appropriate information from the user.
		std::cout << "It would take " << timeItWouldTake << " seconds to travel " << userDistance << " feet.\nThanks for playing!" << std::endl;
}