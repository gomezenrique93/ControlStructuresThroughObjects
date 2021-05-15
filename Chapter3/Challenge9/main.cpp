/*
9. How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims that there
are 10 “servings” in the bag and that a serving equals 300 calories. Write a program
that asks the user to input how many cookies he or she actually ate and then reports
how many total calories were consumed.
 */

#include <iostream>

int main() {
    // Variable Section
    int calories = 300, // Total calories per serving
    cookies_per_serving = 3, // Total cookies per serving
    cookies; // Total cookies consumed by the user
    double serving, // Total servings consumed by the user
    total_calories; // Total calories consumed by the user

    // User Input Section
    std::cout << "How many cookies did you eat? ";
    std::cin >> cookies;

    // Calculation Section
    serving = (double )cookies / cookies_per_serving;
    total_calories = serving * calories;

    // Output Section
    std::cout << "You have consumed " << total_calories << " calories!" << std::endl;
    return 0;
}
