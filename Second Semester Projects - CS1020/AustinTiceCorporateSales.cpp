// AustinTiceCorporateSales.cpp : Defines the entry point for the console application.

#include <iostream>
#include <iomanip>
#include <string>

struct CorpData{
	// public member variables
	std::string division;
	double firstQ;
	double secondQ;
	double thirdQ;
	double fourthQ;
	// Constructor that allows us to init our variables when init'ing our object
	CorpData(std::string d, double Q1, double Q2, double Q3, double Q4){
		division = d;
		firstQ = Q1;
		secondQ =Q2;
		thirdQ = Q3;
		fourthQ = Q4;
	}
};

void printData(const CorpData &East, const CorpData &West, const CorpData &South,const CorpData &North){
	// These are the annual sales for each of the divisions
	double eastTotal = East.firstQ + East.secondQ + East.thirdQ + East.fourthQ;
	double westTotal = West.firstQ + West.secondQ + West.thirdQ + West.fourthQ;
	double southTotal = South.firstQ + South.secondQ + South.thirdQ + South.fourthQ;
	double northTotal = North.firstQ + North.secondQ + North.thirdQ + North.fourthQ;

	// These are the Average quarters for the East Division
	double eastQ1Avg = ( East.firstQ / eastTotal) * 100;
	double eastQ2Avg = ( East.secondQ / eastTotal) * 100;
	double eastQ3Avg = ( East.thirdQ / eastTotal) * 100;
	double eastQ4Avg = ( East.fourthQ / eastTotal) * 100;

	// These are the Average quarters for the West Division
	double westQ1Avg = ( West.firstQ / westTotal) * 100;
	double westQ2Avg = ( West.secondQ / westTotal) * 100;
	double westQ3Avg = ( West.thirdQ / westTotal) * 100;
	double westQ4Avg = ( West.fourthQ / westTotal) * 100;

	// These are the Average quarters for the South Division
	double southQ1Avg = ( South.firstQ / southTotal) * 100;
	double southQ2Avg = ( South.secondQ / southTotal) * 100;
	double southQ3Avg = ( South.thirdQ / southTotal) * 100;
	double southQ4Avg = ( South.fourthQ / southTotal) * 100;

	// These are the Average quarters for the North Division
	double northQ1Avg = ( North.firstQ / northTotal) * 100;
	double northQ2Avg = ( North.secondQ / northTotal) * 100;
	double northQ3Avg = ( North.thirdQ / northTotal) * 100;
	double northQ4Avg = ( North.fourthQ / northTotal) * 100;

	// formatting the output
	std::cout << std::fixed << std::setprecision(2);
	// East Output
	std::cout << "East Division Statistics:" << std::endl;
	std::cout << "First Quarter Average Sales Percentage: " << eastQ1Avg << "% at $" << East.firstQ << std::endl;
	std::cout << "Second Quarter Average Sales Percentage: " << eastQ2Avg << "% at $" << East.secondQ << std::endl;
	std::cout << "Third Quarter Average Sales Percentage: " << eastQ3Avg << "% at $" << East.thirdQ << std::endl;
	std::cout << "Fourth Quarter Average Sales Percentage: " << eastQ4Avg << "% at $" << East.fourthQ << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	// West Output
	std::cout << "West Division Statistics:" << std::endl;
	std::cout << "First Quarter Average Sales Percentage: " << westQ1Avg << "% at $" << West.firstQ << std::endl;
	std::cout << "Second Quarter Average Sales Percentage: " << westQ2Avg << "% at $" << West.secondQ << std::endl;
	std::cout << "Third Quarter Average Sales Percentage: " << westQ3Avg << "% at $" << West.thirdQ << std::endl;
	std::cout << "Fourth Quarter Average Sales Percentage: " << westQ4Avg << "% at $" << West.fourthQ << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	// South Output
	std::cout << "South Division Statistics:" << std::endl;
	std::cout << "First Quarter Average Sales Percentage: " << southQ1Avg << "% at $" << South.firstQ << std::endl;
	std::cout << "Second Quarter Average Sales Percentage: " << southQ2Avg << "% at $" << South.secondQ << std::endl;
	std::cout << "Third Quarter Average Sales Percentage: " << southQ3Avg << "% at $" << South.thirdQ << std::endl;
	std::cout << "Fourth Quarter Average Sales Percentage: " << southQ4Avg << "% at $" << South.fourthQ << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	// North Output
	std::cout << "North Division Statistics:" << std::endl;
	std::cout << "First Quarter Average Sales Percentage: " << northQ1Avg << "% at $" << North.firstQ << std::endl;
	std::cout << "Second Quarter Average Sales Percentage: " << northQ2Avg << "% at $" << North.secondQ << std::endl;
	std::cout << "Third Quarter Average Sales Percentage: " << northQ3Avg << "% at $" << North.thirdQ << std::endl;
	std::cout << "Fourth Quarter Average Sales Percentage: " << northQ4Avg << "% at $" << North.fourthQ << std::endl;
	std::cout << "----------------------------------------" << std::endl;
}

int main(){
	// declaring our constant objects to reflect each division
	const CorpData East("East", 975,4565,5465,1325);
	const CorpData West("West", 6546,1326,136,1536);
	const CorpData South("South", 815,545,765,985);
	const CorpData North("North", 915,875,5654,587);
	// Our function to print the annual sales and the quarterly averages
	printData(East, West, South, North);
	return 0;
}
