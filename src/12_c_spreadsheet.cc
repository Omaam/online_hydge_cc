#include<iostream>
using namespace std;

int main(){
  int r, c;
  cin >> r >> c;

  int sheet[r+1][c+1] = {{0}};
  for (int i = 0; i < r; i++) {
    int sum = 0;
    for (int j = 0; j < c+1; j++) {
      if (j != c) {
        cin >> sheet[i][j];
        sum += sheet[i][j];
        sheet[r][j] += sheet[i][j];
        sheet[r][c] += sheet[i][j];
      }
      else sheet[i][j] = sum;
    }
  }

  for (int i = 0; i < r+1; i++) {
    for (int j = 0; j < c+1; j++) {
      cout << sheet[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
