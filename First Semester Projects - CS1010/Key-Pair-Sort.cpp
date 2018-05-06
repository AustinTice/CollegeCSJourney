// ReadAndSort.cpp : Defines the entry point for the console application.
// 1. Open & Read the file
// 2. Intermittenly assign the values to key-value pairs
// 3. Print a 100 row - 2 column Key Value pair chart showing how many numbers were read.

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Prototypes
void readFile(int[], int);
void bubbleSort(int[], int);
void swap(int*, int*);
void printArray(int[], int);
void setKeyPairVals(int[], int[], int);
void printPairs(int[], int);
int main()
{
	int numArr[1000];
	int values[100];
	for(int i = 0; i < 100; i++){
		values[i] = 0;
	}
	// Number of key-value pairs the user wants to see shown
	int checked;
	cout << "How many elements would you like checked?(Up to 1000)";
	cin >> checked;
	while(checked < 0 || checked > 1000){
		cout << "Please enter a number in the given range." << endl;
		cin >> checked;
	}
	// Read the 'Number.txt' file
	readFile(numArr, checked);
	// Show the file elements we're working with unsorted
	cout << "Unsorted Array: " << endl;
	printArray(numArr, checked);
	// Sorting the elements in ascending order
	bubbleSort(numArr, checked);
	cout << "Sorted Array: " << endl;
	// Print the sorted Array
	printArray(numArr, checked);
	// Set the key pair values for all the number (1-100)
	setKeyPairVals(numArr, values, checked);
	// Print the pairs that have been stored in the values array
	printPairs(values, checked);
	system("pause");
	return 0;
}

// Function definitions
// Provide size for the array being passed
void readFile(int arr[], int size){
	int count = 0;
	std::fstream nums;
	nums.open("Numbers.txt");
	while(nums >> arr[count]){
		count++;
	}
}
// This is the function used for swapping the values in the bubbleSort method
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Sorting the elements via Bubble Sort method
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

// Last i elements are already in place
   for (j = 0; j < n-i-1; j++)
      if (arr[j] > arr[j+1])
        swap(&arr[j], &arr[j+1]);
}
// Used to print the unsorted and sorted arrays
void printArray(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		cout << arr[i] << endl << endl;
	}
}

// We're setting the values of the values array to have the correct key pair values
void setKeyPairVals(int arr[], int vals[], int n){
	int temp;
	for(int i = 0; i < (n - 1); i++){
		temp = arr[i];
		vals[temp]++;
	}
}
// Print the values that are stored in the values array
void printPairs(int vals[], int n){
	cout << "Key\tValue" << endl;
	for(int i = 1; i < (n + 1); i++){
		cout << i << ":\t" << vals[i-1] << endl;
	}
}
