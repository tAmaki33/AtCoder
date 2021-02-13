#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for(int i=0;i<n;++i) cin >> a[i];

  string ans = "";
  for(int i=0;i<n;++i) {
    if(x != a[i]) {
      if(i>0) {
        ans += " ";
      }
      ans += to_string(a[i]);
    }
  }
  cout << ans << endl;
}