//  Created by Austin Tice on 3/26/18.
//------------------------------------------------------------------------------
// Prototypes, but also the only available functions. so far
double add(double,double);
double sub(double,double);
double mult(double,double);
double divide(double,double);
double pwr(double,double);
double sqrt(double);
// Still need to work on this one - double log(double,double);


// Addition
double add(double num, double num2){
	return (num + num2);
}

// Subtraction
double sub(double num, double num2){
	return (num - num2);
}

// Multiplication
double mult(double num, double num2){
	return (num * num2);
}

// Division
double divide(double num, double num2){
	return (num / num2);
}

// Square Root - Takes the base of the problem as the first param and the
// exponent as the second parameter and loops through exponent amount of times.
double pwr(double base, double exponent){
	double sum = 1;
	for(int i = 0; i < exponent; i++){
		sum *= base;
	}
	return sum;
}

double sqrtt(double num){
	double S = num;
	
}


int factorial(int num){
	// Default cases - Both 0 & 1 will return 1
	if(num == 0 || num == 1){
		return 1;
	}
	// total cannot begin at 0 because the answer will yield 0 every time.
	int total = 1;
	// Loop through num amount of times and mult the total = total * i;
	for(int i = num; i > 1; i--){
		total *= i;
	}
	return total; // return the factorial
}

// Logarithms - Takes the base as the first param and the number you're
// trying to find the logarithm of as the second param
/*double log(double base, double num){
	double log = 0;
	
	return log;
 }*/
