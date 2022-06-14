/* Array Allocator
Write a function that dynamically allocates an array of integers. The function should
accept an integer argument indicating the number of elements to allocate. The function
should return a pointer to the array. */

#include <iostream>

int *ArraySize (int );

int main() {
    // Pointer and variable section
    int *size = nullptr;
    int numbers = 0;

    std::cout << "How many subscripts would you like to create for this array? ";
    std::cin >> numbers;
    size = ArraySize(numbers);

    std::cout << "The numbers you entered into the array are: " << std::endl;
    for (int i = 0; i < numbers; i++) {
        std::cout << size[i] << " ";
    }

    delete [] size;
    size = nullptr;
    return 0;
}

int *ArraySize (int numbers) {
    // Array that will hold numbers
   int *array = nullptr;

   if (numbers <= 0)
       return nullptr;

   array = new int[numbers];

   for (int i = 0; i < numbers; i++) {
       std::cout << "Enter number at array subscript " << i << " : ";
       std::cin >> *(array + i);
   }
    return array;
}
