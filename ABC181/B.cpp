#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);
  
  for(int i=0;i<N;++i) cin >> A.at(i) >> B.at(i);
  long sum = 0;

  for(int i=0;i<N;++i){
    long n = B.at(i)-A.at(i)+1;
    sum += n*(A.at(i)+B.at(i))/2;
  }
  
  cout << sum << endl; 
}