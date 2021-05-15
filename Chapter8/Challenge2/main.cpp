/*2. Lottery Winners
A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit
“lucky” combinations. Write a program that initializes an array or a vector with
these numbers and then lets the player enter this week’s winning 5-digit number.
The program should perform a linear search through the list of the player’s numbers
and report whether or not one of the tickets is a winner this week. Here are the
numbers:
13579 26791 26792 33445 55555
62483 77777 79422 85647 93121
 */


#include <iostream>

// Function Prototype
int SearchNumbers(const int[], int, int);

int main() {

    // Variable Section
    int lucky_number, value;

    // Array Section
    const int SIZE = 10;
    int lottery_numbers[SIZE] = {
          13579,26791,26792,33445,55555,
          62483,77777,79422,85647,93121
    };

    std::cout << "Enter your lucky number! ";
    std::cin >> lucky_number;

    value = SearchNumbers(lottery_numbers, SIZE, lucky_number);

    if (value == -1)
        std::cout << "No dice! Not so lucky this time... ";
    else
        std::cout << "Congrats, you've won the lotto!! ";

    return 0;
}

int SearchNumbers(const int lotto_numbers[], int SIZE, int lucky_number) {

 int index = 0;
 int position = -1;
 bool found = false;

 while (index < SIZE && !found)
 {
     if (lotto_numbers[index] == lucky_number)
     {
        found = true;
        position = index;
     }
     index++;
 }
    return position;
}