#include <iostream>
using namespace std;

void AreaPerimeter (float radius, float &area, float &perimeter){ // Passing arguments by address (&)
	float pi = 3.1415926535;
	area = radius * radius * pi;
	perimeter = 2 * pi * radius;
}
	
int main () {
	
	float radius, area, perimeter;
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	
	AreaPerimeter(radius, area, perimeter);
	cout<<"Area: "<<area<<endl;
	cout<<"Perimeter: "<<perimeter;
}
