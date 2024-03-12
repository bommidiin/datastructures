#ifndef EMPLOYEEMANAGEMENTSYSTEM_H
#define EMPLOYEEMANAGEMENTSYSTEM_H

#include <vector>
#include "Employee.h"

class EmployeeManagementSystem {
private:
    // Vector to store employees
    std::vector<Employee> employees;

public:
    // Functions to add, remove, find, and display employees
    void addEmployee(const Employee& employee);
    void removeEmployee(int id);
    Employee* findEmployeeById(int id);
    void displayEmployees();
};

#endif /* EMPLOYEEMANAGEMENTSYSTEM_H */
