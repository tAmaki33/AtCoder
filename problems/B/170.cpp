#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int X,Y;
  cin >> X >> Y;

  bool isExist = false;
  // 鶴の数 i , 亀の数 X-i
  for(int i=0;i<X+1;++i){
    if((i*2 + (X-i)*4) == Y) {
      isExist = true;
      break;
    }
  }

  if(isExist) cout << "Yes" << endl;
  else cout << "No" << endl;
}