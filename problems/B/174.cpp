#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
  int N, D;
  cin >> N >> D;

  vector<vector<double>> C(N, vector<double>(2));
  for(int i=0;i<N;++i) cin >> C[i][0] >> C[i][1];

  int ans = 0;

  for(int i=0;i<N;++i){
    if(D >= sqrt(pow(C[i][0],2) + pow(C[i][1],2))) ++ans;
  }
  cout << ans << endl;
}