#include<bits/stdc++.h>
#include<stack>
#include<iostream>
using namespace std;
int main () {
    stack<string> cars ;

// Add elements to the stack
cars.push("Volvo"); //top
cars.push("BMW");
cars.push("Ford");
cars.push("Mazda");
cout<<"The current size before popin is "<<cars.size()<<endl;
cars.pop();
cout<<"\n"<<cars.top();
cout<<"\n"<<cars.empty();
cout<<"\n"<<cars.size();
}