#include<bits/stdc++.h>
using namespace std;

int main () {
    int rows = 3,cols=3;

vector<vector<int>>arr(rows,vector<int>(cols));

arr= {{1,2,3},{4,5,6},{7,8,9}};

// Traversing the 2D array 
for(int i =0;i<arr.size();i++){
    for(int j=0;j<arr[i].size();j++){
    cout<<arr[i][j]<<" ";
}
cout<<endl;
};



cout<<"First elements of the first row: "<<arr[0][0];
cout<<endl;
cout<<"The second element of the first row is :"<<arr[0][1];
cout<<endl;
cout<<"The first element of the second row is : "<<arr[1][0];
cout<<endl;
cout<<"The first element of the third row is : "<<arr[2][0];
cout<<endl;
};
