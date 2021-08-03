// Challenge3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*2. Test Scores #1
Write a program that dynamically allocates an array large enough to hold a userdefined
number of test scores. Once all the scores are entered, the array should be
passed to a function that sorts them in ascending order. Another function should be called that calculates the average score.
The program should display the sorted list of scores and averages with appropriate headings. 
Use pointer notation rather than array notation whenever possible.
Input Validation: Do not accept negative numbers for test scores.
Drop Lowest Score
Modify Problem 2 above so the lowest test score is dropped. This score should not be
included in the calculation of the average.
*/
#include <iostream>

// Function prototype section
void SortScore(double *, int); 
void AverageScores(double*, int);  

int main() {
	int number_of_scores; // Takes in the number of scores
	std::cout << "How many scores would you like to enter? ";
	std::cin >> number_of_scores;

	double* scores = nullptr; // Creates a pointer to store all of the test scores
	scores = new double[number_of_scores];

	// for loop stores all of the test values into the array
	for (int i = 0; i < number_of_scores; i++) {
		std::cout << "Score " << i + 1 << " : ";
		std::cin >> *(scores + i);
	}

	// Function call sends info to average score
	SortScore(scores, number_of_scores);
	AverageScores(scores, number_of_scores);

	delete [] scores;
	scores = nullptr;

	return 0;
} // End main

void SortScore(double *scores, int number_of_scores) {
	bool swap;
	double temp;
	
	do {
		swap = false;
		for (int i = 0; i < (number_of_scores - 1); i++) 
		{
			if (*(scores + i) > *(scores + i + 1)) 
			{
				temp = *(scores + i);
				*(scores + i) = *(scores + i + 1);
				*(scores + i + 1) = temp;
				swap = true;
			}
		}
	} while (swap);

	std::cout << "Sorted scores: ";
	for (int i = 0; i < number_of_scores; i++) {
		std::cout << *(scores + i) << " ";
	}
	 std::cout << std::endl;
}; // END VOID SORT SCORE

void AverageScores(double* scores, int number_of_scores) {
	double total = 0, // Will add up all the test scores
		average = 0, // Will store the average for all test scores
		lowest;

	lowest = *(scores + 0);
	for (int i = 0; i < number_of_scores; i++) {
		// Findes the lowest test score
		if (lowest > *(scores + i))
			lowest = *(scores + i);

		// Adds up all test scores
		total += *(scores + i);
	}

	average = (total - lowest) / number_of_scores;
	std::cout << "Average is " << average << std::endl;
}; // END VOID AVERAGE SCORE

