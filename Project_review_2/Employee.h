#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    std::string name;
    int id;
    std::string department;
    double salary;

    Employee(std::string name, int id, std::string department, double salary);
    std::string toString() const; // Declaration of the toString function as const
    
};

#endif /* EMPLOYEE_H */
