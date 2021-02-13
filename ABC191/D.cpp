#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  double x, y, r;
  cin >> x >> y >> r;
  
  int start, end, top, bottom;
  start = ceil(x-r); // x軸最小整数値
  end = floor(x+r); // x軸最大整数値

  int ans = 0;
  double p;
  for(int i = start;i<=end;++i) {
    p = sqrt(pow(r,2) - pow(x-(double)i,2));
    bottom = ceil(y-p);
    top = floor(y+p);
    for(int j = bottom; j<=top;++j) ans++;
  }
  cout << ans << endl;
}