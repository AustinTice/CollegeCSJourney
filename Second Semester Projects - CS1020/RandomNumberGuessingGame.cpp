// AustinTiceLab1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
// user gets to guess the number
// display too high try again or too low try again


int main()
{
	srand(time(0));

	int favNumber = (rand() % 100) + 1;
	int userGuess;
	int guesses = 0;
	bool correct = false;
	std::cout << "Guess a Number from 0-100" << std::endl;
	std::cin >> userGuess;
	while(!correct){
		if(userGuess > favNumber){
			std::cout << "Too high friend, try again" << std::endl;
			std::cin >> userGuess;
			guesses++;
		}
		else if(userGuess < favNumber) {
			std::cout << "Too low friend, try again" << std::endl;
			std::cin >> userGuess;
			guesses++;
		}
		else{
			correct = true;
		}
	}

	std::cout << "You have completed you journey son. It only took you " << guesses << " tries...lol" << std::endl;

	system("pause");
	return 0;
}
