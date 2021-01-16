#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  long long res = 0;
  for(int i=1;i<N+1;++i) {
    if(i % 3 != 0 && i % 5 != 0) res += i;
  }
  cout << res << endl;
}