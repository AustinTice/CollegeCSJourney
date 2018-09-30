/* Austin Tice
   CISP 1020
   9/11/2018
   This program will calculate MY middle school's attendance rate.
*/
#include <iostream>


int main(){
	// Main variables to store the data from our loop
	int numberOfClasses = 0;
	double presentStudents = 0;
	double totalStudentsInClass = 0;
	// output asking about classrooms
	std::cout << "Tice middle school's attendance rate calculator" << std::endl;
	std::cout << "_______________________________________________" << std::endl << std::endl;
	std::cout << "How many classrooms are in the middle school?" << std::endl;
	std::cin >> numberOfClasses;
	// loop through the number of classes asking for student info
	for(int i = 1; i <= numberOfClasses; i++){
		// variables to store the temporary students so that we can add those into our variables in the parent function.
		int temp1, temp2;
		std::cout << "How many students are in classroom " << i << "?" << std::endl;
		std::cin >> temp1;
		std::cout << "How many students are here today?" << std::endl;
		std::cin >> temp2;
		// Adding back into our main variables
		totalStudentsInClass += temp1;
		presentStudents += temp2;
	}
	// Output for the statistics
	std::cout << "Tice middle school statistics:" << std::endl
			  << "Total Students: " << totalStudentsInClass << std::endl
			  << "Total Students Present Today: " << presentStudents << std::endl
			  // you can get the absent students by subtracting total - present
			  << "Total Students Absent Today: " << totalStudentsInClass - presentStudents << std::endl
			  // multiplied by 100 to make this an actual percent that isnt a decimal amount
			  << "Attendance Rate: " << (presentStudents/totalStudentsInClass) * 100 << "%" << std::endl;
	return 0;
}
