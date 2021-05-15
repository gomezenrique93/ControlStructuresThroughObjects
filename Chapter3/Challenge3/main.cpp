/*
3. Test Average
Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formatted in fixed-point
notation, with one decimal point of precision.
 */
#include <iostream>
#include <iomanip>

int main() {
    // Variable Section
    double test1,
    test2,
    test3,
    test4,
    test5,
    average;

    // User Input Section
    std::cout << "Enter your score for your first test: ";
    std::cin >> test1;
    std::cout << "Enter your score for your second test: ";
    std::cin >> test2;
    std::cout << "Enter your score for your third test: ";
    std::cin >> test3;
    std::cout << "Enter your score for your fourth test: ";
    std::cin >> test4;
    std::cout << "Enter your score for your fifth test: ";
    std::cin >> test5;

    // Calculation Section
    average = (test1 + test2 + test3 + test4 + test5) / 5;

    // Output Section
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The average for your test scores is " << average << std::endl;
    return 0;
}
