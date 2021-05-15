/*
 *
9. Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char , int , float , and double . You do not have any manuals, so you can’t
look this information up. Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.
 */
#include <iostream>

int main() {
    // Output Section
    std::cout << "The size of a char in C++ is " << sizeof(char) << " bytes" << std::endl;
    std::cout << "The size of an integer in C++ is " << sizeof(int ) << " bytes" << std::endl;
    std::cout << "The size of a float in C++ is " << sizeof(float ) << " bytes" << std::endl;
    std::cout << "The size of a double in C++ is " << sizeof(double ) << " bytes" << std::endl;
    return 0;
}
