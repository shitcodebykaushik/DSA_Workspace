#include <iostream>
using namespace std;
void pattern1 (){
    for(int i =0;i<4;i++){ // row declaration i guees
    for(int j=0;j<4;j++){ // printing to the column
        cout<<" * " ;
    }
    cout<<"2"<<endl;

}
};
void pattern2 () {
  for(int i =0;i<3;i++){
    for(int j=0;j<=i;j++){
        cout<<" * " ;
    }
  cout<<" "<<endl;
}
}
void pattern3 () {   // this function behave unecpectedly .
    for(int i =0;i<3;i++){
        for(int j=0;j<=i;i++){
            cout<<i+1;
        }
        cout<<" "<<endl;
    }
};
void pattern4 ( ) {
    for(int i =0;i<3;){
        for(int j=0;j<=3;j++){
            cout<<j+1;
        }
     
    }
       cout<<" "<<endl;
}






int main () {
    pattern4 ();
}