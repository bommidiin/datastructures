// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myIntegerStack;

    // Pushing elements onto the stack
    myIntegerStack.push(30);
    myIntegerStack.push(42);
    myIntegerStack.push(18);
    myIntegerStack.push(50);
    
    int customValue = 7;
    myIntegerStack.push(customValue);

    // Popping elements from the stack
    myIntegerStack.pop();
    myIntegerStack.pop();
    myIntegerStack.pop();

    // Printing the remaining elements in the stack
    while (!myIntegerStack.empty()) {
        cout << myIntegerStack.top() << " ";
        myIntegerStack.pop();
    }

    return 0;
}
