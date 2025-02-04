#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
map<string, int> poketmon;
string name[100001];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    for(int i = 0 ; i < n; i++){
        cin >> s;
        poketmon[s] = i+1;
        name[i] = s;
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(isdigit(s[0])){     //if(s[0] >= '0' && s[0] <= '9') == isdigit(s[0])    숫자인지 판별은 isdigit()를 이용하면된다. 처음 알았음
            cout << name[stoi(s)-1] << '\n';
        }else{
            cout << poketmon[s] << '\n';
        }
    }
    return 0;
}
/*
이전 코드가 틀린줄 알고 다시 작성했는데 둘 다 로직에서의 시간복잡도 자체는 문제가 없다. 그런데 처음에 위 코드와 밑의 코드 둘 다 cout << endl; 으로 줄바꿈을 해서 틀린것 이었다.
endl를 쓰면 버퍼를 즉시 비우고(flush 라고 함) 동작이 추가되면서 시간초과가 나올 수 있다고 한다. 반복문의 출력은 꼭 '\n'을 쓰는 습관을 들이는 것이 좋다(endl와 달리 버퍼를 즉시 비우지 않고 버퍼가 가득 차거나
프로그램이 종료 될 때 버퍼를 비움) 
map<string, int> a;
map<int, string> b;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    for(int i = 0 ; i < n; i++){
        cin >> s;
        a[s] = i+1;
        b[i+1] = s;
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(s[0] >= '0' && s[0] <= '9'){
            cout << b[stoi(s)] << '\n';
        }else{
            cout << a[s] << '\n';
        }
    }
    return 0;
}
*/