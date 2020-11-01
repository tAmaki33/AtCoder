#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
  線分ABの傾きと線分ACの傾きが等しいことを求める。
  (y2-y1) / (x2-x1) = (y3-y1) / (x3 - x1)
  △xが０の場合を考慮し、両辺に(x3 - x1)*(x2-x1) をかける
*/

int main(){
  int N;
  cin >> N;
  vector<int> X(N);
  vector<int> Y(N);
  
  for(int i=0;i<N;++i) cin >> X.at(i) >> Y.at(i);
  bool isExist = false;

  for(int i=0;i<N;++i){
    for(int j=i+1;j<N;++j){
      for(int k=j+1;k<N;++k){
        if((Y[j]-Y[i])*(X[k]-X[i]) == (Y[k]-Y[i])*(X[j]-X[i])) {
          isExist = true;
          break;
        }
      }
      if(isExist) break;
    }
    if(isExist) break;
  }

  string ans = isExist ? "Yes" : "No";
  cout << ans << endl;
}