#include <iostream>
#include <cmath>

using namespace std;

class shape{
private:
	double height;
	double width;
	double areaValue;

public:
	shape(double aHeight, double aWidth){
		height = aHeight;
		width = aWidth;
	};

	void area(){
		areaValue = height*width;
		cout << "The area is " << areaValue <<endl;
	}
	
};

int main(){
	shape square(3.2, 4.5);
	cout << "SQUARE: ";
	square.area();

	shape triangle(1.2, 2.5);
	cout << "TRIANGLE: ";
	triangle.area();
	
	return 0;
}