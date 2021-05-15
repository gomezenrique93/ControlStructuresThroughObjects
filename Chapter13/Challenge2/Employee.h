//
// Created by gomez on 5/10/2021.
//

#ifndef CHALLENGE2_EMPLOYEE_H
#define CHALLENGE2_EMPLOYEE_H
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;
public:
    // Constructor 1
    Employee ()
    { name = " ", idNumber = 0 , department = " ", position = " "; };

    // Constructor 2
    Employee(std::string n, int id, std::string d, std::string p) {
        name = n;
        idNumber = id;
        department = d;
        position = p;
    };

    // Constructor 3
   Employee(std::string n, int id) {
       name = n;
       idNumber = id;
       department = " ";
       position = " ";
    };

   // Mutator Functions
   void setName(std::string n)
   { name = n; }

    void setId(int id)
    { idNumber = id; }

    void setDepartment(std::string d)
    {  department = d; }

    void setPosition(std::string p)
    { position = p; }

    // Accessor Functions
    std::string getName() const
    { return name; }

    int getId() const
    { return idNumber; }

    std::string getDepartment() const
    { return department; }

    std::string getPosition() const
    { return position; }
};
#endif //CHALLENGE2_EMPLOYEE_H
