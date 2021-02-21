#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int N,K;
  cin >> N >> K;
  //g1(x) xの各桁の数字を大きい順にソートした際にできる整数
  //g2(x) xの各桁の数字を小さい順にソートした際にできる整数
  // a(n+1) = f(x) = 
  vector<int>a(K+1);
  a[0] = N;
  for(int i=1;i<=K;++i){
    string g1,g2;
    g1 = to_string(a[i-1]);
    g2 = to_string(a[i-1]);
    sort(g1.begin(), g1.end(), [](char a, char b){
      return a > b;
    });
    sort(g2.begin(), g2.end());
    a[i] = stoi(g1) - stoi(g2);
  }
  cout << a[K] << endl;
}