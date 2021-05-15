/*
11. Distance per Tank of Gas
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance = Number of Gallons x Miles per Gallon

 */
#include <iostream>

int main() {
    // Variable Section
    const int gasTank= 20;
    double mpgTown = 23.5,
    mpgHighway = 28.9,
    distanceTown,
    distanceHighway;

   // Calculation Section
   distanceTown = gasTank * mpgTown;
   distanceHighway = gasTank * mpgHighway;

   std::cout << "While driving in town the car can drive " << distanceTown << " miles. " << std::endl;
   std::cout << "While driving on the highway the car can drive " << distanceHighway << " miles. " << std::endl;
    return 0;
}
