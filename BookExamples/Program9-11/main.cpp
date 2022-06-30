#include <iostream>

void getNumber(int *);
void doubleNumber(int *);

int main() {
	int number;
	getNumber(&number);
	doubleNumber(&number);	
	
	// Display number stored in memory
	std::cout << number;
	return 0;
}

void getNumber(int *input) {
	std::cout << "Enter a number so that I can double it " << std::endl;
	std::cin >> *input;	
}

void doubleNumber(int *val) {
	std::cout << "Your number doubled is " << std::endl;
	*val *= 2;
}
