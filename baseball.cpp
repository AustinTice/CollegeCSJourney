// Created By Austin Tice 1/29/18
#include <iostream>
using namespace std;

int main() {
	// Declare variables
	double count, price, total;
	cout << "How many baseballs did you buy?\n";
	cin >> count;
	cout << "How much did each baseball cost?\n";
	cin >> price;
	total = count*price;
	cout << "You spent a total of $" << total << " on baseballs" << endl;
    return 0;
}
