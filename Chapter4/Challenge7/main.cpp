/*
7. Time Calculator
Write a program that asks the user to enter a number of seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is
greater than or equal to 60, the program should display the number of minutes in
that many seconds.
• There are 3,600 seconds in an hour. If the number of seconds entered by the user is
greater than or equal to 3,600, the program should display the number of hours in
that many seconds.
• There are 86,400 seconds in a day. If the number of seconds entered by the user is
greater than or equal to 86,400, the program should display the number of days in
that many seconds.
*/
#include <iostream>

int main() {
    // Variable Section
    const int SECONDS = 60,
    SECONDS_HOUR = 3600,
    SECONDS_DAY = 86400;
    int user_seconds,
    minutes,
    hours,
    days;

    // User Input Section
    std::cout << "Enter the number of seconds: ";
    std::cin >> user_seconds;

    // Output Section
    if (user_seconds >= SECONDS_DAY)
    {
        days = user_seconds / SECONDS_DAY;
        std::cout << user_seconds << " seconds is the same as " << days << " day(s). " << std::endl;
    }
    else if (user_seconds >= SECONDS_HOUR)
    {
        hours = user_seconds / SECONDS_HOUR;
        std::cout << user_seconds << " seconds is the same as " << hours << " hour(s). " << std::endl;
    }
    else if (user_seconds >= SECONDS)
    {
        minutes = user_seconds / SECONDS;
        std::cout << user_seconds << " seconds is the same as " << minutes << " minute(s). " << std::endl;
    }
    return 0;
}
