/*
6. Mass and Weight
Scientists measure an object’s mass in kilograms and its weight in newtons. If you know
the amount of mass that an object has, you can calculate its weight, in newtons, with
the following formula:
Weight = mass x 9.8
Write a program that asks the user to enter an object’s mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newtons, display a message
indicating that it is too heavy. If the object weighs less than 10 newtons, display a message
indicating that the object is too light.
*/

#include <iostream>

int main() {
    // Variable Section
    double mass,
    weight;

    std::cout << "This program will help determine an objects weight in Newtons " << std::endl;
    std::cout << "Enter your objects mass in kilograms: ";
    std::cin >> mass;

    // Newton Calculation
    weight = mass * 9.8;

    // Output Section
    std::cout << "Your item weighs " << weight << " newtons. " << std::endl;
    if (weight < 10)
        std::cout << "Your item is too light! " << std::endl;
    else if (weight > 1000)
        std::cout << "Your item is too heavy! " << std::endl;

    return 0;
}
