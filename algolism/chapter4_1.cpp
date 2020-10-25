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


vector<long long> memo;
long long fibo(int n){
  if(n==0) return memo[0] = 0;
  else if(n==1) return memo[1] = 1;

  // メモをチェック
  if(memo[n] != -1) return memo[n];
  // memoを更新しながら、呼び出し
  return memo[n] = fibo(n-1)+fibo(n-2);
}

int main() {
  int N;
  cin >> N;
  memo.assign(N,-1);
  fibo(N-1);
  for(int i=0;i<N;++i){
    cout << i << "項目: " << memo[i] << endl;
  }
}