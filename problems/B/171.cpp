#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  vector<int> P(N);
  for(int i=0; i<N; ++i) cin >> P[i];
  
  sort(P.begin(), P.end());
  int ans = 0;
  for(int i=0; i<K; ++i){
    ans += P[i];
  }
  cout << ans << endl;
}