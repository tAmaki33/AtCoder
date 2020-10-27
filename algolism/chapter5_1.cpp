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

// 緩和処理
// dp[3]<-∞として初期化
// chmin(dp[3],dp[2]+1)
// chmin(dp[3],dp[1]+4)
// 頂点uから頂点vへの遷移コストをcとした時、 chimin(dp[v],dp[u]+c)
template<class T> void chmin(T& a, T b){
  if(a>b) a=b;
}

const long long INF = 1LL << 60; // 十分大きい値（2^60）

// 「緩和」を意識した動的計画法で解く
int main(){
  int N;
  cin >> N;
  vector<long long> h(N);
  for(int i=0;i<N;++i) cin >> h[i];
  // dp（無限大を表す値に初期化）
  vector<long long>dp(N,INF);

  dp[0]=0;
  
  for(int i=1;i<N;++i){
    chmin(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
    if(i>1) {
      chmin(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }
  }

  cout << dp[N-1] << endl;
}