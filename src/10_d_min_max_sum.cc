#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int n;
  cin >> n;

  long long min = 10000000;
  long long max = -10000000;
  long long sum = 0;
  for ( int i = 0; i < n; i++ ){

    int a;
    cin >> a;

    if (a < min) min = a;
    if (a > max) max = a;
    sum += a;
  }

  printf("%d %d %d\n", min, max, sum);

  return 0;
}
