#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;++i) cin>>A[i];

  int maxGCD=0;
  int maxK=2;
  for(int k=2;k<=1000;++k){
    int gcd = 0;
    for(int i=0;i<N;++i) {
      if(A[i]%k==0) ++gcd;
    }
    if(maxGCD<=gcd) maxK = max(maxK,k);
    maxGCD = max(maxGCD,gcd);
  }
  cout << maxK << endl;
}