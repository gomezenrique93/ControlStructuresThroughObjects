/*
15. Shipping Charges
The Fast Freight Shipping Company charges the following rates:
Weight of Package (in Kilograms) Rate per 500 Miles Shipped
2 kg or less $1.10
Over 2 kg but not more than 6 kg $2.20
Over 6 kg but not more than 10 kg $3.70
Over 10 kg but not more than 20 kg $4.80
Write a program that asks for the weight of the package and the distance it is to be
shipped, and then displays the charges.
Input Validation: Do not accept values of 0 or less for the weight of the package. Do
not accept weights of more than 20 kg (this is the maximum weight the company will
ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These
are the company’s minimum and maximum shipping distances.
*/
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    int pckg_weight;
    const int DIST_MIN = 10,
    DIST_MAX = 3000,
    MAX_WEIGHT = 20;
    double rate1 = 1.10,
    rate2 = 2.20,
    rate3 = 3.70,
    rate4 = 4.80,
    pckg_distance,
    shpng_charges = 0.0;

    // Package Weight Input Section
    std::cout << "Enter the weight of your package in kilograms: ";
    std::cin >> pckg_weight;

    // Package Weight Validation Section
    while (pckg_weight > MAX_WEIGHT || pckg_weight <= 0)
    {
        if (pckg_weight <= 0)
        {
            std::cout << "Please make sure that weight of your package is greater than 0 kilograms!! \n";
            std::cout << "Enter the weight of your package in kilograms: ";
            std::cin >> pckg_weight;
        }
        else if (pckg_weight > MAX_WEIGHT)
        {
            std::cout << "Please make sure that the weight of your package is no more than " << MAX_WEIGHT << " kilograms \n";
            std::cout << "Enter the wight of your package in kilograms: ";
            std::cin >> pckg_weight;
        }
    }

    // Package Distance Input Section
    std::cout << "Enter the distance, in miles that you want to send this package: ";
    std::cin >> pckg_distance;

    // Package Distance Validation Section
    while (pckg_distance < DIST_MIN || pckg_distance > DIST_MAX)
    {
        std::cout << "Please make sure that the distance is between "
                  << DIST_MIN << " miles and " << DIST_MAX << " miles. ";
        std::cin >> pckg_distance;
    }

    // Algorithm for shpng_rate = rate * (pckg_distance / 500)
    if (pckg_weight > 10 && pckg_weight <= 20) {
        shpng_charges = rate4 * (pckg_distance / 500);
    } else if (pckg_weight > 6 && pckg_weight <= 10) {
        shpng_charges = rate3 * (pckg_distance / 500);
    } else if (pckg_weight > 2 && pckg_weight <= 6) {
        shpng_charges = rate2 * (pckg_distance / 500);
    } else if (pckg_weight <= 2) {
        shpng_charges = rate1 * (pckg_distance / 500);
    }

    // Shipping Charges Output Formatting Section
    std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;

    // Shipping Charges Output Section
    std::cout << "Shipping charges for your package is $" << shpng_charges << std::endl;

    return 0;
}
