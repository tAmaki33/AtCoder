#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> a(n);
  for(int i=0; i<n;++i) cin >> a[i];

  vector<long long> b(n);
  copy(a.begin(), a.end(), b.begin());
  
  long long ans = 0;
  for(int i=1;i<n;++i){
    if(b[i-1] > a[i]) {
      long long diff = b[i-1] - a[i];
      ans += diff;
      b[i] += diff;
    }
  }
  cout << ans << endl;
}