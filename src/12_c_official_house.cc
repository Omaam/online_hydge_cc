#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;

  int dorm[4][3][10];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        dorm[i][j][k] = 0;
      }
    }
  }

  int b, f, r, v;
  for (int m = 0; m < n; m++) {
    cin >> b >> f >> r >> v;
    dorm[b-1][f-1][r-1] += v;
  }


  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << dorm[i][j][k];
        if (k != 10) cout << " ";
      }
      cout << endl;
    }
    if (i != 3) {
      cout << "####################" << endl;
    }
  }

  return 0;
}
