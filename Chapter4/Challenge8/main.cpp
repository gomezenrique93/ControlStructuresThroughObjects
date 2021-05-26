/*
8. Color Mixer
The colors red, blue, and yellow are known as the primary colors because they cannot
be made by mixing other colors. When you mix two primary colors, you get a secondary
color, as shown here:
When you mix red and blue, you get purple.
When you mix red and yellow, you get orange.
When you mix blue and yellow, you get green.
Write a program that prompts the user to enter the names of two primary colors to
mix. If the user enters anything other than “red,” “blue,” or “yellow,” the program
should display an error message. Otherwise, the program should display the name of
the secondary color that results by mixing two primary colors.
*/
#include <iostream>
#include <string>

int main() {
    // Variable Section
    const std::string RED = "red",
    BLUE = "blue",
    YELLOW = "yellow";
    std::string user_color1,
    user_color2;

    // User Input Section
    std::cout << "Please enter two primary colors!!!" << std::endl;
    std::cout << "First primary color: ";
    std::cin >> user_color1;
    std::cout << "Second primary color: ";
    std::cin >> user_color2;

    if ((user_color1 == RED && user_color2 == BLUE) || (user_color1 == BLUE && user_color2 == RED))
       std::cout << "You get purple!" << std::endl;
    else if ((user_color1 == RED && user_color2 == YELLOW) || (user_color2 == YELLOW && user_color1 == RED))
       std::cout << "You get orange!" << std::endl;
    else if ((user_color1 == BLUE && user_color2 == YELLOW) || (user_color1 == YELLOW && user_color2 == BLUE))
       std::cout << "You get green! " << std::endl;
    else
       std::cout << "Make sure you enter two primary colors!!" << std::endl;
    return 0;
}
