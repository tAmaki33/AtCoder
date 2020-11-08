#include<iostream>
#include<string>
using namespace std;

/*
【問題】
二つの正整数 aa, bb が与えられます。 aa と bb の積が偶数か奇数か判定してください。
【制約】
・1≤a,b≤100001≤a,b≤10000
・aa, bb は整数
*/

int main() {
	int a,b;
	string r;

	cin >> a >> b;
	
	r = a%2==0 || b%2==0 ? "Even" : "Odd";
	cout << r << endl;
}