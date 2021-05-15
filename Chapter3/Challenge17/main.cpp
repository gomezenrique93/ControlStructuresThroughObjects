/*
17.
Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as
247 + 129
The program should then pause while the student works on the problem. When the
student is ready to check the answer, he or she can press a key and the program will
display the correct solution:
247 + 129 = 376
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    // Variable Section
    int x,
    y,
    sum;

    // Getting the system time
    unsigned seed = time(0);

    // Seeding the system time
    srand(seed);

    // Declaring random variables
    x = rand();
    y = rand();
    sum = x + y;

    std::cout << "This is a math tutor program!! " << std::endl;
    std::cout << "I will display two numbers so you can try to add them!" << std::endl;
    std::cout << "First try the problem on your own but when you're ready hit [Enter] to see the sum! " << std::endl;
    std::cout << std::setw(6) << x << std::endl;
    std::cout << "+" << std::setw(5) << y;
    std::cin.get();
    std::cout << "------------" << std::endl;
    std::cout << sum << std::endl;
    return 0;
}
