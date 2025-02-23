#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin >> t;	//실행횟수 t
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;		//문자열을 입력받고
        cout << s[0] << s[s.size()-1] << '\n';	// s의 첫번쨰 원소와 마지막 원소 출력
    }
    return 0;
}