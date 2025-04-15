#include<bits/stdc++.h>
#include<algorithm>
#include <iostream>
using namespace std ;
class Kauji{
    public:
    int raj;
    Kauji*next;

    Kauji(int data1){
        raj =data1;
        next=nullptr; 
    }
};

int main () {

vector<int>arr = {1,2,37,6};
// Create the first head mannually 
Kauji*head= new Kauji(arr[0]);  // Here our first node is created .
cout << "Head: " << head->raj << endl;  // this line will print the head ,
// 
Kauji*current=head;

// Loop through the array and created new nodes .

for (int i=0;i<arr.size();++i){
    
}


}