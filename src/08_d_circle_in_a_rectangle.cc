#include<iostream>
using namespace std;

int main(){

  int w, h, x, y, r;
  cin >> w >> h >> x >> y >> r;

  bool flag = false;
  if (((x - r) >= 0) && ((x + r) > w)) flag = true;
  if (((y - r) >= 0) && ((y + r) > h)) flag = true;

  if (flag) cout << "No" <<  endl;
  else      cout << "Yes" << endl;

  return 0;
}
