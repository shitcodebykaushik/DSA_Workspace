#include <bits/stdc++.h> 
using namespace std;
int main () {
    cout<<"--Initial vector values--"<<endl;
    vector<int>vec(5,0); // this is the vetor with the size of 5 and initialized with 0
    for(int i =0;i<5;i++){
        cout<<vec[i]<<endl;
    }
    cout<<"This size of the vector is "<<endl;
    cout<<vec.size()<<endl; // this will print the size of the vector
    cout<<"This capacity of the vector is "<<endl;
    cout<<vec.capacity()<<endl; // this will print the capacity of the vector
    cout<<"--After adding an element to the vector in the last of it --"<<endl;
    vec.emplace_back(4);
    // After 
    cout<<"The values are "<<endl;
    for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
cout<<"The new size is "<<vec.size()<<endl;
cout<<"The new capacity is "<<vec.capacity()<<endl;

vector<vector<int>>vec1 (5);
 cout<<"The new size of 2D is "<<vec1.size()<<endl;
for(int i =0;i<5;i++){
    // this will print the size of each vector in the vector of vectors
       cout<<vec1[1][2]<<endl;
};
}