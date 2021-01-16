#include <iostream>
#include <math.h>
using namespace std;

int main(){
  long long X;
  cin >> X;
  
  int res = 0;
  long x = 100;
  while(x < X) {
    x += x/100;
    res++;
  }

  cout << res << endl;
}