#include "stdafx.h"
#include <iostream>
// Prototypes
void sortScores(int*, int);
double averageScores(int*, int);

int main(){
	int numOfTests;
	int* a = nullptr;
	std::cout << "Enter the number of Tests that were taken" << std::endl;
	std::cin >> numOfTests;
	while(numOfTests < 0){
			std::cout << "Sorry, please enter a valid number" << std::endl;
			std::cin >> numOfTests;
		}
	a = new int[numOfTests];
	// This will allocate only the number of test that is entered into 'numOfTests' to 0.
	for(int i = 1; i <= numOfTests; i++){
		int tempScore;
		std::cout << "Enter the test score for test " << i << std::endl;
		std::cin >> tempScore;
		while(tempScore < 0){
			std::cout << "Sorry, please enter a valid number" << std::endl;
			std::cin >> tempScore;
		}
		a[i-1] = tempScore;
	}


	sortScores(&a[0], numOfTests);
	std::cout <<std::endl;
	for(int i = 0; i < numOfTests; i++){
		std::cout << "Test " << i << ": ";
		std::cout << *(a + i) << std::endl;
	}
	std::cout << "The average grade for the test was " << averageScores(&a[0], numOfTests) << std::endl;
	delete [] a;
	system("pause");
	return 0;
}

void sortScores(int *array, int n) {
  bool swapped = true;
  int j = 0;
  int temp;

  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < n - j; ++i) {
      if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = true;
      }
    }
  }
}

double averageScores(int *a, int n){
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum += *(a + i);
	}
	return sum/n;
}
