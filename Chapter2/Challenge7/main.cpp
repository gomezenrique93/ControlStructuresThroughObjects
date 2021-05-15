/*
 *
7. Ocean Levels
Assuming the ocean’s level is currently rising at about 1.5 millimeters per year, write
a program that displays:
• The number of millimeters higher than the current level that the ocean’s level will be
in 5 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 7 years
• The number of millimeters higher than the current level that the ocean’s level will be
in 10 years

 * */

#include <iostream>

int main() {
    // Variable Section
   const double risingLevel = 1.5;
   int risingLevel5 = 5,
   risingLevel7 = 7,
   risingLevel10 = 10;
   double total1,
   total2,
   total3;

   // Calculation Section
   total1 = risingLevel * risingLevel5;
   total2 = risingLevel * risingLevel7;
   total3 = risingLevel * risingLevel10;

   // Output Section
   std::cout << "The current ocean level is " << risingLevel << " millimeters " << std::endl;
   std::cout << "In 5 years the ocean level will be " << total1 << " millimeters, ";
   std::cout << "this is " << total1 - risingLevel << " millimeters higher than the current ocean level. " << std::endl;
   std::cout << "In 7 years the ocean level will be " << total2 << " millimeters, ";
   std::cout << "this is " << total2 - total1 << " millimeters higher than the previous ocean level. " << std::endl;
   std::cout << "In 10 years the ocean level will be " << total3 << " millimeters, ";
   std::cout << "this is " << total3 - total2 << " millimeters higher than the previous ocean level. " << std::endl;
    return 0;
}
