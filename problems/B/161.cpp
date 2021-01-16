#include <iostream>
#include <vector>
using namespace std;

int main(){
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for(int i = 0; i<N; ++i) cin >> A[i];

  int total = 0;
  for(int i=0; i<N; ++i)  total += A[i];
  
  int can = 0;
  for(int i=0; i<N; ++i) {
    if(A[i] * 4 * M >= total ) ++can;
  }
  
  if(can >= M) cout << "Yes" << endl;
  else cout << "No" << endl;

}