#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  string N;
  cin >> N;
  
  vector<int> n(N.length());
  for(int i=0;i<N.length();++i) n[i] = N[i]-'0';

  int xk = -1;
  for (int bit = 0; bit < (1<<N.length()); ++bit) {
    int sum=0;
    int cnt=0;
    for(int i=0;i<N.length();++i){
      if(bit & (1<<i)){
        sum+=n[i];
        ++cnt;
      }
    }
    if(sum>0 && sum%3==0) {
      xk = max(xk,cnt);
    }
  }

  if(xk==-1) cout << xk << endl;
  else cout << N.length()-xk << endl;
}