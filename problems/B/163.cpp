#include <iostream>
#include <vector>
using namespace std;

int main(){
  long N, M;
  cin >> N >> M;
  vector<int> A(M);
  for(int i = 0; i<M; ++i) cin >> A[i];

  int work = 0;
  for(int i=0; i<M;++i) work += A[i];

  if(N-work < 0) cout << -1 << endl;
  else cout <<  N-work << endl;
}