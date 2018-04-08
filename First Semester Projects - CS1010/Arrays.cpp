#include <iostream>
using namespace std;

// Prototypes
int average(int arr[]);
int highest(int arr[]);

int main()
{
	// init fish array
	int fish[10];
	int caught;
	// loo[ through getting caught amt
	for(int i = 0; i < 10; i++){
		cout << "How many fish did you catch?" << endl;
		cin >> caught;
		fish[i] = caught;
	}
	// write who caught what
	for(int i = 0; i < sizeof(fish)/sizeof(fish[0]); i++){
		cout << "Fisherman " << i+1	<< " caught " << fish[i] << " fish!" << endl;
	}
	// Print the average and biggest catches of the day!
	cout << "The average number of fish is: " << average(fish) << endl;
	cout << "The biggest catch of the day was " << highest(fish) << " fish!" << endl;
	system("pause");
	return 0;
}

// Definition
int average(int arr[]){
	double total = 0;
	double avg = 0;
	const int size = 10;
	for(int i = 0; i < 10; i++){
		total += arr[i];
	}
	avg = total/size;
	return avg;
}

int highest(int arr[]){
	int highest = 0;
	for(int i = 0; i < 10; i++){
		if(arr[i] > highest){
			highest = arr[i];
		}
	}
	return highest;
}
