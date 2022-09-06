#include<iostream>
using namespace std;

int main(){

  int a, b;
  cin >> a >> b;

  int sect = a * b;
  int peri = a + a + b + b;

  cout << sect << " " <<  peri << endl;

  return 0;
}
