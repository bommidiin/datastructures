#include <iostream>
#include "Employee.h"
#include "EmployeeManagementSystem.h"

int main() {
    EmployeeManagementSystem ems;

    char choice;
    do {
        std::cout << "Enter option: \n1. Add Employee\n2. Remove Employee\n3. Search Employee\n4. Display Employees\n5. Save Employees to File\n6. Load Employees from File\n7. Exit\n";
        std::cin >> choice;

        switch (choice) {
        case '1': {
            std::string name, department;
            int id;
            double salary;
            std::cout << "Enter employee name: ";
            std::cin >> name;
            std::cout << "Enter employee ID: ";
            std::cin >> id;
            std::cout << "Enter employee department: ";
            std::cin >> department;
            std::cout << "Enter employee salary: ";
            std::cin >> salary;
            ems.addEmployee(Employee(name, id, department, salary));
            break;
        }
        case '2': {
            int id;
            std::cout << "Enter employee ID to remove: ";
            std::cin >> id;
            ems.removeEmployee(id);
            break;
        }
        case '3': {
            int id;
            std::cout << "Enter employee ID to search: ";
            std::cin >> id;
            Employee* emp = ems.findEmployeeById(id);
            if (emp != nullptr) {
                std::cout << "Employee found - Name: " << emp->name << ", ID: " << emp->id << ", Department: " << emp->department << ", Salary: " << emp->salary << std::endl;
            }
            else {
                std::cout << "Employee not found" << std::endl;
            }
            break;
        }
        case '4':
            ems.displayEmployees();
            break;
        case '5': {
            std::string filename;
            std::cout << "Enter filename to save: ";
            std::cin >> filename;
            ems.saveToFile(filename);
            break;
        }
        case '6': {
            std::string filename;
            std::cout << "Enter filename to load: ";
            std::cin >> filename;
            ems.loadFromFile(filename);
            break;
        }
        case '7':
            std::cout << "Exiting..." << std::endl;
            break;
        default:
            std::cout << "Invalid option" << std::endl;
        }
    } while (choice != '7');

    return 0;
}