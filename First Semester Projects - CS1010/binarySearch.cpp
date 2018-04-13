#include "stdafx.h"
#include <iostream>
using namespace std;
// Prototype
int binarySearch(int arr[], int, int);

int main(){
	int test[] = {1,2,3,4,5,6,7,8,9,10};
	cout << "Binary Search - Position when value was found = " << binarySearch(test, 8, 10) << endl;
	return 0;
}
// Definition
int binarySearch(int arr[], int value, int size){
	// first element we choose to search with
	int first = 0;
	// last element we search through -1 due to 0 indexing.
	int last = size-1;
	// Check if the value has been found yet
	bool found = false;
	// Current position in the array
	int pos = -1;
	// Middle value that we test > || < on.
	int middle = 0;
	// Loop until it's either true or first is equal to last(i.e. It's not in the array)
	while(found != true && first <= last){
		// Determines the middle value, and since it is an int it will truncate any decimal values
		// Making it learly identical to a Math.floor() function.
		middle = (first+last)/2;
		// Check to see if the value has been found yet.
		if(arr[middle] == value){
			// If it has change the position to the middle and set found to true - loop ends.
			found = true;
			pos = middle;
		}
		/*
		The logic here is a bit hard to follow but tag along here:
		if the current iteration of middle is greater than the value we're searching for(since we
		assume that the array we're searching has already been sorted) we want the last value to
		equal the index just before where we just checked. This is because we know that the value
		cannot be after that. (REMEMBER: This only works if the array has already been sorted).
		*/
		else if(arr[middle] > value){
			last = middle -1;
		}
		// Refer to comment directly above the 'else-if' that represents the same logic, but for the last
		// value instead of the first.
		else {
			first = middle +1;
		}
	}
	// The value we want to return is the index(pos) where the value we're looking for was found.
	return pos;
}
