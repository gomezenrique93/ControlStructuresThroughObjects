#include <iostream>

void getSales(double *, int);
doulbe totalSales(double *, int) ;

int main() {
	
	const int QUARTERS = 4;
	double sales[QUARTERS]; 
	
	getSales(sales, QUARTERS);	

	
	return 0;
}
