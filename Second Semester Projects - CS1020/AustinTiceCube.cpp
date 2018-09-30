// AustinTiceCube.cpp : Defines the entry point for the console application.

#include <iostream>
#include <iomanip>
#include <cmath>


// Cube class that allows us to set edge length, get length and find area, volume, and faces.
class Cube{
private:
	double edgeLength;
public:
	// overloaded constructors
	Cube(){
		edgeLength = 0.0;
	}
	Cube(double x){
		edgeLength = x;
	}
	// start getters and setters
	void setEdgeLength(double x){
		edgeLength = x;
	}

	double getEdgeLength(){
		return edgeLength;
	}
	// returns the surface area of the cube given
	double surfaceArea(){
		// SA(SurfaceArea)
		double SA = 6 * pow(edgeLength, 2);
		return SA;
	}
	// Returns the volume of the cube given
	double getVolume(){
		return pow(edgeLength, 3);
	}
	// Returns the face of
	double getFaceDiagonal(){
		// FD(Face Diagonal)
		double FD = sqrt(2) * edgeLength;
		return FD;
	}
};

int main(){
	// this object will utilize the no parameter constructor
	Cube cube1;
	// This cube will utitilize the 1 parameter constructor
	Cube cube2(10);
	cube1.setEdgeLength(5.5);
	//format the output
	std::cout << std::fixed << std::setprecision(3);
	// Start outputting information by using the dot property for the classes
	std::cout << "Cube 1 - No Parameters" << std::endl;
	std::cout << "Edge Length: " << cube1.getEdgeLength() << std::endl;
	std::cout << "Surface Area: " << cube1.surfaceArea() << std::endl;
	std::cout << "Volume: " << cube1.getVolume() << std::endl;
	std::cout << "Face Diagonal: " << cube1.getFaceDiagonal() << std::endl;
	std::cout << std::endl;
	std::cout << "Cube 2 - 1 Parameter" << std::endl;
	std::cout << "Edge Length: " << cube2.getEdgeLength() << std::endl;
	std::cout << "Surface Area: " << cube2.surfaceArea() << std::endl;
	std::cout << "Volume: " << cube2.getVolume() << std::endl;
	std::cout << "Face Diagonal: " << cube2.getFaceDiagonal() << std::endl;
	return 0;
}
