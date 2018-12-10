#include "GeometricObject.h"
#include "DerivedTriangle.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter three sides: ";
	double side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	Triangle triangle(side1, side2, side3);

	cout << "Enter the color: ";
	string color;
	cin >> color;

	cout << "Enter 1/0 for filled (1: true, 0: false): ";
	bool filled;
	cin >> filled;

	triangle.setColor(color);
	triangle.setFilled(filled);

	cout << "Area is " << triangle.getArea() << endl;
	cout << "Perimeter is " << triangle.getPerimeter() << endl;
	cout << "Color is " << triangle.getColor() << endl;
	cout << "Filled is " <<
		(triangle.isFilled() ? "true" : "false") << endl;

	return 0;

}
