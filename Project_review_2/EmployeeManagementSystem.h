#ifndef EMPLOYEEMANAGEMENTSYSTEM_H
#define EMPLOYEEMANAGEMENTSYSTEM_H

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include "Employee.h"

class EmployeeManagementSystem {
private:
    std::vector<Employee> employees;

public:
    void addEmployee(const Employee& employee);
    void removeEmployee(int id);
    Employee* findEmployeeById(int id);
    void displayEmployees();
    void saveToFile(const std::string& filename);
    void loadFromFile(const std::string& filename);
};

#endif /* EMPLOYEEMANAGEMENTSYSTEM_H */
