#include <iostream>

int main() { 
	
	// Array names can be used as constant pointers
	// and pointers can be used as array names
	short numbers[] = { 10, 20, 30, 40, 50 };
	std::cout << *numbers << std::endl;
	return 0;
}
