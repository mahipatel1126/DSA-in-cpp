#include <iostream>
using namespace std;

// Step 1: Define the Queue class
class Queue {
    int arr[1000]; // Array to store queue elements
    int frontIndex; // Index of the front element
    int rearIndex;  // Index of the rear element

public:
    Queue() { // Constructor to initialize the queue
        frontIndex = 0;
        rearIndex = -1;
    }

    void enqueue(int x) { // Add element at the rear
        rearIndex++;       // Move rear index forward
        arr[rearIndex] = x; // Store x at rear
    }

    int dequeue() { // Remove element from front
        if (isEmpty()) return -1; // If queue is empty, return -1
        int val = arr[frontIndex]; // Store front element to return
        frontIndex++;              // Move front index forward
        return val;                // Return removed element
    }

    int peek() { // Get front element without removing
        if (isEmpty()) return -1; // If queue is empty
        return arr[frontIndex];    // Return front element
    }

    int isEmpty() { // Check if queue is empty
        return frontIndex > rearIndex; // Empty if front crossed rear
    }
};

int main() {
    int n;
    cin >> n; // Number of operations
    Queue q;  // Create a queue object

    for (int i = 0; i < n; i++) {
        int op;
        cin >> op; // Read operation

        if (op == 1) { // Enqueue
            int x;
            cin >> x;
            q.enqueue(x);
        } else if (op == 2) { // Dequeue
            cout << q.dequeue() << endl;
        } else if (op == 3) { // Peek
            cout << q.peek() << endl;
        } else if (op == 4) { // IsEmpty
            cout << q.isEmpty() << endl;
        }
    }

    return 0;
}
