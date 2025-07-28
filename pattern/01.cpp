#include <bits/stdc++.h>
using namespace std;
void func1 (int n1,int n2){
for(int i =0;i<n1;i++){
    for(int j=0;j<n2;j++){
        cout<<" * "<< " ";
    }
    cout<<endl;
}
}

void func2 (int n1){
   for(int i =0;i<n1;i++){
    for(int j=0;j<=i;j++){
        cout<<" * ";
    }
    cout<<endl;
   }
    }

void func3 (int n1){
    for(int i=0;i<n1;i++){
        for(int j=0;j<=i+1;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void func4 (int n1){
    for(int i =0;i<n1;i++){
        for(int j=0;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void func5 (int n1){
    for(int i=0;i<n1;i++){
        for(int j=0;j<=n1-i+1;j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
}




int main () {
    func5(3);
    return 0;

}
