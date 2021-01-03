#include <iostream>
#include <string>
using namespace std;

int main(){
  string S,T;
  cin >> S >> T;
  
  // 十分大きい値 -> Tの文字数
  int ans = T.size();

  // Sの何文字目から調べるか
  for(int start=0;start<=S.size()-T.size();++start){
    int diff = 0;
    for(int i =0; i<T.size();++i){
      // Sの検索開始位置からi文字目が、Tのi文字目と一致するか判定
      if(T[i] != S[start +i]) ++diff;
    }
    // 不一致数(=書き換える文字の数)を更新
    ans = min(ans, diff);
  }
  cout << ans << endl;
}