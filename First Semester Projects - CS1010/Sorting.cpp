// Writng Bubble Sort and Selection Sort Algorithms

#include <iostream>
using namespace std;
void bubbleSort(int[],int);
void selectionSort(int[], int);

int main()
{
	int testArr[] = {45,18,10,3};
	int testArr2[] = {45,18,10,3};
	bubbleSort(testArr, 4);
	selectionSort(testArr2, 4);
	cout << "Array 1:" << endl;
	for(int i = 0; i < 4; i++){
		cout << testArr[i] << endl;
	}
	cout << "Array 2: " << endl;
	for(int i = 0; i < 4; i++){
		cout << testArr2[i] << endl;
	}
	system("pause");
	return 0;
}
// Bubble Sort Algorithm
void bubbleSort(int arr[], int size){
	bool swapped;
	int temp;
	do{
		swapped = false;
		for(int i = 0; i < size - 1; i++){
			if(arr[i] > arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swapped = true;
			}
		}
	} while(swapped);
}

// Selection Sort Algorithm
void selectionSort(int arr[], int size){
	for(int startScan = 0; startScan < size - 1; startScan++){
	int minIndex = startScan;
	int minValue = arr[startScan];
	int i;
	for(int i = startScan + 1; i < size; i++){
		if(arr[i] < minValue){
			minValue = arr[i];
			minIndex = i;
		}
	}
	arr[minIndex] = arr[startScan];
	arr[startScan] = minValue;
	}
}
