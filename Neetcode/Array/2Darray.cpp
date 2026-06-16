#include<bits/stdc++.h>
using namespace std;
int main () {
	int ap[4][3];
	// Input done
	// Here we are taking the row wise input . i.e i is acting as row 
	for(int i =0;i<4;i++){
		for (int j =0;j<3;j++){
			cin>>ap[i][j];
		}
	}
  // Task is to take the input as the column wise .
	// Printing the 2-D array .
	for(int i =0;i<4;i++){
		for (int j =0;j<3;j++){
			cout<<ap[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}