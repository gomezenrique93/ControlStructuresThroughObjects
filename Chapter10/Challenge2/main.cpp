/*
2. Backward String
Write a function that accepts a pointer to a C-string as an argument and displays its
contents backward. For instance, if the string argument is “ Gravity ” the function
should display “ ytivarG ”. Demonstrate the function in a program that asks the user
to input a string and then passes it to the function.
*/
#include <iostream>
#include <cstring>
void Reverse(char *);

int main() { // Begin Main
    // Variable Section
    const int LENGTH = 100;
    char user_string[LENGTH];

    // String input section
    std::cout << "Enter a string no more then " << (LENGTH - 1) << " characters: ";
    std::cin.getline(user_string, LENGTH);

    // Calling the reverse function to reverse string
    Reverse(user_string);
    return 0;

} // End Main

void Reverse(char *user_string) { // Begin Reverse
    std::cout << "Backwards, your strings is: ";
   for (int i = strlen(user_string) - 1; i >= 0; i--) {
       std::cout << user_string[i];
   }
} // End Reverse


