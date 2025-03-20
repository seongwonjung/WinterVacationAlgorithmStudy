#include <iostream>
#include <string>
using namespace std;
int main(){
    int i;
    string s;
    cin >> s >> i;
    cout << s[i-1];	//마지막 문자 출력
    return 0;
}