/*
 * When it is complete, the program will ask the user to enter
the width and length of a rectangle and then display the rectangle’s area. The program
calls the following functions, which have not been written:
• getLength – This function should ask the user to enter the rectangle’s length and
then return that value as a double .
• getWidth – This function should ask the user to enter the rectangle’s width and then
return that value as a double .
• getArea – This function should accept the rectangle’s length and width as arguments
and return the rectangle’s area. The area is calculated by multiplying the
length by the width.
• displayData – This function should accept the rectangle’s length, width, and area
as arguments and display them in an appropriate message on the screen.
 * */

#include <iostream>
using namespace std;


// will collect the length from the user
double getLength()
{
	double l;
	cout << "Please enter the length of the rectangle: ";
	cin >> l;
	return l;
}

// will collect the width from the user
double getWidth()
{
	double w;
	cout << "Please enter the width of the rectangle: ";
	cin >> w;
	return w;
}

// will get the area from the user
double getArea(double len, double wid)
{
	double a;
	a = len * wid;
	return a;
}

// will display the area for the user
void displayData(double length, double width, double area)
{
	cout << "Length: " << length << " x " << "Width: " << width << " = Area " << area << " units squared ";
}


int main() {
	double length, width, area;
	length = getLength();
	width = getWidth();
	area = getArea(length, width);
	displayData(length, width, area);
	return 0;
}
