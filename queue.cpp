// CPP code to illustrate Queue in 
// Standard Template Library (STL)
#include <iostream>
#include <queue>

using namespace std;

// Display the queue elements
void displayQueue(queue<int> customQueue)
{
    queue<int> tempQueue = customQueue;
    while (!tempQueue.empty()) {
        cout << '\t' << tempQueue.front();
        tempQueue.pop();
    }
    cout << '\n';
}

// Driver Code
int main()
{
    queue<int> myQueue;
    
    // Enqueue some values
    myQueue.push(15);
    myQueue.push(25);
    myQueue.push(35);

    cout << "The queue myQueue is : ";
    displayQueue(myQueue);

    // Displaying size, front, and back of the queue
    cout << "\nmyQueue.size() : " << myQueue.size();
    cout << "\nmyQueue.front() : " << myQueue.front();
    cout << "\nmyQueue.back() : " << myQueue.back();

    // Dequeue an element
    cout << "\nmyQueue.pop() : ";
    myQueue.pop();
    displayQueue(myQueue);

    return 0;
}
