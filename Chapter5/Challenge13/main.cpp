/*
13. The Greatest and Least of These
Write a program with a loop that lets the user enter a series of integers. The user should
enter −99 to signal the end of the series. After all the numbers have been entered, the
program should display the largest and smallest numbers entered.
*/
#include <iostream>

int main() {
    // Variable Section
    int number = 0,
            sequence = 0,
            max = 0,
            min = 0;

    // Input Section
    std::cout << "Once you finish entering your list of numbers make sure you enter -99 \n";

    while (number != -99) {
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (sequence == 0)
        {
            max = number;
            min = number;
        } else {
            if (number > max && number != -99)
                max = number;
            if (number < max && number != -99)
                min = number;
        }
        sequence++;
    }

    std::cout << "The greatest number is " << max << std::endl;
    std::cout << "The smallest number is " << min << std::endl;
    return 0;
}
