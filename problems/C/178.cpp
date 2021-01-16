#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

const long long mod = 1000000007;

int main(){
  long long N;
  cin >> N;
  
  // 全組み合わせ
  long long all = 1;
  for(long long i=0;i<N;++i) all = (all*10)%mod;

  // 0を含まない
  long long notinc0 = 1;
  for(long long i=0;i<N;++i) notinc0 = (notinc0*9)%mod;

  // 9を含まない
  long long notinc9 = 1;
  for(long long i=0;i<N;++i) notinc9 = (notinc9*9)%mod;
  
  // 0と9を含まない
  long long notinc0and9 = 1;
  for(long long i=0;i<N;++i) notinc0and9 = (notinc0and9*8)%mod;


  long long ans = all -(notinc0 +notinc9 - notinc0and9);
  ans %= mod;

  cout << (ans+mod)%mod << endl;
}