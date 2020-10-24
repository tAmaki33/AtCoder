#include <iostream>
#include <string>
using namespace std;

int main(){
  long N;
  cin >> N;

  long long A,B;
  bool isExist = false;

  long a=0;
  long b;
  A=1;

  while(A<N) {
    b=0;
    B=1;
    while(B<N){
      if(A+B==N) {
        isExist=true;
        break;
      }
      B*=5;
      b++;
    }
    if(isExist) break;
    A*=3;
    a++;
  }

  if(isExist) cout << a << " " << b << endl;
  else cout << -1 << endl;
}