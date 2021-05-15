/*

Program name: challenge1.cpp
Programmer: Enrique Gomez
Description of program:
Write a program that stores the integers 50 and 100 in variables, and stores the sum of these two in a variable named total

*/

#include <iostream>

int main() {
    // Variable Section
    int x = 50, y = 100, total;

    // Calculation Section
    total = x + y;

    // Output Section
    std::cout << "The sum of " << x << " and " << y << " is equal to " << total << ". " << std::endl;
	return 0;
}
