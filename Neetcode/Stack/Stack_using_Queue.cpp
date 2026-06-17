#include <bits/stdc++.h>
using namespace std;
class Queue {
    public:
    int arr[20000];
    int frontIdx;
    int reareIdx;


    Queue() {
        frontIdx = 0;
        reareIdx = -1;

    }

    void push (int x) {
        arr[++reareIdx]=x;

    }

    void  pop () {
        frontIdx++;
    };

    int front() {
        return arr[frontIdx];
    };
    bool empty () {
        return frontIdx>reareIdx;
    }
};

class MyStack {
    private:
    Queue q1,q2;


public:
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);

        while(!q1.empty()) {
          q2.push(q1.front());
          q1.pop();
        }
        Queue temp = q1;
        q1 =q2;
        q2=temp;
        };
    int pop() {
      int val = q1.front();
      q1.pop();
      return val;  
    };
    int top() {
      return q1.front();  
    }
    
    bool empty() {
        return q1.empty();
    }
};
int main () {
    MyStack st;
    st.push(1);
    st.push(2);
    cout<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.empty()<<endl;
}
