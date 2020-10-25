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

// 部分和問題を再帰で解く
bool func(int i, int w, const vector<int> &a){
  // ベースケース
  if(i==0){
    if(w==0) return true;
    else return false;
  }
  // a[i-1]を選ばない場合
  if(func(i-1,w,a)) return true;
  // a[i-1]を選ぶ場合
  if(func(i-1,w-a[i-1], a)) return true;
  // どちらもfalse
  return false;
}

int main() {
  int N,W;
  cin >> N >> W;
  vector<int> a(N);
  for(int i=0;i<N;++i) cin >> a[i];

  if(func(N,W,a)) cout << "yes" << endl;
  else cout << "No" << endl;
}