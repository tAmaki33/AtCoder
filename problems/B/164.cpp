#include <iostream>
using namespace std;

int main(){
  int A, B, C, D;
  // HP:A ATK: B
  // HP:C ATK: D
  cin >> A >> B >> C >> D;

  int Tlose, Alose;

  if(A%D == 0) Tlose = A/D;
  else Tlose = (A/D) + 1;

  if(C%B == 0) Alose = C/B;
  else Alose = (C/B) + 1;

  if(Tlose >= Alose) cout << "Yes" << endl;
  else cout << "No" << endl;

}