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

//ユークリッドの互除法で最小値を求める。
int GCD(int m, int n){
  // ベースケース
  if(n==0) return m;
  return GCD(n, m%n);
}

// フィボナッチ数列
int fibo(int n) {
  // 呼び出し確認
  cout << "fibo(" << n << ")を呼び出しました" << endl;
  if(n==0) return 0;
  else if(n==1) return 1;

  return fibo(n-1)+fibo(n-2);
}

// 
vector<long long> memo;
long long fibo2(int n){
  if(n==0) return 0;
  else if(n==1) return 1;

  // メモをチェック
  if(memo[n] != -1) return memo[n];
  //
  return memo[n] = fibo2(n-1)+fibo2(n-2);
}

int main() {
  int m,n;
  cin >> m >> n;
  cout << GCD(m,n) << endl;
  cout << "-------------------------" << endl;
  // fibo(6);

  vector<long long> F(50);
  // フィボナッチ 改善
  F[0] = 0;
  F[1] = 1;
  for(int i=2;i<50;++i){
    F[i] = F[i-1] + F[i-2];
    cout << i << "項目: " << F[i] << endl;
  }
}