/*
12. Celsius to Fahrenheit Table
In Programming Challenge 10 of Chapter 3 you were asked to write a program that
converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop
to display a table of the Celsius temperatures 0–20, and their Fahrenheit equivalents.
 */
#include <iostream>

int main() {
    // Variable Section
    int temperatures = 20;

    // Formatting for chart
    std::cout << "Celsius \t Fahrenheit \n";
    std::cout << "-------------------------\n";
    for (int celsius = 0; celsius <= temperatures; celsius++)
    {
          double fahrenheit;
          fahrenheit = celsius * (9.0 / 5) + 32;
          std::cout << celsius << "\t\t\t\t" << fahrenheit << "\n";
    }
    return 0;
}
