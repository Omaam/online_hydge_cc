#include<iostream>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;

  int A[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      A[i][j] = 0;
      cin >> A[i][j];
    }
  }

  int b[m];
  for (int k = 0; k < m; k++) {
    cin >> b[k];
  }

  int sol[n];
  for (int i = 0; i < n; i++) {
    sol[i] = 0;
    for (int j = 0; j < m; j++) {
      sol[i] += A[i][j] * b[j];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << sol[i] << endl;
  }

  return 0;
}
