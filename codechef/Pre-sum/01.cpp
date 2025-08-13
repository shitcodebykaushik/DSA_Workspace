#include <bits/stdc++.h>
using namespace std;
int main () {
    // Define the original vector
    vector<int> original ={10,20,30
    };
    // Create a vectore that have the same size as the original vector 
    vector<int> space(original.size());

    // The first element will be the same as the original vetor .
    if(!original.empty()){
        space[0] = original[0];
    }

    for(int i = 1;i<original.size();++i){
        // The ith element will be the sum of the ith element and the previous element.
        space[i] = original[i] + space[i-1];
    }
    // Print the elements of the original vector
    for (int val : original){
        cout<<val<< " ";
    }
    cout<<"Prefix sum vaue are "<<endl;
    for(int val :space) {
        cout<<val << " ";
    }
// Query handling PART

int start_index,end_index;
cout<<"Enter the start and end index for the query: ";
cin>>start_index>>end_index;
if(start_index<0 || end_index >= space.size()|| start_index >end_index) {
    cout<<"Invalid index range"<<endl;
    return 1;
}
int rangesum;
if(start_index == 0) {
    rangesum = space[end_index];
} else {
    rangesum = space[end_index] - space[start_index - 1];

} 
cout<<"The sum of the range from index "<<start_index<<" to "<<end_index<<" is: "<<rangesum<<endl;
}
// Comulative calculation means that where each step builds upon the result of the previous step .
// The key idea is that sum of the  range of elements from index i to j in the original array can be found in constant time (O(1)) using the prefix sum array.