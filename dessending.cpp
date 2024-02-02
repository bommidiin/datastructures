// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int myNumbers[] = {15, 22, 7, 10, 33, 12, 5, 18, 27};
    int arrayLength = sizeof(myNumbers) / sizeof(int);

    // Reverse Bubble sort algorithm
    for (int outerIndex = 0; outerIndex < arrayLength; outerIndex++) // Loop through the array length
    {
        for (int innerIndex = 0; innerIndex < arrayLength - 1; innerIndex++) // Loop up to the last but one element
        {
            if (myNumbers[innerIndex] < myNumbers[innerIndex + 1]) {
                // Swap elements if they are in the wrong order
                int temporary = myNumbers[innerIndex];
                myNumbers[innerIndex] = myNumbers[innerIndex + 1];
                myNumbers[innerIndex + 1] = temporary;
            }
        }
    }

    // Printing the reverse-sorted array
    for (int i = 0; i < arrayLength; i++) {
        cout << myNumbers[i] << " ";
    }

    return 0;
}
