/*
8. Lo Shu Magic Square
The Lo Shu Magic Square is a grid with 3 rows and 3 columns shown in Figure 7-19 .
The Lo Shu Magic Square has the following properties:
• The grid contains the numbers 1 through 9 exactly.
• The sum of each row, each column, and each diagonal all add up to the same
number. This is shown in Figure 7-20 .
In a program you can simulate a magic square using a two-dimensional array. Write a
function that accepts a two-dimensional array as an argument, and determines whether
the array is a Lo Shu Magic Square. Test the function in a program.
 */
#include <iostream>

void AddRowsAndColumns(const int[][3], int);

int main() {
    int magic_square[3][3] = {{4,9,2},
                              {3,5,7},
                              {8,1,6}};
    AddRowsAndColumns(magic_square, 3);
    return 0;
}

void AddRowsAndColumns(const int square[][3], int rows)
{
    int total_rows = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++) {
            total_rows += square[i][j];
        }
    }

    int total_columns = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < rows; j++) {
            total_columns += square[i][j];
        }
    }

    if (total_rows == 45 && total_columns == 45)
        std::cout << "You have a magic square!!";
    else
        std::cout << "Your square is not magical...";
}