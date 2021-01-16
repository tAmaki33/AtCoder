#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<long long> A(N);
  for(int i=0; i<N;++i) cin >> A[i];

  // 0が含まれれば出力して終了
  for(int i =0; i<N; ++i) {
    if(A[i] == 0) {
      cout << 0 << endl;
      return 0;
    }
  }

  long long chk = pow(10, 18);
  long long p = 1;
  for(int i=0;i<N;++i){
    // p*A[i] <= pow(10,18) と等価
    if(A[i] <=  chk/p){
      p *= A[i];
    } else {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << p << endl;
}