/*
14. Personal Information
Write a program that displays the following pieces of information, each on a separate line:
Your name
Your address, with city, state, and ZIP code
Your telephone number
Your college major
Use only a single cout statement to display all of this information.

 */
#include <iostream>
#include <string>

int main() {
    std::string name = "Rebecca Gomez",
    city = "Simi Valley",
    state = "California",
    zip = "93063",
    telephone = "323-875-5991",
    major = "Nursing";

   //Output Section
   std::cout << "Hello " << name << ", your address is " << city
             << " " << state << " " << zip << ", " << "your phone number is: "
             << telephone << " " << "and your major is " << major << "." << std::endl;

    return 0;
}
