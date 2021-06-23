/*
11. Lowest Score Drop
Write a program that calculates the average of a group of test scores, where the lowest
score in the group is dropped. It should use the following functions:
• void getScore() should ask the user for a test score, store it in a reference parameter
variable, and validate it. This function should be called by main once for each
of the five scores to be entered.
• void calcAverage() should calculate and display the average of the four highest
scores. This function should be called just once by main and should be passed the
five scores.
• int findLowest() should find and return the lowest of the five scores passed to it.
It should be called by calcAverage , which uses the function to determine which of
the five scores to drop.
Input Validation: Do not accept test scores lower than 0 or higher than 100.
*/
#include <iostream>

// Function prototype section
void getScore(int &);
void calcAverage(int &, int &, int &, int &, int &);
int findLowest(int &, int &, int &, int &, int &);

int main() {
    // Variable Section
    int score_1,
    score_2,
    score_3,
    score_4,
    score_5;

    // User Input Section
    std::cout << "Enter your first test score: ";
    std::cin >> score_1;
    getScore(score_1); // Called to validate score 1
    std::cout << "Enter your second test score: ";
    std::cin >> score_2;
    getScore(score_2); // Called to validate score 2
    std::cout << "Enter you third test score: ";
    std::cin >> score_3;
    getScore(score_3); // Called to validate score 3
    std::cout << "Enter you fourth test score: ";
    std::cin >> score_4;
    getScore(score_4); // Called to validate score 4
    std::cout << "Enter you fifth test score: ";
    std::cin >> score_5;
    getScore(score_5); // Called to validate score 5

    // Calling calcAverage to calculate the average of scores entered
    calcAverage(score_1, score_2, score_3, score_4, score_5);
    return 0;
}

// getScore validates each score that is entered
void getScore(int &s) {
    // The score needs to be between 0 and 100
 while (s < 0 || s > 100) {
     std::cout << "Please enter a value greater than zero or less than 100 \n";
     std::cout << "Try again!: ";
     std::cin >> s;
 }
}

void calcAverage(int &s1, int &s2, int &s3, int &s4, int &s5) {
     // Function call to find lowest score
     findLowest(s1, s2, s3, s4, s5);

     // Output Section
     std::cout << findLowest(s1, s2, s3, s4, s5) / 4.0;
}

int findLowest(int &s_1, int &s_2, int &s_3, int &s_4, int &s_5) {
   if (s_1 < s_2 && s_1 < s_3 && s_1 < s_4 && s_1 < s_5) {
      return s_2 + s_3 + s_4 + s_5;
   } else if (s_2 < s_1 && s_2 < s_3 && s_2 < s_4 && s_2 < s_5) {
      return s_1 + s_3 + s_4 + s_5;
   } else if (s_3 < s_1 && s_3 < s_2 && s_3 < s_4 && s_3 < s_5) {
      return  s_1 + s_2 + s_4 + s_5;
   } else if (s_4 < s_1 && s_4 < s_2 && s_4 < s_3 && s_4 < s_5) {
      return s_1 + s_2 + s_3 + s_5;
   } else if (s_5 < s_1 && s_5 < s_2 && s_5 < s_3 && s_5 < s_4) {
      return s_1 + s_2 + s_3 + s_4;
   }
   return 0;
}
