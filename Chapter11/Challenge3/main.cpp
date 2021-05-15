/*3.
 *
Corporate Sales Data
Write a program that uses a structure to store the following data on a company
division:

Division Name (such as East, West, North, or South)
First-Quarter Sales
Second-Quarter Sales
Third-Quarter Sales
Fourth-Quarter Sales
Total Annual Sales
Average Quarterly Sales

The program should use four variables of this structure. Each variable should represent
one of the following corporate divisions: East, West, North, and South. The
user should be asked for the four quarters’ sales figures for each division. Each
division’s total and average sales should be calculated and stored in the appropriate
member of each structure variable. These figures should then be displayed on the
screen.

Input Validation: Do not accept negative numbers for any sales figures.
 */

#include <iostream>
#include <string>

struct CompanyDivision {
    std::string division_name;
    double first_quarter_sales;
    double second_quarter_sales;
    double third_quarter_sales;
    double fourth_quarter_sales;
    double total_annual_sales;
    double average_quarterly_sales;
};

int main() {
    CompanyDivision East,
                    West,
                    North,
                    South;

    
    return 0;
}
