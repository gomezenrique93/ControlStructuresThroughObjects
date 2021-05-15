/*
 * Programmer Name: Enrique Gomez
 * Date: 1/17/2021
 * 3. Chips and Salsa
 *
Write a program that lets a maker of chips and salsa keep track of sales for five different
types of salsa: mild, medium, sweet, hot, and zesty. The program should use two
parallel 5-element arrays: an array of strings that holds the five salsa names and
an array of integers that holds the number of jars sold during the past month for each
salsa type. The salsa names should be stored using an initialization list at the time the
name array is created. The program should prompt the user to enter the number of jars sold for each type.
Once this sales data has been entered, the program should produce a report that displays sales for each salsa type,
total sales, and the names of the highest selling and lowest selling products.

Input Validation: Do not accept negative values for number of jars sold.
 */

#include <iostream>
#include <string>

// Function prototype section
void display_total(int );
void lowest_salsa(std::string, int);
void highest_salsa(std::string, int);

int main() {

    // Array Declaration Section
    const int NUM_SALSAS = 5;
    std::string types_of_salsas[NUM_SALSAS] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int number_of_jars[NUM_SALSAS];

    // Int Variable Section
    int total_salsa = 0,
    highest,
    lowest;

    // String Variable Section
    std::string name_lowest,
    name_greatest;

    // For loop to take in the amount of salsas from user
    std::cout << "Enter the amount of salsas you've sold for each type\n ";
    for (int i = 0; i < NUM_SALSAS; i++) {
        std::cout << types_of_salsas[i] << " : ";
        std::cin >> number_of_jars[i];
        while (number_of_jars[i] < 0) {
            std::cout << "Please enter a value greater than zero! \n";
            std::cout << types_of_salsas[i] << " : ";
            std::cin >> number_of_jars[i];
        }
    }

    //For loop to display the amount of salsas taken from the user
    std::cout << "-----------------------------------------\n";
    std::cout << "These are the amount of salsas sold: \n";
    for (int j = 0; j < NUM_SALSAS; j++) {
        std::cout << types_of_salsas[j] << " ";
        std::cout << number_of_jars[j] << " " << "\n";
        total_salsa += number_of_jars[j];
    }
    display_total(total_salsa);

    // For loop to display the lowest amount of salsas sold
    std::cout << "-----------------------------------------\n";
    lowest = number_of_jars[0];
    name_lowest = types_of_salsas[0];
    for (int k = 1; k < NUM_SALSAS; k++) {
        if (number_of_jars[k] < lowest) {
            lowest = number_of_jars[k];
            name_lowest = types_of_salsas[k];
        }
    }
    lowest_salsa(name_lowest, lowest);

    // For loop to display the lowest amount of salsas sold
    highest = number_of_jars[0];
    name_greatest = types_of_salsas[0];
    for (int l = 1; l < NUM_SALSAS; l++) {
        if (number_of_jars[l] > highest) {
            highest = number_of_jars[l];
            name_greatest = types_of_salsas[l];
        }
    }
    highest_salsa(name_greatest, highest);
} // End main


void display_total(int t_salsa) {
    std::cout << "-----------------------------------------\n";
    std::cout << "The total amount of salsas sold is : " << t_salsa << "\n";
}
void lowest_salsa(std::string low, int lowest) {
    std::cout << "Least Sold: " << low << " with " << lowest << " unit(s) \n";
}

void highest_salsa(std::string high, int highest){
    std::cout << "Greatest Sold: " << high << " with " << highest << " unit(s) \n";
}
