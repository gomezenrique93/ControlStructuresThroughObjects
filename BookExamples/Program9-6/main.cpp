#include <iostream>

int main() { 
	const int SIZE = 5;
	int array[SIZE];
	int count;

	std::cout << "Enter " << SIZE << " numbers " << std::endl;
	for (count = 0; count < SIZE; count++)
		std::cin >> *(array + count);
	
	std::cout << "Here are the numbers you entered " << std::endl;
	for(count = 0; count < SIZE; count++)
		std::cout <<  *(array + count) << " ";
	return 0;
}
