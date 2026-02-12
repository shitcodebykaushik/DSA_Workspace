// Including necessary header file for input and output operations
#include <iostream>

// Using the standard namespace to avoid prefixing with std::
using namespace std;

// Defining the maximum size of the queue as a constant integer
const int MAX_SIZE = 100;

// Defining the Queue class to implement queue operations
class Queue {
// Public member variables and functions
public:
    // Variable to track the front index of the queue
    int frontIndex;
    // Variable to track the rear index of the queue
    int rearIndex;
    // Array to store queue elements with maximum size defined above
    int queueArray[MAX_SIZE];

    // Constructor to initialize the queue
    Queue() {
        // Initialize front index to -1 (empty queue)
        frontIndex = -1;
        // Initialize rear index to -1 (empty queue)
        rearIndex = -1;
    }

    // Function to check if the queue is empty
    bool checkIfQueueIsEmpty() {
        // Queue is empty if front index is -1 OR front index is greater than rear index
        if (frontIndex == -1 || frontIndex > rearIndex) {
            return true;
        } else {
            return false;
        }
    }

    // Function to check if the queue is full
    bool checkIfQueueIsFull() {
        // Queue is full if rear index reaches the maximum size minus one
        if (rearIndex == MAX_SIZE - 1) {
            return true;
        } else {
            return false;
        }
    }

    // Function to get the front element of the queue
    int getFrontElement() {
        // First, check if the queue is empty
        if (checkIfQueueIsEmpty() == true) {
            // Print an error message if queue is empty
            cout << "Queue is empty, cannot get front element" << endl;
            // Return -1 to indicate error
            return -1;
        } else {
            // Return the element at front index position
            return queueArray[frontIndex];
        }
    }

    // Function to get the rear element of the queue
    int getRearElement() {
        // First, check if the queue is empty
        if (checkIfQueueIsEmpty() == true) {
            // Print an error message if queue is empty
            cout << "Queue is empty, cannot get rear element" << endl;
            // Return -1 to indicate error
            return -1;
        } else {
            // Return the element at rear index position
            return queueArray[rearIndex];
        }
    }

    // Function to add an element to the queue (enqueue operation)
    void enqueueElement(int valueToAdd) {
        // Check if the queue is full (overflow condition)
        if (checkIfQueueIsFull() == true) {
            // Print an error message if queue is full
            cout << "Queue is full, cannot add more elements" << endl;
            // Return from the function without adding element
            return;
        }
        
        // Check if the queue is empty
        if (checkIfQueueIsEmpty() == true) {
            // If queue is empty, set front index to 0
            frontIndex = 0;
        }
        
        // Increment the rear index by 1
        rearIndex = rearIndex + 1;
        // Store the value at the new rear index position
        queueArray[rearIndex] = valueToAdd;
        
        // Print confirmation message
        cout << "Element " << valueToAdd << " has been added to the queue" << endl;
    }

    // Function to remove an element from the queue (dequeue operation)
    int dequeueElement() {
        // Check if the queue is empty (underflow condition)
        if (checkIfQueueIsEmpty() == true) {
            // Print an error message if queue is empty
            cout << "Queue is empty, cannot remove elements" << endl;
            // Return -1 to indicate error
            return -1;
        }
        
        // Store the element at front index in a temporary variable
        int elementToReturn = queueArray[frontIndex];
        // Increment the front index by 1
        frontIndex = frontIndex + 1;
        
        // Check if the queue has become empty after removal
        if (checkIfQueueIsEmpty() == true) {
            // Reset both indices to -1 to indicate empty queue
            frontIndex = -1;
            rearIndex = -1;
        }
        
        // Print confirmation message
        cout << "Element " << elementToReturn << " has been removed from the queue" << endl;
        // Return the removed element
        return elementToReturn;
    }

    // Function to display all elements in the queue
    void displayQueueElements() {
        // Check if the queue is empty
        if (checkIfQueueIsEmpty() == true) {
            // Print message if queue is empty
            cout << "Queue is empty, no elements to display" << endl;
            // Return from the function
            return;
        }
        
        // Print header for queue display
        cout << "Elements in the queue from front to rear: ";
        
        // Loop through all elements from front to rear
        for (int index = frontIndex; index <= rearIndex; index = index + 1) {
            // Print each element followed by a space
            cout << queueArray[index] << " ";
        }
        
        // Move to next line after displaying all elements
        cout << endl;
        
        // Print additional information about queue indices
        cout << "Front index: " << frontIndex << ", Rear index: " << rearIndex << endl;
    }
};

// Main function where program execution begins
int main() {
    // Create a queue object
    Queue queueObject;
    
    // Print header for enqueue operations
    cout << "==============================================" << endl;
    cout << "Starting Queue Operations" << endl;
    cout << "==============================================" << endl;
    
    // Enqueue elements to the queue
    cout << "\nPerforming enqueue operations:" << endl;
    queueObject.enqueueElement(1);
    queueObject.enqueueElement(2);
    queueObject.enqueueElement(3);
    
    // Display status after enqueuing elements
    cout << "\nStatus after enqueuing three elements:" << endl;
    cout << "Front element of the queue: " << queueObject.getFrontElement() << endl;
    cout << "Rear element of the queue: " << queueObject.getRearElement() << endl;
    
    // Display all elements in the queue
    queueObject.displayQueueElements();
    
    // Enqueue more elements
    cout << "\nEnqueuing two more elements:" << endl;
    queueObject.enqueueElement(4);
    queueObject.enqueueElement(5);
    
    // Display updated queue
    queueObject.displayQueueElements();
    
    // Attempt to enqueue one more element to demonstrate overflow
    cout << "\nAttempting to enqueue one more element (to demonstrate overflow):" << endl;
    queueObject.enqueueElement(6);
    
    // Perform dequeue operations
    cout << "\n==============================================" << endl;
    cout << "Performing dequeue operations:" << endl;
    cout << "==============================================" << endl;
    
    int removedElementOne = queueObject.dequeueElement();
    if (removedElementOne != -1) {
        cout << "Successfully dequeued: " << removedElementOne << endl;
    }
    
    int removedElementTwo = queueObject.dequeueElement();
    if (removedElementTwo != -1) {
        cout << "Successfully dequeued: " << removedElementTwo << endl;
    }
    
    // Display status after dequeuing elements
    cout << "\nStatus after dequeuing two elements:" << endl;
    cout << "Front element of the queue: " << queueObject.getFrontElement() << endl;
    cout << "Rear element of the queue: " << queueObject.getRearElement() << endl;
    
    // Display remaining elements in the queue
    queueObject.displayQueueElements();
    
    // Additional demonstration: dequeuing remaining elements
    cout << "\n==============================================" << endl;
    cout << "Dequeuing remaining elements:" << endl;
    cout << "==============================================" << endl;
    
    while (queueObject.checkIfQueueIsEmpty() == false) {
        int currentElement = queueObject.dequeueElement();
        cout << "Removed element: " << currentElement << endl;
        queueObject.displayQueueElements();
    }
    
    // Attempt to dequeue from empty queue
    cout << "\nAttempting to dequeue from empty queue:" << endl;
    queueObject.dequeueElement();
    
    // Final message
    cout << "\n==============================================" << endl;
    cout << "Queue operations completed successfully" << endl;
    cout << "==============================================" << endl;
    
    // Return 0 to indicate successful program execution
    return 0;
}