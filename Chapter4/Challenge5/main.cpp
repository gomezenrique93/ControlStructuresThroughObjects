/*
5. Body Mass Index
Write a program that calculates and displays a person’s body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is overweight
or underweight for his or her height. A person’s BMI is calculated with the
following formula:
BMI = weight x 703 / height2
where weight is measured in pounds and height is measured in inches. The program
should display a message indicating whether the person has optimal weight, is underweight,
or is overweight. A sedentary person’s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Variable Section
    double weight,
    feet,
    height,
    bmi;
    int inches;

    // User Input Section
    std::cout << "Enter your height in feet and then inches!" << std::endl;
    std::cout << "Feet: ";
    std::cin >> feet;
    std::cout << "Inches: ";
    std::cin >> inches;
    std::cout << "Enter your weight in lbs: ";
    std::cin >> weight;

    // Height Calculation
    height = feet * 12.0 + inches;

    // BMI calculation
    bmi = (weight * 703.00) / pow(height, 2.0);

    // BMI Output Section
    std::cout << "BMI is " << std::setprecision(3) << bmi << std::endl;

    if (bmi >= 18.5 && bmi <= 22.5 ){
        std::cout << "You are at optimal weight! ";
    } else if (bmi < 18.5) {
        std::cout << "You are underweight. ";
    } else if (bmi > 22.5) {
        std::cout << "You are overweight. ";
    }

    return 0;
}
