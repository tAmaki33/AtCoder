#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  long long x;
  cin >> n >> x;
  vector<long long> v(n);
  vector<long long> p(n);
  for(int i=0;i<n;++i) cin >> v[i] >> p[i];

  long long sum = 0;
  for(int i=0;i<n;++i) {
    sum += v[i] * p[i];
    if(sum > x*100) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}