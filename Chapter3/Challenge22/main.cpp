/*
22. Angle Calculator
Write a program that asks the user for an angle, entered in radians. The program
should then display the sine, cosine, and tangent of the angle. (Use the sin , cos , and
tan library functions to determine these values.) The output should be displayed in
fixed-point notation, rounded to four decimal places of precision.
 */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Variable Section
    double radians,
    sine,
    cosine,
    tangent;

    // User Input Section
    std::cout << "Enter an angle in radians ";
    std::cout << "and I will give you it's cosine, sine, and tangent! : ";
    std::cin >> radians;

    // Represents Sine
    sine = sin(radians);
    // Represents Cosine
    cosine = cos(radians);
    // Represents Tangent
    tangent = cos(radians);

    std::cout << std::fixed << std::setprecision(4);
    std::cout << "The sine of " << radians << " is " << sine << std::endl;
    std::cout << "The cosine of " << radians << " is " << cosine << std::endl;
    std::cout << "The tangent of " << radians << " is " << tangent << std::endl;
    return 0;
}
