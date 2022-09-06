#include<cmath>
#include<iostream>
using namespace std;


int main(){

  double pi = 3.141592653589;

  double r;
  cin >> r;

  double sect = r * r * pi;
  double peri = 2 * r * pi;

  printf("%lf %lf\n", sect, peri);

  return 0;
}
