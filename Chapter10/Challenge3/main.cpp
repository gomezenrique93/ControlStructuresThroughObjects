/*
3. Word Counter
Write a function that accepts a pointer to a C-string as an argument and returns the
number of words contained in the string. For instance, if the string argument is “Four
score and seven years ago” the function should return the number 6. Demonstrate the
function in a program that asks the user to input a string and then passes it to the function.
The number of words in the string should be displayed on the screen. Optional
Exercise: Write an overloaded version of this function that accepts a string class object
as its argument.
*/
#include <iostream>
#include <cstring>

void WordCounter(const char *);
int main() {
    // Variable Section
    int LENGTH = 1000000;
    char user_string[LENGTH];

    // Input Section
    std::cout << "Enter a phrase that is no longer than " << LENGTH - 1 << " characters long: ";
    std::cin.getline(user_string, LENGTH);

    WordCounter(user_string);
    return 0;
}

void WordCounter(const char *string) {
    int space = 0;
    for (int i = 0; i <= string[i]; i++) {
        if (string[i] == ' ') {
            space++;
        }
    }
    std::cout << "There are " << space + 1 << " words in this line of text. " << std::endl;
}
