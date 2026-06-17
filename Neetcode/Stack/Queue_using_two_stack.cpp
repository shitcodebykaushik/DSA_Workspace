#include <bits/stdc++.h>
using namespace std;
class Stack {
public:
    int arr[1000];
    int topIdx;

    Stack() {
        topIdx = -1;
    }

    void push(int x) {
        arr[++topIdx] = x;
    }

    void pop() {
        if (!empty())
            topIdx--;
    }

    int top() {
        return arr[topIdx];
    }

    bool empty() {
        return topIdx == -1;
    }
};

class MyQueue {
private:
    Stack s1, s2;

public:
    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();

        return val;
    }

    int peek() {

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
int main () {
    MyQueue q;
    q.push(1);
    q.push(2);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
}