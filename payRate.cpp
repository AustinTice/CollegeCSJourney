#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	const double pay = 39000;
	const double twiceAMonth = 24;
	const double biWeekly = 26;
	cout << setprecision(2) << fixed;
	cout << "Paid Twice a month you will get: $" << pay / twiceAMonth << " per paycheck" << endl;
	cout << "Paid Bi-weekly you will get: $" << pay / biWeekly << " per paycheck" << endl;
	system("pause");
	return 0;
}
