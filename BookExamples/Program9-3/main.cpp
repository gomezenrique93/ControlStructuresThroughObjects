#include <iostream>

int main() {
	int x = 25;
	int *ptr = nullptr;
	
	ptr = &x;
	std::cout << "here is the value in x printed twice\n";
	std::cout << x << std::endl;
	std::cout << *ptr << std::endl;


	*ptr = 100;
	std::cout << "Once again here is the value in x." << std::endl;
	std::cout << x << std::endl;
	std::cout << *ptr << std::endl;
	return 0;
}
