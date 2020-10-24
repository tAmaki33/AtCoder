#include <iostream>
#include <string>
using namespace std;

int main(){
  long N;
  cin >> N;

  long A,B;
  bool isExist = false;

  long a=1;
  long b;
  A=3;

  while(A<N) {
    b=1;
    B=5;
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