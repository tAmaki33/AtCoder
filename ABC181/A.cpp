#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <math.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  string ans;
  ans = N%2 == 0 ? "White" : "Black";
  cout << ans << endl;
}