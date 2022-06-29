// Enrique Gomez
// 6/28/2022
#include <iostream>

int main() {
	const int NUM_COINS = 5;
	double coins[NUM_COINS] = { 0.05, 0.1, 0.25, 0.5, 1.0};
	double *dblPtr;
	int count;

	dblPtr = coins;

	// Display the contents of the array
	// Use subscripts with the pointer
	std::cout << "here are the numbers in the coins array \n";
	for (int count =  1; count <  NUM_COINS; count++)
		std::cout << dblPtr[count] << " ";

	std::cout << std::endl;

	// Display the contents of the array
	// Use pointer notation with the array name
	std::cout << "here are the numbers in the coins array \n";
	for (int count = 1; count < NUM_COINS; count++)
		std::cout << *(coins + count) << " ";
	return 0;
}
