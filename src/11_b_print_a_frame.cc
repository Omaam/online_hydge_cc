#include<iostream>
using namespace std;

int main(){

  while(1){

    int h, w;
    cin >> h >> w;

    if (h == 0 && w == 0) break;

    for ( int i = 0; i < h; i++ ){
      for ( int j = 0; j < w; j ++){
        if (i == 0 || i == h-1) {
          cout << "#";
        } else {
          if (j == 0 || j == w-1) {
            cout << "#";
          } else {
            cout << ".";
          }
        }
      }
      cout << endl;
    }
  }

  return 0;
}
