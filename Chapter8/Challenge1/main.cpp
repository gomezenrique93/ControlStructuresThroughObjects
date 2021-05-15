/*1.
 *
 * Charge Account Validation
Write a program that lets the user enter a charge account number. The program should
determine if the number is valid by checking for it in the following list:
5658845 4520125 7895122 8777541 8451277 1302850
8080152 4562555 5552012 5050552 7825877 1250255
1005231 6545231 3852085 7576651 7881200 4581002
The list of numbers above should be initialized in a single-dimensional array. A simple
linear search should be used to locate the number entered by the user. If the user enters
a number that is in the array, the program should display a message saying that the
number is valid. If the user enters a number that is not in the array, the program should
display a message indicating that the number is invalid.

 */

#include <iostream>

// Function prototype
int SearchAccounts(const int [], int, int);

int main() {

    // Variable Section
    int results, value;

    // Array Section
    const int SIZE = 18;
    int account_numbers[SIZE] = {
            5658845, 4520125, 7895122,8777541,8451277,1302850,
            8080152,4562555,5552012,5050552,7825877,1250255,
            1005231,6545231,3852085,7576651,7881200,4581002
    };

   // Will ask user to enter in the account number that will be searched for
    std::cout << "Please type in the account number you are looking for: ";
    std::cin >> value;

    results = SearchAccounts(account_numbers, SIZE, value);

    // If the value looked for is not in the array results == -1
    if (results == -1)
        std::cout << "You did not enter a valid account number!";
    else
        {
        std::cout << "This number is a valid account number!";
        }
    return 0;
}

int SearchAccounts(const int account_numbers[], int SIZE, int value) {

   int index = 0; // Used as a subscript for the array
   int position = -1; // Will record the position for search value
   bool found = false; // Flag to indicate if the value was found

   while (index < SIZE && !found) {
       if (account_numbers[index] == value)
       {
           found = true;
           position = index;
       }
       index++;
   }
    return position;
}