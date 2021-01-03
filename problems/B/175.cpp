#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long> L(N);
  for(int i=0;i<N;++i) cin >> L[i];

  int ans = 0;

  // 1 < i < j < k < N
  for(int i =0; i<N-2; ++i){
    for(int j = i+1;j<N-1;++j){
      for(int k = j+1;k<N;++k){
        // L[i] L[j] L[k] はすべて長さが異なる
        if(L[i] == L[j] || L[i] == L[k] || L[j] == L[k] ) continue;
        // 三角形の成立条件
        if(abs(L[j] - L[k]) < L[i] && (L[j] + L[k]) > L[i]) ++ans;
      }
    }
  }
  cout << ans << endl;
}