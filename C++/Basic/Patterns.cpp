#include <iostream>
using namespace std;

    void pattern (int n) {   
    for (int i = 0; i<n;i ++){
        for (int j =0; j<n;j++) {
        cout<<"*"<<i;
        }
      cout<<endl;
   
    }
}
using namespace std ;
int main () {
 int n =3;
 pattern(n);
 return 0;

}