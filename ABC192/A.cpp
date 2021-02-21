#include <iostream>
using namespace std;

int main(){
  int x;
  cin >> x;
  int ans;
  ans = 100 - (x%100);
  cout << ans << endl;
}