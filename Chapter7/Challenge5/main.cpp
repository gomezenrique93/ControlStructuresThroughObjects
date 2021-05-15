/*
 *
 *
Programmer Name: Enrique Gomez
Date: 01/19/2021
5. Monkey Business
A local zoo wants to keep track of how many pounds of food each of its three monkeys
eats each day during a typical week. Write a program that stores this information in a
two-dimensional 3 × 5 array, where each row represents a different monkey and each
column represents a different day of the week. The program should first have the user
input the data for each monkey. Then it should create a report that includes the following
information:

• Average amount of food eaten per day by the whole family of monkeys.
• The least amount of food eaten during the week by any one monkey.
• The greatest amount of food eaten during the week by any one monkey.

Input Validation: Do not accept negative numbers for pounds of food eaten.*/

#include <iostream>

// Function prototype section
void ReadFood(int monkey_food[3][5]);
void CalculateFoodAverage(int monkey_food[3][5]);
void FindLowest(int monkey_food[3][5]);
void FindHighest(int monkey_food[3][5]);

int main () {

    // Variable section
    int monkey_food[3][5];

    ReadFood(monkey_food);
    CalculateFoodAverage(monkey_food);
    FindLowest(monkey_food);
    FindHighest(monkey_food);

} // End main

void ReadFood(int monkey_food[3][5]) {
    // For loop to take in the amount of food eaten per day by monkey
    for (int i  = 0; i < 3; i++) {
        std::cout << "Monkey " << (i + 1) << std::endl;
        for (int j = 0; j < 5; j++) {
            std::cout << "Day " << (j + 1) << " : ";
            std::cin >> monkey_food[i][j];
        }
    }
}

void CalculateFoodAverage(int monkey_food[3][5]) {
    // For loop to take in the amount of food eaten per day by monkey
    for (int j  = 0; j < 5; j++) {
        int total = 0;
        int average;
        for (int i = 0; i < 3; i++) {
           total += monkey_food[i][j];
           average = total / 3;
        }
        std::cout << "Average for " << (1 + j) << " : " << average << std::endl;
    }
}

void FindLowest(int monkey_food[3][5]) {
    // For loop to take in the amount of food eaten per day by monkey
    int lowest;
    for (int i  = 0; i < 3; i++) {
        lowest = monkey_food[0][0];
        for (int j = 0; j < 5; j++) {
           if (monkey_food[i][j] < lowest)
            lowest = monkey_food[i][j];
        }
    }
    std::cout << "The lowest amount of food eaten is " << lowest << "lbs" << std::endl;
}

void FindHighest(int monkey_food[3][5]) {
    // For loop to take in the amount of food eaten per day by monkey
    int highest;
    for (int i  = 0; i < 3; i++) {
        highest = monkey_food[0][0];
        for (int j = 0; j < 5; j++) {
            if (monkey_food[i][j] > highest)
                highest = monkey_food[i][j];
        }
    }
    std::cout << "The highest amount of food eaten is " << highest << "lbs" << std::endl;
}
