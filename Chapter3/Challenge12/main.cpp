/*
 *12. Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures.
 */
#include <iostream>

int main() {
    // Variable Section
    double celsius;

    // Input Section
    std::cout << "This program will convert Celsius to Fahrenheit " << std::endl;
    std::cout << "Celsius: ";
    std::cin >> celsius;

    // Calculation Section
    double fahrenheit = (celsius * 9) / 5 + 32;

    // Output Section
    std::cout << "Once converted " << celsius << " celsius is " << fahrenheit << " fahrenheit." << std::endl;
    return 0;
}
