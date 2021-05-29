/*
13. Book Club Points
Serendipity Booksellers has a book club that awards points to its customers based on
the number of books purchased each month. The points are awarded as follows:
• If a customer purchases 0 books, he or she earns 0 points.
• If a customer purchases 1 book, he or she earns 5 points.
• If a customer purchases 2 books, he or she earns 15 points.
• If a customer purchases 3 books, he or she earns 30 points.
• If a customer purchases 4 or more books, he or she earns 60 points.
Write a program that asks the user to enter the number of books that he or she has
purchased this month and then displays the number of points awarded.
 */
#include <iostream>

int main() {
    int num_books,
    points;

    std::cout << "How many books have you purchased this month? ";
    std::cin >> num_books;

    if (num_books >= 4)
    {
        points = 60;
        std::cout << "You have earned " << points << " points this month. ";
    }
    else if (num_books == 3)
    {
     points = 30;
     std::cout << "You have earned " << points << " points this month. ";
    }
    else if (num_books == 2)
    {
     points = 20;
     std::cout << "You have earned " << points << " points this month. ";
    }
    else if (num_books == 1)
    {
        points = 5;
        std::cout << "You have earned " << points << " points this month. ";
    }
    else if (num_books == 0)
    {
        points = 0;
        std::cout << "You have earned " << points << " points this month. ";
    }

    return 0;
}
