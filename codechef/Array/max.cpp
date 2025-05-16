#include <iostream>
using namespace std;
#include<vector>

int main() {
	// your code goes here
	int t;  // this is the total test case 
	cin>>t;   // took the input of the test case .
	while(t--){   // will run till the t .
	   int n;     
	   cin>>n;
	   vector<int>y(n);   // declare the size of the n vector 
	   for(int i =0;i<n;i++){   // running the loop to store the value .
		cin>>y[i];
	   }
	   // Once the value is store then we are printing here .
	   cout<<"Value after storing "<<endl;
	   for (int i =0;i<n;i++){
		cout<<y[i]<<" ";
	   }
	   // Finding the maxium element of the vector 
	   int max = y[0];
	   for(int i=0;i<n;i++){
		if(y[i]>max){
			max=y[i];    // the value is getting replaced with 
		}
	   }
	   cout<<"The maxium value is "<<max<<endl;
	}
	return 0;
}