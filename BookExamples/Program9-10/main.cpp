#include <iostream>

int main() {
	int set[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	int *nums = set;

	std::cout << "The elements in the array are: " << std::endl;
	std::cout << *nums << " ";

	while (nums < &set[7]) {
		nums++;
		std::cout << *nums << " ";
	}

	std::cout << std::endl;
	std::cout << "The elements in the array backwards are " << std::endl;
	std::cout << *nums << " ";
	while (nums > set) {
		nums--;
		std::cout << *nums << " ";
	}
	return 0;
}
