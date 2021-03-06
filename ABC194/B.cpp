#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0;i<n;++i) cin >> a[i] >> b[i];

  int ab, amin,bmin,amin2,bmin2;
  ab = 200000;
  amin = 100000;
  bmin = 100000;
  amin2 = 100000;
  bmin2 = 100000;
  int emp= -1;
  for(int i=0;i<n;++i) {
    if(a[i]+b[i] < ab) emp = i;
    ab = min(a[i]+b[i], ab);
    amin = min(amin, a[i]);
    bmin = min(bmin, b[i]);
  }
  for(int i=0;i<n;++i) {
    if(i == emp) continue;
    amin2 = min(amin2, a[i]);
    bmin2 = min(bmin2, b[i]);
  }
  if(a[emp]+b[emp] == ab) {
    if(amin+bmin2 > amin2+bmin) amin = amin2;
    else bmin = bmin2;
  }
  cout << min(ab, max(amin, bmin)) << endl;

}