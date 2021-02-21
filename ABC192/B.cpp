#include <iostream>
#include <string>
using namespace std;

int main(){
  string S, ans;
  cin >> S;
  ans = "Yes";
  for(int i=0;i<S.length();++i){
    if(i%2 ==0){
      if(isupper(S[i])) {
        ans = "No"; // 奇数大文字
        break;
      }
    } else {
      if(!isupper(S[i])){
        ans = "No"; // 偶数小文字
        break;
      }
    }
  }
  cout << ans << endl;
}