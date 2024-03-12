#include <iostream>
#include "Employee.h"
#include "EmployeeManagementSystem.h"

int main() {
    // Creating an instance of EmployeeManagementSystem
    EmployeeManagementSystem ems;

    // Adding employees
    ems.addEmployee(Employee("John Doe", 1001, "Engineering", 50000));
    ems.addEmployee(Employee("Jane Smith", 1002, "HR", 45000));

    // Displaying employees
    ems.displayEmployees();

    // Removing an employee
    ems.removeEmployee(1002);

    // Displaying employees after removal
    ems.displayEmployees();

    // Searching for an employee
    Employee* emp = ems.findEmployeeById(1001);
    if (emp != nullptr) {
        std::cout << "Employee found - Name: " << emp->name << ", ID: " << emp->id << std::endl;
    }
    else {
        std::cout << "Employee not found" << std::endl;
    }

    return 0;
}
