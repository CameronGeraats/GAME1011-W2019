#include <iostream>
#include <cmath>
using namespace std;

// Class declarations
class Circle 
{
	// Variables
private:
	double radius;

	// Function
public:
	// Prototypes for regular functions
	void setRadius(double);
	double getArea();
};

void Circle::setRadius(double r)
{
	cout << "Regular function" << endl;
	radius = r;
}

double Circle::getArea() 
{ 
	return 3.14 * pow(radius, 2); 
}
/*
int main()
{
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	cout << "The area of circle1 is " << circle1.getArea() << endl;
	cout << "The area of circle2 is " << circle2.getArea() << endl;

	return 0;
}
*/