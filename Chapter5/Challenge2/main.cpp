#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i < 127; i++) {
		for (int j = 0; j < 32; j++) {
			cout << char(i);
			if (j == 15)
				break;
		}
		cout << endl;
	}
	return 0;
}
