/*
	Austin Tice
	9/10/2018
	CISP 1020
	This program will emulate a real life slot machine
*/


#include <iostream>
#include <windows.h>
#include <string>
#include <ctime>


int main(){
	// total money put into the machine
	int totalMoneyPlayed = 0;
	// total money won from the machine
	int totalMoneyWon = 0;
	// Temporary variable to hold how much money the player just put into the machine
	int moneyEntered = 0;
	// variable to check and see if the player wants to keep playing the game
	bool isPlaying = true;
	// Number of turns the player has taken - just an extra fun feature
	int timesPlayed = 0;
	// fun feature to make the game a bit more personal
	std::string name;
	// Beginning output with the player
	std::cout << "Welcome to the Tice Casino!\n\nWhat is your name?" << std::endl;
	std::getline(std::cin, name);
	std::cout << "How much money would you like to enter into the slot machine?" << std::endl;
	std::cin >> moneyEntered;
	// This is my flag loop that I check at the end to see if the player would like to spin again
	while(isPlaying == true){
		// input validation on the denomination to ensure that it can only be in quantities of $5
		while((moneyEntered % 5) != 0){
			std::cout << "Sorry, we only take denominations in quantities of $5. Try another amount." << std::endl;
			std::cin >> moneyEntered;
		}
		// Keeping up with how many times the user spins.
		timesPlayed++;
		// after we get an acceptable amount of money we can go ahead and add it to our total played
		totalMoneyPlayed += moneyEntered;
		// Possible options that the player could get for each spin
		std::string options[6] = {"Cherries", "Oranges", "Plums", "Bells", "Melons", "Bars"};
		// This function works with rand() to allow for maximum randomness based on the current time
		srand(time(0));

		std::cout << name << " has played $" << moneyEntered << " are you ready to play?\nYou have played " << timesPlayed << " times so far. Best of luck, SPIN EM!" << std::endl;
		// windows.h function that allow the console to pause for 2 seconds to add dramatic affect.
		Sleep(1000);
		std::cout << "..." << std::endl;
		Sleep(1000);
		std::string spin1 = options[rand() % 6];
		std::cout << "First spin: " << spin1 << std::endl;
		Sleep(1000);
		std::cout << "..." << std::endl;
		Sleep(1000);
		std::string spin2 = options[rand() % 6];
		std::cout << "Second spin: " << spin2 << std::endl;
		Sleep(1000);
		std::cout << "..." << std::endl;
		Sleep(1000);
		std::string spin3 = options[rand() % 6];
		std::cout << "Third spin: " << spin3 << std::endl << std::endl;
		// Checking if all the spins are the same then the player will win 3 times their original amount input
		if(spin1 == spin2 && spin2 == spin3){
			std::cout << "JACKPOT! You just won 3 times your original amount of " << moneyEntered
					  << ".\nMeaning you just won " << moneyEntered * 3 << std::endl;
			totalMoneyWon += (moneyEntered * 3);
		}
		// Checking if all the spins are the same then the player will win 3 times their original amount input
		else if(spin1 == spin2 || spin2 == spin3 || spin1 == spin3){
			std::cout << "INCREDIBLE! You just won 2 times your original amount of " << moneyEntered
					  << ".\nMeaning you just won " << moneyEntered * 2 << std::endl;
			totalMoneyWon += (moneyEntered * 2);
		}
		// default case if the player has no matches and loses
		else{
			std::cout << "Sorry. You got unlucky this time..You'll get em' next time!" << std::endl << std::endl;
		}
		// Stores the answer to the question of whether the player wants to keep playing
		int answer;
		std::cout << "Do you wanna keep playing? Enter '1' for yes, or '0' for no" << std::endl;
		std::cin >> answer;
		// input validation for the answer
		while(answer < 0 || answer > 1){
			std::cout << "Please enter '1' for yes, or '0' for no." << std::endl;
			std::cin >> answer;
		}
		// this is the yes case
		if(answer == 1){
			std::cout << "Woohoo! Let's keep the fun going!\nHow much money do you wanna put up this time?" << std::endl;
			std::cin >> moneyEntered;
		}
		// no case
		else{
			isPlaying = false;
		}
	}
	// Print out their game statistics if they decided that they were done playing
	std::cout << "\nThanks so much for playing at Tice Casino!\nHere are the statistics from your stay:" << std::endl
			  << "You won: $" << totalMoneyWon << std::endl
			  << "You spent: $" << totalMoneyPlayed << std::endl
			  << "Times you played: " << timesPlayed << std::endl << std::endl;
	// feature to check if the player won or lost money to either congratulate or console them as they leave the game.
	if(totalMoneyPlayed > totalMoneyWon){
		std::cout << "Hey, maybe you didn't come out on top, but you'll get em' next time.\nCome see us again soon! :)" << std::endl;
	}
	else{
		std::cout << "Well friend, CONGRATULATIONS! You won a total of $" << totalMoneyWon - totalMoneyPlayed << " today." << std::endl;
	}
	return 0;
}
