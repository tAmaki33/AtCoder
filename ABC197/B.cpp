#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int h,w,x,y;
  cin >> h >> w >> x >> y;
  vector<string> s(h);
  for(int i=0;i<h;i++) cin >> s[i];

  x--;
  y--;

  int W,A,S,D;
  W = 0;
  A=0;
  S=0;
  D=0;
  // 縦カウント
  for(int i=0;i<h;++i) {
    // s[][y]
    if(i <= x) {
      if(s[i][y] == '.' ) W++;
      else W= 0;

    } else {
      if(s[i][y] == '.') S++;
      else break;
    }
  }
  
  // 横
  for(int i=0;i<w;++i) {
    if(i<=y) {
      // s[y][x]
      if(s[x][i] == '.') A++;
      else A=0;
    } else {
      if(s[x][i] == '.') D++;
      else break;
    }
  }
  
  cout << W+A+S+D-1 << endl;
}