#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> X(N);
  vector<int> Y(N);
  
  for(int i=0;i<N;++i) cin >> X.at(i) >> Y.at(i);
  bool isExist = false;
  for(int bit=0;bit < (1 << N); ++bit) {
    vector<int> S;
    for(int i=0;i<N;++i){
      if(bit & (1<<i)) {
        S.push_back(i);
      }
    }
    if(S.size() == 3){
      cout << S[0] << "," << S[1] << "," << S[2] << endl;
      if(X[S[1]]-X[S[0]] == 0) {
        if(Y[S[2]] == Y[S[0]]) isExist = true;
      } else {
        if(Y.at(S[2] == (Y[S[1]]-Y[S[0]]) * (X[S[2]]-X[S[0]]) / (X[S[1]]-X[S[0]]))) {
          isExist = true;
          break;
        }
      }
    }
    if(isExist) break;
  }

  
  
  string ans = isExist ? "Yes" : "No";
  cout << ans << endl;
}