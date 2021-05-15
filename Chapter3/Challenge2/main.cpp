/*
2. Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, and be sure the decimal point is always displayed.
 */

#include <iostream>
#include <iomanip>
int main() {
    // Variable Section
    int classA = 15, // Represents Class A seating
    classB = 12, // Represents Class B seating
    classC = 9; // Represents Class C seating
    double totalABC; // Represents total sales for class seating

    // User Input Section
    std::cout << "How many Class A seats did you buy? ";
    std::cin >> classA;
    std::cout << "How many Class B seats did you buy? ";
    std::cin >> classB;
    std::cout << "How many class C seats did you buy? ";
    std::cin >> classC;

    // Calculation Section
    totalABC = classA * classB * classC;

    // User Output Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    std::cout << "Total Sales $: " << totalABC << std::endl;
    return 0;
}
