#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;
  vector<vector<int>> A(K);
  vector<int> d(K);

  for(int i=0; i<K; ++i){
    // お菓子i を d人持っている
    cin >> d[i];
    vector<int> a(d[i]);
    for(int j = 0; j < d[i]; ++j) {
      cin >> a[j];
    }
    A[i] = a;
  }

  int ans = 0;
  // i人目のス抜くんについて
  for(int i=1; i<=N; ++i){
    bool hasTreat = false;
    // お菓子jの所持者チェック
    for(int j =0; j<K; ++j) {
      for(int n=0; n<A[j].size();++n){
        if(i == A[j][n]) { 
          hasTreat = true;
          break;
        }
      }
      if(hasTreat) break;
    }

    if(!hasTreat) {
      ans++;
    }
  }
  cout << ans << endl;
}