#include <iostream>
#define MAX 1001  // Maximum size of the stack

class Stack {
private:
    int arr[MAX]; // Array to store stack elements
    int top;      // Index of the top element

public:
    Stack() {
        top = -1; // Stack is initially empty
    }

    // Push operation
    void push(int x) {
        if (top >= MAX - 1) {
            std::cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        std::cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            std::cout << "Stack Underflow\n";
            return;
        }
        std::cout << arr[top--] << " popped from stack\n";
    }

    // Peek (top) operation
    int peek() {
        if (top < 0) {
            std::cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top < 0);
    }

    // Get current size of the stack
    int size() {
        return top + 1;
    }
};

// Main function to demonstrate the stack
int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Current top element: " << s.peek() << std::endl;

    s.pop();

    std::cout << "Current top element after pop: " << s.peek() << std::endl;

    std::cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << std::endl;

    std::cout << "Current size of stack: " << s.size() << std::endl;

    return 0;
}
