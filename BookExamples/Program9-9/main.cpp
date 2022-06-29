// Enrique Gomez
// 6/28/2022

#include <iostream>

int main() {
	const int SIZE = 8;
	int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40};
	int *numPtr = nullptr;
	int count;

	numPtr = set;
	std::cout << "Numbers in the array are: \n";
	for (int count = 1; count < SIZE; count++) {
		std::cout << *numPtr << " ";
		numPtr++;
	}
	std::cout << std::endl;	

	std::cout << "Numbers in the array but backwards: \n";
	for (int count = 1; count < SIZE; count++) {
		numPtr--;
		std::cout << *numPtr << " ";
 	}
	return 0;
}
