#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N,X;
  string S;
  cin >> N >> X >> S;

  for(int i=0;i<S.length();++i){
    if(S[i] == 'o'){
      ++X;
    }else{
      if(X>0){
        --X;
      }
    }
  }
  cout << X << endl;
}