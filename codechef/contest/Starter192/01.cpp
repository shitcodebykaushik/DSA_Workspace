#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int Left,Right;
cin>>Left>>Right;
int need = Left - Right;
int left = (need ^ (need >> 31)) - (need>> 31);
cout << left << endl;

}
