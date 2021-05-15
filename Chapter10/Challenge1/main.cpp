 /*1.
  *
  * String Length
Write a function that returns an integer and accepts a pointer to a C-string as an argument.
The function should count the number of characters in the string and return that
number. Demonstrate the function in a simple program that asks the user to input a
string, passes it to the function, and then displays the function’s return value.

  */
#include <iostream>
#include <cstring>

int CountCharacters(char *); // Function Prototype

int main() // Begin Main
{

    // Array Section
   int stringLength = 100;
   char userString[stringLength];

   std::cout << "Enter a string and I will tell you how many characters it has!!";
   std::cin.getline(userString, stringLength);

    CountCharacters(userString);
    std::cout << CountCharacters(userString);

    return 0;

} // End Main

int CountCharacters(char *pointerString)
{
   int length = strlen(pointerString);
   return length;
}