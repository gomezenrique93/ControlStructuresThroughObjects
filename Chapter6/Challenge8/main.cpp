/*
8. Coin Toss
Write a function named coinToss that simulates the tossing of a coin. When you call
the function, it should generate a random number in the range of 1 through 2. If the
random number is 1, the function should display “heads.” If the random number is 2,
the function should display “tails.” Demonstrate the function in a program that asks
the user how many times the coin should be tossed and then simulates the tossing of
the coin that number of times.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

// Function Prototype
void coinToss(int, int, int);

int main() {
    // Variable Section
    const int MIN_VALUE = 1,
    MAX_VALUE = 2;
    int flip;

    // User Input Section
    std::cout << "How many times would you like to flip the coin? ";
    std::cin >> flip;
    coinToss(flip, MIN_VALUE, MAX_VALUE);

    return 0;
} // End Main

// CoinToss Function Section
void coinToss(int f, int min, int max) {
    unsigned seed = time(0);
    srand(seed);
    int coin;

    // For Loop Section
    for (int i = 1; i < f; i++) {
        // This will simulate the tossing of the coin
        coin = (rand() % (max - min + 1)) + min;
        std::cout << "Tossing coin...\n";
    }

    // If / Else Section
    if (coin == 1)
        // If coin == 1 heads will be displayed
        std::cout << "Heads";
    else
        // Otherwise, tails will be displayed
        std::cout << "Tails";
}