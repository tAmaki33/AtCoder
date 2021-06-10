#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <bitset>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = 0;
  for(int i=0;i<1000;++i) {
    string t = to_string(i);
    int z = 3-t.length();
    for(int j=0;j<z;++j) {
      t = "0"+t;
    }
    
    int p = 0;
    for(int k=0;k<n;++k) {
      if(t[p] == s[k]) ++p;
      if(p==3) {
        ++ans;
        break;
      }
    }
  }
  cout << ans << endl;
}