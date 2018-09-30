/*****************************************************************************************************************************
 * Austin Tice
 * CISP 1020
 * 9/18/18
 * This program will allow for a user to enter any sort of number or letter and will convert it into a phone number
 *****************************************************************************************************************************/

#include <iostream>
#include <string>
#include <locale>

void checkCharacter(std::string&, char);

int main(){
	// Ask the user to input their phone number - it is important to note that we should prepare for a case where there are only numbers entered as well
	std::string number;
	// We may need to consider the possibility of a user entering dashes or not entering dashes - this could completely change how we format the content or loop through.
	std::cout << "Please enter your phone number or your favorite 10 letters..It doesn't matter to me as long as it is formatted ###-###-#### :)" << std::endl;
	std::getline(std::cin,number);
	while(number.length() != 12){
		std::cout << "Please enter a valid phone number in the format ###-###-####" << std::endl;
		std::getline(std::cin, number);
	}
	std::string phoneNumber = "";
	for(int i = 0; i < number.length(); i++){
		char currentChar = number.at(i);
		//std::cout << "current character is: " << currentChar << std::endl;
		checkCharacter(phoneNumber, currentChar);
	}
	std::cout << "Phone number is: " << phoneNumber << std::endl;
	return 0;
}

// function that will check each character in our loop in main, takes in the address of the phone number variable
// we set in main, and also the current character.  It then uses a switch(which we've assured makes the character
// passed in a lowercase form by using tolower()) to determine which character was put in, and if it was'n't a letter
// we can just concatenate the string with the current character.
void checkCharacter(std::string &phoneNumber, char i){
	std::locale loc;
		switch(std::tolower(i,loc)){
			case 'a':
			case 'b':
			case 'c':
				phoneNumber += '2';
			break;
			case 'd':
			case 'e':
			case 'f':
				phoneNumber += '3';
			break;
			case 'g':
			case 'h':
			case 'i':
				phoneNumber += '4';
			break;
			case 'j':
			case 'k':
			case 'l':
				phoneNumber += '5';
			break;
			case 'm':
			case 'n':
			case 'o':
				phoneNumber += '6';
			break;
			case 'p':
			case 'q':
			case 'r':
			case 's':
				phoneNumber += '7';
			break;
			case 't':
			case 'u':
			case 'v':
				phoneNumber += '8';
			break;
			case 'w':
			case 'x':
			case 'y':
			case 'z':
				phoneNumber += '9';
			break;
			default:
				phoneNumber += i;
		}
}
