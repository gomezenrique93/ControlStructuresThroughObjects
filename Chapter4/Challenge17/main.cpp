/*
17. Personal Best
Write a program that asks for the name of a pole vaulter and the dates and vault
heights (in meters) of the athlete’s three best vaults. It should then report, in order of
height (best first), the date on which each vault was made and its height.
Input Validation: Only accept values between 2.0 and 5.0 for the heights.
*/
#include <iostream>
#include <string>

int main() {
    std::string name,
    dates1,
    dates2,
    dates3;
    double height1,
    height2,
    height3;

    std::cout << "What is the name of the pole vaulter? ";
    getline(std::cin, name);

    std::cout << "What is the date of the first jump? " << std::endl;
    std::cout << "Enter in the form of mm/dd/yyyy ";
    getline(std::cin, dates1);
    std::cout << "What is the height of the first jump (in meters) ? ";
    std::cin >> height1;
    std::cin.ignore();
    while (height1 < 2.0 || height1 > 5.0)
    {
        std::cout << "Please make sure that your height is between 2.0 and 5.0 meters.";
        std::cin >> height1;
        std::cin.ignore();
    }

    std::cout << "What is the date of the second jump? " << std::endl;
    std::cout << "Enter in the form of mm/dd/yyyy ";
    getline(std::cin, dates2);
    std::cout << "What is the height of the second jump? ";
    std::cin >> height2;
    std::cin.ignore();
    while (height2 < 2.0 || height2 > 5.0)
    {
        std::cout << "Please make sure that your height is between 2.0 and 5.0 meters.";
        std::cin >> height2;
        std::cin.ignore();
    }

    std::cout << "What is the date of the third jump? ";
    std::cout << "Enter in the form of mm/dd/yyyy ";
    getline(std::cin, dates3);
    std::cout << "What is the height of the third jump? ";
    std::cin >> height3;
    std::cin.ignore();
    while (height3 < 2.0 || height3 > 5.0) {
        std::cout << "Please make sure that your height is between 2.0 and 5.0 meters. ";
        std::cin >> height3;
    }
    if (height1 < height2 && height1 < height3)
    {
        if (height2 < height3 && height2 > height1)
        {
            std::cout << "Heights (best to worst) for: " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Heights: " << height1 << " Date: " << dates1  << std::endl;
            std::cout << "Heights: " << height2 << " Date: " << dates2 << std::endl;
            std::cout << "Heights: " << height3 << " Date: " << dates3 << std::endl;
        }
        else if (height3 < height2 && height3 > height1)
        {
            std::cout << "Heights (best to worst) for " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Heights: "  << height1 << " Date " << dates1  << std::endl;
            std::cout << "Heights: " << height3 << " Date: " << dates3 << std::endl;
            std::cout << "Heights: " << height2 << " Date: " << dates2 << std::endl;
        }
    }
    else if (height2 < height1 && height2 < height3)
    {
        if (height1 > height2 && height1 < height3)
        {
            std::cout << "Heights (best to worst) for " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Heights: " << height2 << " Date: " << dates2 << std::endl;
            std::cout << "Heights: " << height1 << " Date: " << dates1 << std::endl;
            std::cout << "Heights: " << height3 << " Date: " << dates3 << std::endl;
        }
        else if (height3 > height2 && height3 < height1)
        {
            std::cout << "Heights (best to worst) for " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Heights: " << height2 << " Date: " << dates2 << std::endl;
            std::cout << "Heights: " << height3 << " Date: " << dates3 << std::endl;
            std::cout << "Heights: " << height1 << " Date: " << dates1 << std::endl;
        }
    }
    else if (height3 < height1 && height3 < height2)
    {
        if (height2 > height3 && height2 < height1)
        {
            std::cout << "Heights (best to worst) for " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Heights: " << height3 << " Date: " << dates3 << std::endl;
            std::cout << "Heights: " << height2 << " Date: " << dates2 << std::endl;
            std::cout << "Heights: " << height1 << " Date: " << dates1 << std::endl;
        }
        else if (height1 > height3 && height1 < height2)
        {
            std::cout << "Heights (best to worst) for " << name << std::endl;
            std::cout << "-----------------------------------" << std::endl;
            std::cout << "Height: " << height3 << "Date: " << dates3 << std::endl;
            std::cout << "Height: " << height1 << "Date: " << dates1 << std::endl;
            std::cout << "Height: " << height2 << "Date: " << dates2 << std::endl;
        }
    }
    return 0;
}
