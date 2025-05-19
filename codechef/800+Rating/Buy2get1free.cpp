/*Buy 2 Get 1 Free
There is a sale going on in Chefland. For every 2 items Chef pays for, he gets the third item for free (see sample explanations for more clarity).
It is given that the cost of 1 item is X rupees. Find the minimum money required by Chef to buy at least N items.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// qs is to find the minium money required by chef to buy atleast N // // items 
int t,x,n;
cin>>t;
while(t--){
    cin>>n>>x;
    cout<<x*(n-n/3)<<endl;
    
}
}
/* Understatind this concept 
Visual Example:
Suppose n = 9 and x = 10
Total items = 9
For every 3 → 1 free ⇒ n / 3 = 3 free items
Paid items = 9 - 3 = 6
Total cost = 10 * 6 = 60
*/