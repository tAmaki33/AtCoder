#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> A(n);
  vector<int> B(n);

  for(int i=0;i<n;++i) cin >> A[i];
  for(int i=0;i<n;++i) cin >> B[i];

  long long ans = 0;
  for(int i=0;i<n;++i){
    ans += A[i] * B[i];
  }
  
  if(ans == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}