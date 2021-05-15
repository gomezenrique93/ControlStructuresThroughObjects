/*
 *
1. Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold and the number of miles it can
be driven on a full tank. It should then display the number of miles that may be driven
per gallon of gas.

 */
#include <iostream>
#include <iomanip>


int main() {
    // Variable Section
    double gallons, // Will hold number of gallons
    mpg, // Will hold total miles per gallon
    total_mpg; // Will hold total amount of mileage for car

    std::cout << "Please enter the number of gallons that your car can drive: ";
    std::cin >> gallons;
    std::cout << "Enter the number of miles your car can drive on a full tank of gas: ";
    std::cin >> mpg;

    // Calculation Section
    total_mpg = mpg / gallons;

    // Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Your car can drive a total of " << total_mpg << " miles per gallon of gas " << std::endl;
    return 0;
}
