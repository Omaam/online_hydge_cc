#include<iostream>
using namespace std;

int main(){
  int n, m, l;
  cin >> n >> m >> l;

  long long A[100][100];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  long long B[100][100];
  for (int j = 0; j < m; j++) {
    for (int k = 0; k < l; k++) {
      cin >> B[j][k];
    }
  }

  long long sol[100][100] = {{0}};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < l; k++) {
        sol[i][k] += A[i][j] * B[j][k];
      }
    }
  }

  // Print
  for (int i = 0; i < n; i++) {
    for (int k = 0; k < l; k++) {
      cout << sol[i][k] << " ";
    }
    cout << endl;
  }

  return 0;
}
