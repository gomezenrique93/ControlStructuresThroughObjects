/*
20. Pizza Pi
Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size
can be divided into. The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
C) Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know
the following facts:
• Each slice should have an area of 14.125 inches.
• To calculate the number of slices, simply divide the area of the pizza by 14.125.
• The area of the pizza is calculated with this formula:
Area = π r 2
 */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    //Variable Section
    const float PI = 3.14159;
    const float SLICE_AREA = 14.125;
    double diameter,
    radius,
    area,
    slices;

    //User Input Section
    std::cout << "Enter the diameter of the pizza, in inches, ";
    std::cout << "so that I can split it into equal slices: ";
    std::cin >> diameter;

    //Radius Calculation Section
    radius = diameter / 2;

    //Area Calculation Section
    area = PI * pow(radius, 2.0);

    //Slice Calculation Section
    slices = area / SLICE_AREA;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Your pizza can be split into " << slices << " slices! YUM!! " << std::endl;

    return 0;
}
