// boxOffice.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	// Declaring Variables
	string movieName;
	int adultTicketsSold,adultTicketsPrice, childrenTicketsSold,childrenTicketsPrice;
	double grossRevenue, distributorRevenue, netRevenue;
	// Begin asking questions to users
	cout <<	"What was the name of the movie?\n";
	getline(cin,movieName);
	cout << "How many adult tickets were sold?\n";
	cin >> adultTicketsSold;
	cout << "How many child tickets were sold?\n";
	cin >> childrenTicketsSold;
	// Beginning calculations for price of tickets * amount of tickets
	adultTicketsPrice = adultTicketsSold * 10;
	childrenTicketsPrice = childrenTicketsSold * 6;
	grossRevenue = adultTicketsPrice + childrenTicketsPrice;
	// Distributor only received 20% of the gross income
	distributorRevenue = grossRevenue * .2;
	netRevenue = grossRevenue - distributorRevenue;
	// Begin 2 column output that displays name, how many tickets adult and child, gross revenue, distributor cut, and net revenue.
	// Width is set to 35 spaces with a fixed 2 decimal places for calculating money
	cout << setprecision(2) << fixed << setw(35)
		 << left << "Movie Name:"
		 << right <<"\"" <<movieName<<"\"" << "\n" << setw(35)
		 << left << "Adult Tickets Sold:"
		 << right << adultTicketsSold << "\n" << setw(35)
		 << left << "Child Tickets Sold:"
		 << right << childrenTicketsSold << "\n" << setw(35)
		 << left << "Gross Box Office Revenue:"
		 << right << "$" << grossRevenue << "\n" << setw(35)
		 << left << "Amount Paid to Distributor:"
		 << right << "-$"<<distributorRevenue << "\n" << setw(35)
		 << left << "Net Box Office Revenue:"
		 << right << "$" << netRevenue << endl;
	system("pause");
	return 0;
}
