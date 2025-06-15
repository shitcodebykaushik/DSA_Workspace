#include <bits/stdc++.h>
using namespace std;

int main() {

  int m, n, p;
  cin >> m >> n;
  int a[m][n];
  int _n = n;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
       cin >> a[i][j];
    }
  }
  cin >> n >> p;
  assert(_n == n);
  int b[n][p];
  for(int i = 0; i < n; i++){
    for(int j = 0; j < p; j++){
       cin >> b[i][j];
    }
  }
  
  int mul[m][p];

  for(int i = 0; i < m; i++){
    for(int j = 0; j < p; j++){
        mul[i][j] = 0;
        for (int k = 0; k < n; k++) {
            mul[i][j] += a[i][k] * b[k][j];
        }
        cout << mul[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
} 