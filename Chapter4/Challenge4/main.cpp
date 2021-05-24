/*
4. Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user which
rectangle has the greater area, or if the areas are the same.
 */

#include <iostream>

int main() {
    double length1,
    width1,
    length2,
    width2,
    area1,
    area2;

    // User Input Section Rectangle 1
    std::cout << "Enter the length and width of the first rectangle!" << std::endl;
    std::cout << "Length: ";
    std::cin >> length1;
    std::cout << "Width: ";
    std::cin >> width1;

    // User Input Section Rectangle 2
    std::cout << "Enter the length and width of the second triangle" << std::endl;
    std::cout << "Length: ";
    std::cin >> length2;
    std::cout << "Width: ";
    std::cin >> width2;

    // Area Calculation Rectangle 1
    area1 = length1 * width1;

    // Area Calculation Rectangle 2
    area2 = length2 * width2;

    if (area1 > area2)
        std::cout << "The area of Rectangle 1 is greater than Rectangle 2 " << std::endl;
    else if (area1 < area2)
        std::cout << "The area of Rectangle 2 is greater than Rectangle 1 " << std::endl;
    else if (area1 == area2)
        std::cout << "The area of Rectangle 1 is equal to Rectangle 2 " << std::endl;
    return 0;
}
