#include <iostream>
#include <string>	
#include <algorithm>	//reverse 포함
using namespace std;
int main(){
	string original_s, rev_s;
	cin >> original_s;
	rev_s = original_s;
	// reverse(rev_s, rev_s + rev_s.size()); 처음에 배열처럼 생각해서 틀렸음
	reverse(rev_s.begin(), rev_s.end()); //반복자(iterator)	를 이용해야함
	// 또 다른 방법 string rev_s(original_s.rbegin(), original_s.rend()); rbegin(), rend() 반전 반복자를 이용하여 선언과 초기화를 한번에 할 수 있다. 반전반복자 -> ++하면 왼쪽으로 이동한다.
	if(rev_s == original_s)
		cout << "1";
	else
		cout << "0";
	return 0;
}