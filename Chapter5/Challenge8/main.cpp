/*
8. Math Tutor
This program started in Programming Challenge 15 of Chapter 3 , and was modified
in Programming Challenge 9 of Chapter 4 . Modify the program again so it displays a
menu allowing the user to select an addition, subtraction, multiplication, or division
problem. The final selection on the menu should let the user quit the program. After
the user has finished the math problem, the program should display the menu again.
This process is repeated until the user chooses to quit the program.
Input Validation: If the user selects an item not on the menu, display an error message
and display the menu again.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

int main() {
    // Const Int Variables
    const int ADD_CHOICE = 1,
    SUBTRACT_CHOICE = 2,
    MULTIPLICATION_CHOICE = 3,
    DIVISION_CHOICE = 4,
    QUIT_CHOICE = 5;

    // Int variable used to hold users choice
    int choice,
    // val1 and val2 used to hold random numbers
    val1,
    val2;

    // Unsigned seed to get system time
    unsigned seed = time(0);

    // Seeding the random number generator
    srand(seed);

    // Assigning Random Values to Integer Variables
    val1 = rand();
    val2 = rand();

    // Sum, Difference, Product, Quotient Variables
    int sum = val1 + val2;
    int difference = val1 - val2;
    int product = val1 * val2;
    double quotient = (double)val1 / val2;

    do {
        std::cout << "Math Tutor program \n"
                << "1. Addition Problems \n"
                << "2. Subtraction Problems \n"
                << "3. Multiplication Problems \n"
                << "4. Division Problems \n"
                << "5. Quit Program \n";
        std::cin >> choice;

        // Input Validation Section
        while (choice < ADD_CHOICE || choice > QUIT_CHOICE)
        {
            std::cout << "Please enter a valid selection!! \n";
            std::cin >> choice;
        }

        // Switch Statement Section
        switch (choice)
        {
            // ch will help pause screen
            char ch;
            case ADD_CHOICE:
                std::cout << "\n";
                std::cout << "Try the problem first and then hit [Enter] \n";
                std::cout << "\n";
                std::cout << std::setw(6) << val1 << "\n" << "+" << std::setw(5) << val2 << "\n";
                std::cout << "----------\n";
                std::cin.get(ch);
                std::cin.get();
                std::cout << sum << "\n";
                std::cout << "\n";
                break;
            case SUBTRACT_CHOICE:
                std::cout << "\n";
                std::cout << "Try the problem first and then hit [Enter] \n";
                std::cout << "\n";
                std::cout << std::setw(6) << val1 << "\n" << "-" << std::setw(5) << val2 << "\n";
                std::cout << "----------\n";
                std::cin.get(ch);
                std::cin.get();
                std::cout << difference << "\n";
                std::cout << "\n";
                break;
            case MULTIPLICATION_CHOICE:
                std::cout << "\n";
                std::cout << "Try the problem first and then hit [Enter] \n";
                std::cout << "\n";
                std::cout << std::setw(6) << val1 << "\n" << "*" << std::setw(5) << val2 << "\n";
                std::cout << "----------\n";
                std::cin.get(ch);
                std::cin.get();
                std::cout << product << "\n";
                std::cout << "\n";
                break;
            case DIVISION_CHOICE:
                std::cout << "\n";
                std::cout << "Try the problem first and then hit [Enter] \n";
                std::cout << "In this case, round your answer to the thousandths place! \n";
                std::cout << "\n";
                std::cout << std::setw(6) << val1 << "\n" << "/" << std::setw(5) << val2 << "\n";
                std::cout << "----------\n";
                std::cin.get(ch);
                std::cin.get();
                std::cout << std::setprecision(3) << quotient << "\n";
                std::cout << "\n";
                break;
        }
    } while (choice != QUIT_CHOICE);

    return 0;
}
