#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  long long N;
  cin >> N;

  int mod500 = N%500;
  // 500の倍数
  if(mod500 == 0) {
    cout << 1000 * (N/500) << endl;
  } else {
    cout << 1000 * (N/500) + 5 * (mod500/5);
  }
}