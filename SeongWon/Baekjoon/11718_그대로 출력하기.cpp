#include <iostream>
#include <string>
/* 
	공백을 포함한 문자열을 입력 받아서 그대로 출력하는 문제.
 공백을 포함한 문자열을 받는 법을 몰라서 찾아봄 -> 
방법 1. scanf(%c, &c) 로 한문자씩 받으면서 출력하고 c == EOF(입력의 끝을 의미)가 나오면 종료한다.
방법 2. getline(cin, s)를 이용해 한줄씩 s에 넣어서 출력하고 s == "" 이면 종료한다.
방법 2. 로 풀었다.
*/
using namespace std;
int main(){
	string s;
	while(true){
		getline(cin, s);
		if(s == "")	break;
		cout << s << '\n';	
	}
}