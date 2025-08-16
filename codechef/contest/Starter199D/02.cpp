#include<bits/stdc++.h>
using namespace std;
int main () {
    int t;
    cin>>t;
    while(t--) {
        int size;
        cin>>size;
        vector<int> A(size);
        for(int i =0;i<size;++i){
            cin>>A[i];
        }
        int max = 0;
        for(int i =1;i<size;i++){
            if(A[i]>A[max]){
                max = i;
            }else if(A[i] == A[max]){
                max = min(max, i);
            }
        }
        cout<<max+1<<endl;

};
}