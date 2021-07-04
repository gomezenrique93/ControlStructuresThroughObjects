/*
18. Fat Gram Calculator
Write a program that asks for the number of calories and fat grams in a food. The program
should display the percentage of calories that come from fat. If the calories from
fat are less than 30% of the total calories of the food, it should also display a message
indicating that the food is low in fat.
One gram of fat has 9 calories, so
Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as
Calories from fat / total calories
Input Validation: Make sure the number of calories and fat grams are not less than
0. Also, the number of calories from fat cannot be greater than the total number of
calories. If that happens, display an error message indicating that either the calories or
fat grams were incorrectly entered.
*/
#include <iostream>

int main() {
    // Variable Section
    int calories,
    fat_grams;

    // Input Section for Calories
    std::cout << "How many calories were in your food? ";
    std::cin >> calories;

    // Input Validation for Calories
    while (calories < 0) {
        std::cout << "Make sure that the number of calories is greater than zero! ";
        std::cin >> calories;
    }

    // Input section for fat grams
    std::cout << "How many fat grams were in your food? ";
    std::cin >> fat_grams;

    // Input Validation for fat grams
    while (fat_grams < 0) {
        std::cout << "Make sure that the number of fat grams is greater than zero! ";
        std::cin >> fat_grams;
    }

    // Calories from fat = fat grams * 9
    int calories_from_fat = fat_grams * 9;

    // The percentage of calories from fat can be calculated as
    double percentage_calories_from_fat = (double)calories_from_fat / calories * 100;

    // Calculating thirty percent of calories from food
    double thirty_percent_calories_from_food = calories * 0.30;

    std::cout << "The percent of calories from fat is " << percentage_calories_from_fat << "%" << std::endl;

    if (calories_from_fat < thirty_percent_calories_from_food)
        std::cout << "Your food is low in fat. " << std::endl;

    return 0;
}
