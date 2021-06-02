/*
7. Celsius Temperature Table
The formula for converting a temperature from Fahrenheit to Celsius is
C = 5/9 (F - 32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
named celsius that accepts a Fahrenheit temperature as an argument. The function
should return the temperature, converted to Celsius. Demonstrate the function by
calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
and their Celsius equivalents.
*/

#include <iostream>

// Function prototype
double Celsius(double);

int main() {
    // Variable Section
    int fahrenheit;

    // For Loop Section
    std::cout << "-------------------\n";
    std::cout << "Degrees\t\tCelsius\n";
    for (fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        Celsius(fahrenheit);
        std::cout << fahrenheit << "\t\t\t" << Celsius(fahrenheit) << " \n";
    }

    return 0;
} // End Main

// Celsius Function
double Celsius(double f) {
   double c = (5.0/9) * (f - 32);
   return c;
}