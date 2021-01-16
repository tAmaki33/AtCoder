#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<long long> A(pow(2, n));
  for(long long i = 0; i<pow(2, n); ++i) cin >> A[i];

  long long s = A.size();
  long long winner1 = -1, winner2 = -1;
  for(long long i = 0; i < s/2; ++i) winner1 = max(A[i], winner1);
  for(long long i = s/2; i < s; ++i) winner2 = max(A[i], winner2);

  long long res = min(winner1, winner2);
  for(int i =0; i<A.size(); ++i) {
    if(res == A[i]) cout << i +1 << endl;
  }
}