// Switch variable shine when we have single variable to compare against multiple distinct value .
#include <iostream>
using namespace std;
int main () {
      int m = 32;
      int b =34;
      switch ( m +b)
      {
      case 64:
      cout<<"The value is 64";
        break;
      case 66:
      cout<<"The value is 66";
      break;
      default:   // This is optional to for the error handling when we have no mathced found .
      cout << "The value not found"<<endl;
        break;
      }
} 