#include <bits/stdc++.h>
using namespace std; 
int main () {
    vector<int>v;   // this is the dynamic vector init
    cout<<"Insertion of the element into the dynamic array "<<endl;
    v.push_back(1); // Here we insert the element into it ,the average time complexity of the insertion is O(1) but in the worst case it is O(n) because when the size of the vector is full then it will create a new vector with double the size and copy all the elements from the old vector to the new vector and then insert the new element .
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);   // Here also we insert the element into to the dynamic array .
     // A shorted way to iterate through the vector is  
   // cout<<"Iteration of the elemetn thorugh the shorter way "<<endl; 
    for (auto x :v) {
        cout<<x<<endl;
    };
    cout<<"The size of the array ";
    int  n = v.size();
    cout<<n<<"\n";  // Here we are printing the size of the dynamic array .
    
    cout<<"Accesing the element thorug the element index "<<v[0]<< " " <<v[1]<<endl;  // Here we are accessing the element of the dynamic array using the index value . 
    cout<<"The removal of the element from the last of the vector " <<endl;
    v.pop_back(); 
    for(auto x  : v) {
        cout<<x<<endl;
    }
    
    // The string structure is also a dynamic array that can be used almost like a vector 
    string s = "Hello World";
    cout<<"The string is "<<s<<endl;
  


     return 0;

}