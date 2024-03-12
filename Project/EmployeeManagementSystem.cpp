#include <iostream>
#include <algorithm>
#include "EmployeeManagementSystem.h"

// Function to add an employee to the system
void EmployeeManagementSystem::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

// Function to remove an employee from the system by ID
void EmployeeManagementSystem::removeEmployee(int id) {
    employees.erase(std::remove_if(employees.begin(), employees.end(),
        [id](const Employee& emp) { return emp.id == id; }), employees.end());
}

// Function to find an employee by ID
Employee* EmployeeManagementSystem::findEmployeeById(int id) {
    for (auto& emp : employees) {
        if (emp.id == id)
            return &emp;
    }
    return nullptr;
}

// Function to display all employees
void EmployeeManagementSystem::displayEmployees() {
    std::cout << "Employee List:" << std::endl;
    for (const auto& emp : employees) {
        std::cout << "Name: " << emp.name << ", ID: " << emp.id << ", Department: " << emp.department << ", Salary: " << emp.salary << std::endl;
    }
}
