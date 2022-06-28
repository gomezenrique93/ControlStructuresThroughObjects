#include <iostream>

int main() {

	int x = 25, y = 50, z = 75;
	int *ptr = nullptr;

	std::cout << "Here are the values of x, y, and z \n";
	std::cout << x << " " << y << " " << z << std::endl;
	
	ptr = &x;
	*ptr += 100;

	ptr = &y;
	*ptr += 100;

	ptr = &z;
	*ptr += 100;

	std::cout << "Once again here are the values of x, y, and z \n";
	std::cout << x << " " << y << " " << z << std::endl;
	return 0;
}
