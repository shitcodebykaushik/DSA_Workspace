#include <bits/stdc++.h>
using namespace std;

class Queue {
    public:
    int *arr;
    int size;
    int capacity;

    Queue(int x) {
       capacity = x;
        size = 0;
        arr =new int [capacity];
        };
        // emque operation 
        void enque (int x) {
            if(size == capacity) {
                cout<<"The queue is full "<<endl;
            }else  {
                arr[size++]=x;
            };
        };
    void deque(){
        if (size==0){
            cout<<"Queue Underflow"<<endl;
            return ;
        };
        for(int i =1;i<size;i++){
            arr[i-1] = arr[i];
        };
        size--;
    };
    // Get the peek 
    int peek () {
        if(size==0){
            cout<<"The Queue is empty"<<endl;
            return -1;
        }
        return arr[0];
    };

    int rare () {

    };
        void display (){
           if(size == 0) {
            cout<<"The queue is empty"<<endl;
            return ;
           };
           for(int i = 0;i<size;i++){
            cout<<arr[i]<<" " <<endl;
           };
           cout<<endl;
        };
};
int main () {
Queue q1(4);
q1.enque(2);
q1.enque(3);
q1.display();
cout<<"The deque operation "<<endl;
q1.deque();
q1.display();
cout<<"The new insertion at the end"<<endl;
q1.enque(8);
q1.display();

cout<<"The element will be removed now "<<endl;
q1.deque();
q1.deque();
cout<<"The checking of the peek element "<<endl;
q1.enque(2);
q1.enque(3);
q1.enque(4);
q1.peek();
};