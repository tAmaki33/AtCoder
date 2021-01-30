#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  long long  n;
  cin >> n;
  // a(n) = a(1) + (n-1)d → a(n) = a(m) +(n-m)d
  // S(n) = (n+a(1))/2 = n(2a(1) + (n-1)d)/2]
  // 自身が初項になるとき
  long long res = 1;
  long long a1 = n-1;
  long long m = 2;
  while((a1+m) > 0){
    if(n*2 == a1+m) {
      
    }
    m++;
    a1--;
  }
}