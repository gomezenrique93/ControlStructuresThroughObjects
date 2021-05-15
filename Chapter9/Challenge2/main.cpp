/*
 *
 *
 * Write a program that dynamically allocates an array large enough to hold
 * a user defined number of test scores. Once all the scores entered, the array should be
 * passed to a function that sorts them in ascending order. Another function should be
 * called that calculates the average score. The program should display the sorted list of
 * scores and averages with the appropriate headings. Use pointer notation rather than array
 * notation whenever possible.
 *
 * Input Validation: Do not accept negative numbers for test scores.
 *
 * */

// Function prototype section
void SortScores(double*, int);
double AverageScores(double*, int );

#include <iostream>

int main() {

    // Variable Section
    double* test_scores = nullptr;
    int number_of_test_scores;


    // Will ask user for the number of test scores they would like to enter
    std::cout << "How many test scores would you like to enter? ";
    std::cin >> number_of_test_scores;

    // Dynamically allocated array
    test_scores = new double[number_of_test_scores];

    // Reads test scores from users
    for (int i = 0; i < number_of_test_scores; i++) {
        std::cout << "Enter test score " << (i + 1) << " : ";
        std::cin >> *(test_scores + i);

        while (*(test_scores + i) < 0) {
            std::cout << "Please enter a value greater than zero!" << std::endl;
            std::cout << "Try again!!" << std::endl;
            std::cin >> *(test_scores + i);
        }
    }

    // Function call section
    SortScores(test_scores, number_of_test_scores);

    // Will print out sorted test scores
    std::cout << "Sorted test scores: ";
    for (int i = 0; i < number_of_test_scores; i++) {
        std::cout << *(test_scores + i) << " ";
    }
    std::cout << " " << std::endl;

    AverageScores(test_scores, number_of_test_scores);
    std::cout << "Average Scores: ";
    std::cout << AverageScores(test_scores, number_of_test_scores) << std::endl;

    delete [] test_scores;

    test_scores = nullptr;

    return 0;
}


void SortScores(double* scores, int array_size) {

 bool swap = true;
 double temp;

   while(swap) {
       swap = false;

       for(int i = 0; i < array_size - 1; i++){
           //check if following element is greater
           //than current element
           if(*(scores + i) > *(scores + i + 1)){
               //if so, perform swap
               temp = *(scores + i + 1);
               *(scores + i + 1) = *(scores + i);
               *(scores + i) = temp;

               //and update boolean variable
               swap = true;

           }   //if ends here
       }   //for loop ends here
   }   //while loop ends here
}

double AverageScores(double* scores, int array_size) {

    // Variable Section
    double sum = 0.0,
    average;

   for (int i = 0; i < array_size; i++)
       sum += *(scores + i);

   average = (sum / array_size);
   return average;
}







