/*
 *
12. Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.

 */
#include <iostream>
#include <iomanip>

int main() {
    int acre = 43560,
    land = 391876;
    double acreConversion;

    acreConversion = (double)land / acre;

    std::cout << "One acre of land is equivalent to " << acre << " square feet. " << std::endl;
    std::cout << "I currently own a tract of land that is " << land << " square feet. " << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(3);
    std::cout << "My tract of land is equivalent to " << acreConversion << " acres. " << std::endl;
    return 0;
}
