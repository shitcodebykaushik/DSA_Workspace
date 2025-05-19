#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int P,Q,R,S;
	    cin>>P>>Q>>R>>S;
	    if(P>=Q && P>=R && P>=S){
	        int z = Q+R+S;
	        if(P>z){
	            cout<<"YES"<<endl;
	        }else{
                cout<<"NO"<<endl;
            }
        }
        else if (Q>=P && Q>=R && Q>=S){
	            int a = P+S+R;
	            if(Q>a){
	                cout<<"YES"<<endl;
	            }else {
                    cout<<"No"<<endl;
                }
	        }
            else if (R>=P && R>=Q && R>=S ){
	            int c = P+Q+S;
	            if(R>c){
	                cout<<"YES"<<endl;
	            }else {
                    cout<<"NO"<<endl;
                }
	        }
            else if (S>=P && S>=Q && S>=R){
	            int d = P+Q+R;
	            if(S>d){
	                cout<<"YES"<<endl;
	            }else {
                    cout<<"No"<<endl;
                }
	        }
            else {
	        cout<<"No"<<endl;
	    }
	}

}
