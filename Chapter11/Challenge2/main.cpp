/*2.Movie Profit
Modify the Movie Data program written for Programming Challenge 1 to include two
additional members that hold the movie’s production costs and first-year revenues.
Modify the function that displays the movie data to display the title, director, release
year, running time, and first year’s profit or loss.
 */

#include <iostream>
#include <string>

// Struct
struct MovieData  {
 std::string title;
 std::string director;
 int release_year;
 int running_time;
 int production_costs;
 int revenue;
};

// Function prototype
void ShowMovieData(const MovieData &);

int main() {
    MovieData movie_one = {"Inception",
                           "Christopher Nolan",
                           2010,
                           148,
                           160000000,
                           828000000
                           };

    MovieData movie_two = {"Black Panther",
                           "Ryan Coogler",
                           2018,
                           135,
                           200000000,
                           1300000000,
                           };

    ShowMovieData(movie_one);
    ShowMovieData(movie_two);
    return 0;
}


void ShowMovieData(const MovieData &m) {
    std::cout << "Title: " << m.title << std::endl;
    std::cout << "Director: " << m.director << std::endl;
    std::cout << "Release Year: " << m.release_year << std::endl;
    std::cout << "Running Time: " << m.running_time << std::endl;

    if (m.production_costs < m.revenue)
        std::cout << "This movie made a profit of: " << m.revenue - m.production_costs << std::endl;
    else
        std::cout << "This movie lost: " << m.production_costs - m.revenue << std::endl;

    std::cout << "-------------------------------------------" << std::endl;
}