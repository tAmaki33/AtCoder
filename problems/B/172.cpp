#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string S, T;
  cin >> S >> T;

  // 一致しなかった文字列をカウント
  int ans = 0;
  for(int i=0;i<S.size();++i){
    if(S[i] != T[i]) ++ans;
  }
  cout << ans << endl;
}