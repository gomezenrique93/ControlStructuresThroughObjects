/*
11. Math Tutor
This is a modification of Programming Challenge 17 from Chapter 3 . Write a program
that can be used as a math tutor for a young student. The program should display two
random numbers that are to be added, such as:
247 + 129
The program should wait for the student to enter the answer. If the answer is correct,
a message of congratulations should be printed. If the answer is incorrect, a message
should be printed showing the correct answer.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int main() {
    // Variable Section
    int val1,
    val2,
    sum,
    answer;

    // Get the system time
    unsigned seed = time(0);

    // Seed the random number generator
    srand(seed);

    val1 = rand();
    val2 = rand();
    sum = val1 + val2;

    std::cout << "This is a math tutor program!!\n";
    std::cout << "I will display two numbers so you can try to add them!\n";
    std::cout << "First try the problem on your own and enter your answer, once your ready hit [Enter]\n";
    std::cout << std::setw(6) << val1 << "\n";
    std::cout << "+" << std::setw(5) << val2 << "\n";
    std::cout << "------------" << "\n";
    std::cin >> answer;
    std::cin.get();

    std::cout << std::endl;
    answer == sum ? std::cout << "Your answer is correct!!\n" : std::cout << "Sorry, your answer is incorrect!!\n";

    return 0;
}
