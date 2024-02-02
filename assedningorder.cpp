// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int originalArray[] = {8, 7, 6, 5, 2, 4, 1, 3, 9};
    int arrayLength = sizeof(originalArray) / sizeof(int);

    // Bubble sort algorithm
    for (int outerIndex = 0; outerIndex < arrayLength; outerIndex++) // Loop through the array length
    {
        for (int innerIndex = 0; innerIndex < arrayLength - 1; innerIndex++) // Loop up to the last but one element
        {
            if (originalArray[innerIndex] > originalArray[innerIndex + 1]) {
                // Swap elements if they are in the wrong order
                int temporary = originalArray[innerIndex];
                originalArray[innerIndex] = originalArray[innerIndex + 1];
                originalArray[innerIndex + 1] = temporary;
            }
        }
    }

    // Printing the sorted array
    for (int i = 0; i < arrayLength; i++) {
        cout << originalArray[i] << " ";
    }

    return 0;
}
