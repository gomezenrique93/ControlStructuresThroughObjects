/*
 * This program will take in ten integer values from a user
 * Once these values are collected it will display the smallest and largest values
 *
 *
 * */

#include <iostream>

// Function prototype section
void showHighest (int);
void showLowest (int);

int main() {
    // Array declaration section
    const int SIZE = 10;
    int numbers[SIZE];

    // This section will ask the user to enter ten values
    std::cout << "Please enter ten numbers: ";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }

    // This algorithm will find the lowest value in the array
    int lowest = numbers[0];
    for (int i = 1; i < SIZE; i++) {
        if (numbers[i] < lowest)
            lowest = numbers[i];
    }
    showLowest(lowest);

    // This algorithm will find the highest value in the array
    int highest = numbers[0];
    for (int j = 1; j < SIZE; j++) {
        if (numbers[j] > highest)
            highest = numbers[j];
    }
    showHighest(highest);

    return 0;
} // end main

// Function that will display the smallest number in the array
void showLowest (int smallNum) {
    std::cout << "The smallest number is: " << smallNum << std::endl;
}

// Function that will display the largest number in the array
void showHighest (int bigNum) {
    std::cout << "The greatest number is: " << bigNum << std::endl;
}



