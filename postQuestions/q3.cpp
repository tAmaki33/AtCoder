#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*
黒板に 
N個の正の整数 
A1,...,AN が書かれています．

すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．

黒板に書かれている整数すべてを，2で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．
*/

int main() {
	int N;
	int cnt;
	int flag;
	cin >> N;
	vector<int> vec(N);

	for(int i=0;i<N;i++) {
		cin >> vec[N];
	}
	
	cnt=0;
	while(true) {
		flag  = 1;
		for(int i=0;i<N;i++){
			if(vec.at(i)%2==0){
				vec.at(i)/=2;
				flag++;
			}
		}
		
		if(flag == N) {
			cnt++;
		} else {
			break;
		}
	}
	cout << cnt << endl;
}