/*
 *
 * Programmer Name: Enrique Gomez
 * Program name: rainfall.cpp
 * Date: 1/17/2021
 *
2. Rainfall Statistics
Write a program that lets the user enter the total rainfall for each of 12 months into
an array of doubles. The program should calculate and display the total rainfall for
the year, the average monthly rainfall, and the months with the highest and lowest
amounts.

Input Validation: Do not accept negative numbers for monthly rainfall figures.
 */

#include <iostream>

// Function prototype section
void display_yearly_rainfall(double );
void display_average_rainfall(double );
void display_highest_rainfall(double );
void display_lowest_rainfall(double );

int main() {

    // Array section
    const int MONTHS = 12;
    double total_rainfall[MONTHS];

    // Variable Section
    int i, j, k, l; // counter for do while loop
    double yearly_rainfall = 0.0; // Initialized accumulator
    double average = 0.0; // Will hold the average rainfall

    // User Input Section
    for (i = 0; i < MONTHS; i++) {
        std::cout << "Enter the amount of rainfall for month " << i + 1 << " : ";
        std::cin >> total_rainfall[i];
        while (total_rainfall[i] < 0.0) {
            std::cout << "Please enter a value greater than zero for month " << i + 1 << " : ";
            std::cin >> total_rainfall[i];
        }
    }

    //Yearly rainfall and average section
    for (j = 0; j < MONTHS; j++) {
       yearly_rainfall += total_rainfall[j]; // Accumulates totals
        average = yearly_rainfall / MONTHS; // Calculates average
    }

    display_yearly_rainfall(yearly_rainfall); // Takes in yearly_rainfall to display_yearly_rainfall function
    display_average_rainfall(average); // Takes in average to display_average_rainfall function

    /* For loop to find lowest value in the array */
    double lowest = total_rainfall[0];
    for (l = 1; l < MONTHS; l++) {
        if (total_rainfall[l] < lowest)
            lowest = total_rainfall[l];
    }
    display_lowest_rainfall(lowest); // Takes highest as a parameter to display_lowest_rainfall function

    /* For loop to find highest value in the array */
    double highest = total_rainfall[0];
    for (k = 1; k < MONTHS; k++) {
        if (total_rainfall[k] > highest)
            highest = total_rainfall[k];
    }
    display_highest_rainfall(highest); // Takes highest as a parameter to display_highest_rainfall function

    return 0;
} // end main

// This function will display the yearly rainfall
void display_yearly_rainfall(double yr) {
    std::cout << "Yearly rainfall is " << yr << " inches " << std::endl;
}

// This function will display the average rainfall for the 12 months
void display_average_rainfall(double avg) {
    std::cout << "Average rainfall is " << avg << " inches " << std::endl;
}

void display_lowest_rainfall(double low) {
    std::cout << "The lowest amount of rainfall is " << low << " inches " << std::endl;
}

void display_highest_rainfall(double high) {
    std::cout << "The highest amount of rainfall is " << high << " inches " << std::endl;
}




