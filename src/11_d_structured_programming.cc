#include<iostream>
using namespace std;

void print_num(int i, int cnt) {
  if ( cnt == 0 ) cout << i;
  else cout << " " << i;
}

int main() {

  int n;
  cin >> n;

  int cnt = 0;
  for ( int i = 1; i <= n; i++) {

    int x = i;

    if ( x % 3  == 0) {
      print_num(i, cnt);
      cnt += 1;
      continue;
    }

    x /= 10;
    if ( x % 10 == 3 ) {
      print_num(i, cnt);
      cnt += 1;
    }
  }
  cout << endl;

  return 0;
}
