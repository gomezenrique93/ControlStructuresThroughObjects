//
// Created by gomez on 4/15/2021.
//

#ifndef DATE_H
#define DATE_H

class Date { // Begin Class
private:
     int day;
     int month;
     int year;
public:
    // Constructor #1
    Date() {
        day = 0;
        month = 0;
        year = 0;
    };

    // Constructor #2
    Date(int d, int m, int y) {
        day = d;
        year = y;
        month = m;

    };

    // Mutator Functions
    void setDay (int d)
    { day = d; }

    void setMonth (int m)
    { month = m;
        switch (month) {
            case 1 : std::cout << "January " << std::endl;
                break;
            case 2: std::cout << "February " << std::endl;
                break;
            case 12: std::cout << "December " << std::endl;
        }
    }

    void setYear (int y)
    { year = y; }

    // Accessor Functions
    int getDay() const
    { return day; }

    int getMonth() const
    { return month; }

    int getYear() const
    { return year; }

}; // End Class

#endif //DATE_H
