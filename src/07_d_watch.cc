#include<iostream>
using namespace std;

int main(){
  int s;
  cin >> s;

  int resid_sec = s;

  int hour = s / 60 /60;
  resid_sec -= hour * 60 * 60;

  int minute = resid_sec / 60;
  resid_sec -= minute * 60;

  int sec = resid_sec;

  cout << hour << ":" << minute << ":" << sec << endl;

  return 0;
}

