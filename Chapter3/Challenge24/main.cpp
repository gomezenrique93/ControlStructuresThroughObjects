/*
24. Word Game
Write a program that plays a word game with the user. The program should ask the
user to enter the following:
• His or her name
• His or her age
• The name of a city
• The name of a college
• A profession
• A type of animal
• A pet’s name
After the user has entered these items, the program should display the following story,
inserting the user’s input into the appropriate locations:
There once was a person named NAME who lived in CITY . At the age of
AGE , NAME went to college at COLLEGE . NAME graduated and went to work
as a PROFESSION . Then, NAME adopted a(n) ANIMAL named PETNAME . They
both lived happily ever after!
*/
#include <iostream>
#include <string>

int main() {
    // Variable Section
    std::string name,
    city,
    college,
    profession,
    animal,
    pet_name;
    int age;

    // User Input Section
    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter the name of the city that you live in: ";
    getline(std::cin, city);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();
    std::cout << "Enter your college: ";
    getline(std::cin, college);
    std::cout << "Enter your profession: ";
    getline(std::cin, profession);
    std::cout << "Enter the type of animal you have: ";
    getline(std::cin, animal);
    std::cout <<"Enter your pet name: ";
    getline(std::cin, pet_name);
    std::cout << "\n";


    // Output Section
    std::cout << "There once was a person named " << name << " who lived in " << city << ". " << std::endl;
    std::cout << "At the age of " << age << ", " << name << " went to college at " << college << "." << std::endl;
    std::cout << name << " graduated and went to work as a " << profession << "." << std::endl;
    std::cout << "Then, " << name << " adopted a(n) " << animal << " named " << pet_name << "." << std::endl;
    std::cout << "They both lived happily after! " << std::endl;
return 0;
}
