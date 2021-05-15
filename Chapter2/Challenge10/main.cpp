/*

10. Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Driven/Gallons of Gas Used

 */
#include <iostream>

int main() {
    int gallons = 15,
    driven = 375,
    mpg;

    mpg = driven / gallons;

    std::cout << "A car holds " << gallons << " gallons. ";
    std::cout << "It can drive a total of " << driven << " miles before refueling. " << std::endl;
    std::cout << "The total miles per gallon for this car is " << mpg << " miles per gallon " << std::endl;
    return 0;
}
