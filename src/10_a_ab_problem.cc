#include<stdio.h>
using namespace std;

int main(){
  int a, b;
  scanf("%d %d", &a, &b);

  int d = a / b;
  int r = a % b;
  double f = a / (double)b;

  printf("%d %d %lf\n", d, r, f);

  return 0;
}
