//  Created by Austin Tice on 2/15/18.
//  Copyright © 2018 Austin Tice. All rights reserved

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	// B, L, and D are terms referring to Breakfast, Lunch, and Dinner.
	int BQuantity,LQuantity,DQuantity;
	// Declaring theses variables as constants because we are told that these are
	// finite numbers that will not change
	const float BCost = 5.50, LCost = 9.50, DCost = 16.50,
	BDiscPercent = .10, LDiscPercent = .15, DDiscPercent = .12;
	const int BMinOrderForDiscount = 10,LMinOrderForDiscount = 15,
	DMinOrderForDiscount = 8;
	// These variables are subjected to change and will not be declared as
	// constants.
	float BDiscAmount, LDiscAmount,DDiscAmount,
	BTotal,LTotal, DTotal, salesTax, mealsTotal, fullDiscount;
	// Assigning the variables that have been declared
	// Take in the totals of the quantity bought
	cout << "How many Breakfasts did you buy?" << endl;
	cin >> BQuantity;
	cout << "How many Lunches did you buy?" << endl;
	cin >> LQuantity;
	cout << "How many dinners did you buy?" << endl;
	cin >> DQuantity;
	// These are 3 conditionals to check if the discount should
	// apply based on how many order were purchased for the given
	// meal.
	if(BQuantity > BMinOrderForDiscount){
		BDiscAmount = (BCost * BDiscPercent)*BQuantity;
	}
	if(LQuantity > LMinOrderForDiscount){
		LDiscAmount = (LCost * LDiscPercent)*LQuantity;
	}
	if(DQuantity > DMinOrderForDiscount){
		DDiscAmount = (DCost * DDiscPercent)*DQuantity;
	}
	// Clarifying the total amounts for each by using our determined variables.
	BTotal = (BCost * BQuantity) - BDiscAmount;
	LTotal = (LCost * LQuantity) - LDiscAmount;
	DTotal = (DCost * DQuantity) - DDiscAmount;
	mealsTotal = BTotal + LTotal + DTotal;
	salesTax = (BTotal + LTotal + DTotal) * .10;
	fullDiscount = BDiscAmount + LDiscAmount + DDiscAmount;
	// Ready to start forming the user output (Receipt)
	cout << "Meal\t\tQuantity\tCost\tDiscount\tCost After Discount"
	<< endl;
	cout << "Breakfast\t   " << BQuantity << "\t   " <<setprecision(2)<< fixed <<
		"$" <<BQuantity*BCost <<"\t "<< "$" << BDiscAmount << "\t\t\t" << "$" << BTotal << endl;
	cout << "Lunch\t\t   " << LQuantity << "\t   " << setprecision(2) << fixed
		<< "$" << LQuantity*LCost <<"\t "<< "$" << LDiscAmount << "\t\t\t" << "$" << LTotal << endl;
	cout << "Dinner\t\t   " << DQuantity << "\t   " <<setprecision(2)<< fixed <<
		"$" << DQuantity*DCost <<"\t "<< "$" << DDiscAmount << "\t\t\t" << "$" <<DTotal << endl;
	cout << setw(48) << setprecision(2) << fixed << left <<"Total:" << right
		<< "$" <<mealsTotal << endl;
	cout << setw(48) << setprecision(2) << fixed << left << "Sales Tax:" << right
		<< "$" <<salesTax << endl;
	cout << setw(48) << setprecision(2) << fixed << left << "Total Due:" << right
		<< "$" <<mealsTotal + salesTax << endl;
	// Check if user has any sort of discount available, and if they do display
	// how much they saved.
	if(fullDiscount > 0){
		cout << "Thank you for choosing us as your catering provider! You saved $" << fullDiscount << " on your visit!" << endl;
	} else{
		cout << "Thank you for shopping with us! See ya next time :)" << endl;
	}
	return 0;
}
