// Enrique Gomez
// 6-27-2022

#include <iostream>

int main() {

	int x = 25;
	std::cout << "The address of x is " << &x << std::endl;
	std::cout << "The size of x is " << sizeof(x) << " byts\n";
	std::cout << "The value in x is " << x << std::endl;
	return 0;
}
