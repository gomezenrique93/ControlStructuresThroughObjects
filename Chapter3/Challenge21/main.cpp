/*
21. How Many Pizzas?
Modify the program you wrote in Programming Challenge 18 (Pizza Pi) so that it
reports the number of pizzas you need to buy for a party if each person attending
is expected to eat an average of four slices. The program should ask the user for the
number of people who will be at the party and for the diameter of the pizzas to be
ordered. It should then calculate and display the number of pizzas to purchase.
 */
#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Variable Section
    const float PI = 3.14159;
    const float SLICE_AREA = 14.125;
    const int AVERAGE_SLICES = 4;
    double diameter,
            radius,
            area,
            slices,
            total_pizzas;
    int people;

    //User Input Section
    std::cout << "Enter the diameter of the pizza(s) that you want to order: ";
    std::cin >> diameter;

    std::cout << "How many people will be at your party? ";
    std::cin >> people;

    //Radius Calculation Section
    radius = diameter / 2;

    //Area Calculation Section
    area = PI * pow(radius, 2.0);

    //Slice Calculation Section
    slices = area / SLICE_AREA;

    //Total Pizza Calculation
    total_pizzas = AVERAGE_SLICES * people / slices;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Your pizza can be split into " << slices << " slices! " << std::endl;
    std::cout << "You should buy a total of " << total_pizzas << " pizzas " << std::endl;
    return 0;
}

