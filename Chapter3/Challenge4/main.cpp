/*
4. Average Rainfall
Write a program that calculates the average rainfall for three months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:
The average rainfall for June, July, and August is 6.72 inches.
 */
#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Variable Section
    std::string month1,
    month2,
    month3;
    double rainfall1,
    rainfall2,
    rainfall3,
    average;

    // User Input Section
    std::cout << "Enter the name of the month you would like to enter rainfall for: ";
    std::cin >> month1;
    std::cout << "Enter the amount of rainfall in inches for this month: ";
    std::cin >> rainfall1;
    std::cout << "Enter the name of the month you would like to enter rainfall for: ";
    std::cin >> month2;
    std::cout << "Enter the amount of rainfall in inches for this month: ";
    std::cin >> rainfall2;
    std::cout << "Enter the name of the month you would like to enter rainfall for: ";
    std::cin >> month3;
    std::cout << "Enter the amount of rainfall in inches for this month: ";
    std::cin >> rainfall3;

    // Calculation Section
    average = (rainfall1 + rainfall2 + rainfall3) / 3;

    // Formatting Section
    std::cout << std::fixed << std::setprecision(1);
    // Output Section
    std::cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches";
    return 0;
}
