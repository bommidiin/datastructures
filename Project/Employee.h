#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    // Member variables to store employee details
    std::string name;
    int id;
    std::string department;
    double salary;

    // Constructor to initialize employee details
    Employee(std::string name, int id, std::string department, double salary);
};

#endif /* EMPLOYEE_H */
