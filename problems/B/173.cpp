#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<string> S(N);
  for(int i=0;i<N;++i) cin >> S[i];

  int ac, wa, tle, re;
  ac = 0;
  wa = 0;
  tle = 0;
  re = 0;

  for(int i=0;i<N;++i){
    if(S[i] == "AC") ++ac;
    if(S[i] == "WA") ++wa;
    if(S[i] == "TLE") ++tle;
    if(S[i] == "RE") ++re;
  }

  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}