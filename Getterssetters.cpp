#include <iostream>
#include <string>

class Individual {
private:
    std::string fullName;       // Storing full name as a string
    int individualAge;          // Storing age as an integer
    double individualHeight;    // Storing height in centimeters as a double
    char individualGender;      // Storing gender as a single character ('M' for male, 'F' for female, etc.)
    bool maritalStatus;         // Storing marital status as a boolean (true for married, false for single)

public:
    // Accessor for full name
    std::string getFullName() const {
        return fullName;
    }

    // Mutator for full name
    void setFullName(const std::string& newName) {
        fullName = newName;
    }

    // Accessor for age
    int getIndividualAge() const {
        return individualAge;
    }

    // Mutator for age
    void setIndividualAge(int newAge) {
        if (newAge >= 0) {
            individualAge = newAge;
        }
        else {
            std::cerr << "Age cannot be negative." << std::endl;
        }
    }

    // Accessor for height
    double getIndividualHeight() const {
        return individualHeight;
    }

    // Mutator for height
    void setIndividualHeight(double newHeight) {
        individualHeight = newHeight;
    }

    // Accessor for gender
    char getIndividualGender() const {
        return individualGender;
    }

    // Mutator for gender
    void setIndividualGender(char newGender) {
        individualGender = newGender;
    }

    // Accessor for marital status
    bool getMaritalStatus() const {
        return maritalStatus;
    }

    // Mutator for marital status
    void setMaritalStatus(bool newStatus) {
        maritalStatus = newStatus;
    }
};

int main() {
    Individual person;
    person.setFullName("Alice");        // Set the full name of the individual
    person.setIndividualAge(30);        // Set the age of the individual
    person.setIndividualHeight(165.5);  // Set the height of the individual
    person.setIndividualGender('F');    // Set the gender of the individual
    person.setMaritalStatus(true);      // Set the marital status of the individual

    // Print information about the individual
    std::cout << "Full Name: " << person.getFullName() << std::endl;
    std::cout << "Age: " << person.getIndividualAge() << std::endl;
    std::cout << "Height: " << person.getIndividualHeight() << " cm" << std::endl;
    std::cout << "Gender: " << person.getIndividualGender() << std::endl;
    std::cout << "Marital Status: " << (person.getMaritalStatus() ? "Married" : "Single") << std::endl;

    return 0;
}
