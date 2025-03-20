#include <iostream>
using namespace std;
int main(){
	//킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
	int cnts[6] = {1,1,2,2,2,8};
	for(int i = 0; i < 6; i++){
		int cnt;
		cin >> cnt;
		cout << cnts[i] - cnt << " ";
	}
	return 0;
}