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

// bit全探索
// N個の要素の集合に、和がWとなる組みわせがあるか判定する
int main() {
  int N,W;
  cin >> N >> W;
  vector<int> a(N);

  for(int i=0;i<N;++i){
    cin >> a.at(i);
  }

  bool exist = false;
  for(int bit=0;bit<(1<<N);++bit){
    int sum = 0;
    for(int i=0;i<N;++i){
      if(bit & (1<<i)){
        sum+=a.at(i);
      }
    }
    if(sum==W) exist = true;
  }
  if(exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}