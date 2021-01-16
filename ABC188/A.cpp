#include <iostream>
using namespace std;

int main(){
  int x, y;
  cin >> x >> y;
  int diff = abs(x-y);
  if(diff < 3) cout << "Yes" << endl;
  else cout << "No" << endl;
}