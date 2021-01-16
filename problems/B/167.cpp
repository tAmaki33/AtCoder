#include <iostream>
using namespace std;

int main(){
  long A, B, C, K;
  cin >> A >> B >> C >> K;

  int ans;
  if(K < A) { 
    ans = K;
  } else {
    ans = A;
    int c =K -(A+B);
    if(c > 0) ans -= c; 
  }
  cout << ans << endl;
}