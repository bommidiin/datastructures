#include <iostream>
#include <string>

using namespace std;

int main() {
    // Array Declaration and Initialization
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int myNum[3] = {10, 20, 30};

    // Accessing and Changing Array Elements
    cout << cars[0] << endl;  // Outputs Volvo
    cars[0] = "Opel";
    cout << cars[0] << endl;  // Now outputs Opel instead of Volvo

    // Looping Through an Array
    string carsLoop[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
        cout << carsLoop[i] << "\n";
    }

    // Loop with index and value
    for (int i = 0; i < 5; i++) {
        cout << i << " = " << carsLoop[i] << "\n";
    }

    // For-each Loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers) {
        cout << num << "\n";
    }

    // Omitting Array Size
    string carsOmit[] = {"Volvo", "BMW", "Ford"}; // Compiler determines array size

    // Omitting array size on declaration
    string carsDynamic[5];
    carsDynamic[0] = "Volvo";
    carsDynamic[1] = "BMW";

    // Getting the Size of an Array
    int myNumbersSize[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbersSize) / sizeof(myNumbersSize[0]) << endl;

    return 0;
}
