/*
2. Employee Class
Write a class named Employee that has the following member variables:
• name. A string that holds the employee’s name.
• idNumber. An int variable that holds the employee’s ID number.
• department. A string that holds the name of the department where the employee works.
• position. A string that holds the employee’s job title.
The class should have the following constructors:
• A constructor that accepts the following values as arguments and assigns them to
the appropriate member variables: employee’s name, employee’s ID number, department,
and position.
• A constructor that accepts the following values as arguments and assigns them to the
appropriate member variables: employee’s name and ID number. The department
and position fields should be assigned an empty string ( "" ).
• A default constructor that assigns empty strings ( "" ) to the name , department , and
position member variables, and 0 to the idNumber member variable.
Write appropriate mutator functions that store values in these member variables and
accessor functions that return the values in these member variables. Once you have
written the class, write a separate program that creates three Employee objects to hold
the following data:
Susan Meyers 47899 Accounting Vice President
Mark Jones 39119 IT Programmer
Joy Rogers 81774 Manufacturing Engineer
 */
#include <iostream>
#include "Employee.h"

int main() {
    // Object 1
    Employee employee_one;
    employee_one.setName("Susan Meyers");
    employee_one.setId(47899);
    employee_one.setDepartment("Accounting");
    employee_one.setPosition("Vice President");

    // Object 2
    Employee employee_two("Mark Jones", 39119, "IT", "Programmer");

    // Object 3
    Employee employee_three("Joy Rogers", 81774);
    employee_three.setDepartment("Manufacturing");
    employee_three.setPosition("Engineer");

    //Displaying Object 1
    std::cout << "------Employee Database------ " << std::endl;
    std::cout << employee_one.getName() << " " << employee_one.getId() << " "
              << employee_one.getDepartment() << " " << employee_one.getPosition() << std::endl;

    //Displaying Object 2
    std::cout << employee_two.getName() << " " << employee_two.getId() << " "
              << employee_two.getName() << " " << employee_two.getPosition() << std::endl;

    //Displaying Object 3
    std::cout << employee_three.getName() << " " << employee_three.getId() << " "
              << employee_three.getName() << " " << employee_three.getPosition() << std::endl;
    return 0;
}
