#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;
const long long INF = 1LL << 60; // 十分大きい値（2^60）

int main(){
  int N;
  cin >> N;
  vector<long long> h(N);
  for(int i=0;i<N;++i) cin >> h[i];
  // dp（無限大を表す値に初期化）
  vector<long long>dp(N,INF);
  
  for(int i=1;i<N;++i){
    if(i==1) dp[i] = abs(h[i] - h[i-1]);
    else dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
  }

  cout << dp[N-1] << endl;
}