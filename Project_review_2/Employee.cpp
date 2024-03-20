#include "Employee.h"

Employee::Employee(std::string name, int id, std::string department, double salary) {
    this->name = name;
    this->id = id;
    this->department = department;
    this->salary = salary;
}

std::string Employee::toString() const {
    return name + "," + std::to_string(id) + "," + department + "," + std::to_string(salary);
}
