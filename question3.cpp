// Include the input/output stream header file for basic input and output operations.
#include <iostream>
// Use the standard namespace to simplify the use of standard library components.
using namespace std;

// Define a function named performBubbleSort that takes an integer array and its size as parameters.
void performBubbleSort(int inputArray[], int arraySize) {
    // Outer loop: Iterate through the array from the beginning to the second-to-last element.
    for (int outerIndex = 0; outerIndex < arraySize - 1; ++outerIndex) {
        // Inner loop: Iterate through the array from the beginning to the (arraySize - outerIndex - 1) element.
        for (int innerIndex = 0; innerIndex < arraySize - outerIndex - 1; ++innerIndex) {
            // Check if the current element is greater than the next element.
            if (inputArray[innerIndex] > inputArray[innerIndex + 1]) {
                // Swap elements if they are in the wrong order.
                int temporaryVariable = inputArray[innerIndex];
                inputArray[innerIndex] = inputArray[innerIndex + 1];
                inputArray[innerIndex + 1] = temporaryVariable;
            }
        }
    }
}

// Define the main function, the entry point of the program.
int main() {
    // Declare an integer array and initialize it with values.
    int originalArray[] = { 3, 6, 1, 8, 2 };
    // Calculate the size of the array by dividing the total size of the array by the size of one element.
    int arraySize = sizeof(originalArray) / sizeof(originalArray[0]);

    // Print a message indicating the unsorted array is about to be displayed.
    cout << "Unsorted array:";
    // Loop through each element of the array and print its value.
    for (int i = 0; i < arraySize; ++i) {
        cout << " " << originalArray[i];
    }
    // Move to the next line after printing the unsorted array.
    cout << endl;

    // Call the performBubbleSort function to sort the array.
    performBubbleSort(originalArray, arraySize);

    // Print a message indicating the sorted array is about to be displayed.
    cout << "Sorted array:";
    // Loop through each element of the sorted array and print its value.
    for (int i = 0; i < arraySize; ++i) {
        cout << " " << originalArray[i];
    }
    // Move to the next line after printing the sorted array.
    cout << endl;

    // Indicate successful program execution by returning 0.
    return 0;
}
