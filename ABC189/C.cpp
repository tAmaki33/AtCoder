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
  for(int i=0;i<n;++i) cin >> a[i];
  int ans = 0;
  // l番目を決める
  for(int l=0;l<n;++l) {
    // r番目を決める
    int eat = a[l];
    // 1皿だけ食べるケーす
    ans = max(ans, a[l]);
    for(int r=l+1;r<n;++r) {
      // 食べる個数を決める
      eat = min(eat, a[r]);
      ans = max(ans, eat*(r-l+1));
    };
  }
  cout << ans << endl;
}