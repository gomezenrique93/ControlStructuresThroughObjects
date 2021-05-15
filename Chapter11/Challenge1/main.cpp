/*
 * 1. Movie Data
Write a program that uses a structure named MovieData to store the following information
about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members,
and pass each one, in turn, to a function that displays the information about the movie
in a clearly formatted manner.
 */

#include <iostream>
#include <string>

struct MovieData {
   std::string title;
    std::string director;
    int year_released;
    int running_time;
};

void showMovieData(MovieData);

int main() {
    MovieData movie1 = { "Spider-Man: Into the Spider-Verse",
                         "Bob Persichetti",
                         2018,
                         117};
    MovieData movie2 = { "Inception",
                         "Christopher Nolan",
                         2010,
                         148};

    showMovieData(movie1);
    showMovieData(movie2);

    return 0;
}

void showMovieData(MovieData m) {
    std::cout << "--------------------------------" << std::endl;
    std::cout << "Title: " << m.title << std::endl;
    std::cout << "Director: " << m.director << std::endl;
    std::cout << "Released: " << m.year_released << std::endl;
    std::cout << "Length: " << m.running_time << " minutes" << std::endl;
    std::cout << "--------------------------------" << std::endl;
}