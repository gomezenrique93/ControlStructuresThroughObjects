/*
7. Number Analysis Program
Write a program that asks the user for a file name. Assume the file contains a series of
numbers, each written on a separate line. The program should read the contents of the
file into an array and then display the following data:
• The lowest number in the array
• The highest number in the array
• The total of the numbers in the array
• The average of the numbers in the array
If you have downloaded this book’s source code from the companion Web site, you
will find a file named numbers.txt in the Chapter 07 folder. You can use the file to
test the program. (The companion Web site is at www.pearsonhighered.com/gaddis .)
*/
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Variable Section
    const int SIZE = 12;
    int numbers_in_file[SIZE];
    int count = 0,
    total = 0;
    double average;


    std::cout << "Enter a file that you would like to read values from: ";
    std::string filename;
    std::cin >> filename;

    std::ifstream file; // file object
    file.open(filename); // Object Open File

    // while loop to take in the numbers from numbers.txt
    while(count < SIZE && file >> numbers_in_file[count])
        count++;

    // for loop to step through the array to get sum and average
    for (int i = 0; i < SIZE; i++) {
        total += numbers_in_file[i];
        average = (double )total / count;
    }

    // for loop to find highest and lowest numbers
    int highest = numbers_in_file[0];
    int lowest = numbers_in_file[0];
    for (int j = 0; j < SIZE; j++) {
        if (numbers_in_file[j] > highest)
            highest = numbers_in_file[j];

        if (numbers_in_file[j] < lowest)
            lowest = numbers_in_file[j];
    }

    file.close(); // Object Close File
    // Output Section
    std::cout << "The smallest number is " << lowest << std::endl;
    std::cout << "The biggest number is " << highest << std::endl;
    std::cout << "The total is " << total << std::endl;
    std::cout << "The average is " << average << std::endl;
    return 0;
}
