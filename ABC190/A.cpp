#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a < b) {
    cout << "Aoki" << endl;
  } else if(a > b) {
    cout << "Takahashi" << endl;
  } else {
    if(c<1) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
}
