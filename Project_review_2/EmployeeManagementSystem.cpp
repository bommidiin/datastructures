#include "EmployeeManagementSystem.h"

void EmployeeManagementSystem::addEmployee(const Employee& employee) {
    employees.push_back(employee);
}

void EmployeeManagementSystem::removeEmployee(int id) {
    employees.erase(std::remove_if(employees.begin(), employees.end(),
        [id](const Employee& emp) { return emp.id == id; }), employees.end());
}

Employee* EmployeeManagementSystem::findEmployeeById(int id) {
    for (auto& emp : employees) {
        if (emp.id == id)
            return &emp;
    }
    return nullptr;
}

void EmployeeManagementSystem::displayEmployees() {
    std::cout << "Employee List:" << std::endl;
    for (const auto& emp : employees) {
        std::cout << "Name: " << emp.name << ", ID: " << emp.id << ", Department: " << emp.department << ", Salary: " << emp.salary << std::endl;
    }
}

void EmployeeManagementSystem::saveToFile(const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& emp : employees) {
            file << emp.toString() << std::endl;
        }
        file.close();
        std::cout << "Employees saved to " << filename << std::endl;
    }
    else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}

void EmployeeManagementSystem::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (file.is_open()) {
        employees.clear(); // Clear existing employees
        std::string line;
        std::cout << "Employees loaded from " << filename << ":" << std::endl;
        while (std::getline(file, line)) {
            // Split the line into employee details
            std::string name, department;
            int id;
            double salary;
            size_t pos = 0;
            pos = line.find(",");
            name = line.substr(0, pos);
            line.erase(0, pos + 1);
            pos = line.find(",");
            id = std::stoi(line.substr(0, pos));
            line.erase(0, pos + 1);
            pos = line.find(",");
            department = line.substr(0, pos);
            line.erase(0, pos + 1);
            salary = std::stod(line);
            // Add employee to the vector
            employees.push_back(Employee(name, id, department, salary));

            // Display the employee details
            std::cout << "Name: " << name << ", ID: " << id << ", Department: " << department << ", Salary: " << salary << std::endl;
        }
        file.close();
    }
    else {
        std::cerr << "Unable to open file: " << filename << std::endl;
    }
}