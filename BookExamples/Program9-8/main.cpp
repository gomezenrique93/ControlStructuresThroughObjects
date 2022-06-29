#include <iostream>

int main() {
	const int NUM_COINS = 5;
	double coins[NUM_COINS] = {0.05, 0.1, 0.25, 0.50, 1.0};
	double *doublePtr = nullptr;
	int count;

	for (int count = 0; count < NUM_COINS; count++) {
		doublePtr = &coins[count];
		
		std::cout << *doublePtr << " "; 
	}
	std::cout << std::endl;
	return 0;
}
