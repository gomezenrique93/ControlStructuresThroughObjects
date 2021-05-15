/*
5. Male and Female Percentages
Write a program that asks the user for the number of males and the number of females
registered in a class. The program should display the percentage of males and females
in the class.
Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the
class. The percentage of males can be calculated as 8 ÷ 20 = 0.4, or 40%. The percentage
of females can be calculated as 12 ÷ 20 = 0.6, or 60%.
 */
#include <iostream>

int main() {
    // Variable Section
    int males,
    females,
    total;
    double totalMales,
    totalFemales;

    // Input Section
    std::cout << "How many females are in your class? ";
    std::cin >> females;
    std::cout << "How many males are in your class? ";
    std::cin >> males;

    // Calculation Section
    total = females + males;
    totalFemales = (double)females / total;
    totalMales = (double)males / total;

    // Output Section
    std::cout << "The percentage of females in your class is " << totalFemales * 100 << "%" << std::endl;
    std::cout << "The percentage of males in your class is " << totalMales * 100 << "%" << std::endl;
    return 0;
}
