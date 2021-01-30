#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
  int n, s, d;
  cin >> n >> s >> d;
  vector<vector<int>> spellist(n, vector<int>(2));
  for(int i=0;i<n;++i) cin >> spellist[i][0] >> spellist[i][1];

  int hit = 0;
  for(int i=0;i<n;++i) {
    if(spellist[i][0] < s && spellist[i][1] > d) ++hit;
  }

  if(hit > 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}