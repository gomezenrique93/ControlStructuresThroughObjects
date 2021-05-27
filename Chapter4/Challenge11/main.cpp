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

    std::cout << "This is a math tutor program!! " << std::endl;
    std::cout << "I will display two numbers so you can try to add them!" << std::endl;
    std::cout << "First try the problem on your own and enter your answer, once your ready hit [Enter] " << std::endl;
    std::cout << std::setw(6) << val1 << std::endl;
    std::cout << "+" << std::setw(5) << val2 << std::endl;
    std::cout << "------------" << std::endl;
    std::cin >> answer;
    std::cin.get();

    std::cout << std::endl;
    if (answer == sum)
        std::cout << "Good job, you entered the correct answer!!" << std::endl;
    else
        std::cout << "Your answer is incorrect :( keep practicing!! " << std::endl;

    return 0;
}
