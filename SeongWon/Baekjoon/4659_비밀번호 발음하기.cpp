#include <iostream>
#include <string>
using namespace std;
char moum[5] = {'a','e','i','o','u'};
bool is_moum(char c){
    for(int i = 0; i < 5; i++){
        if(c == moum[i]){
            return true;
        }
    }
    return false;
}
int main() {
    string s;
    while(true){
        cin >> s;
        if(s == "end") break;
        int m_cnt = 0;
        bool good = true;
        for(int i = 0; i < s.size(); i++){
            if(is_moum(s[i])) m_cnt++; // 모음 개수를 세줌 ( 다 센 후에 0개 일땐 false)
            if(i + 2 < s.size()){
                if(is_moum(s[i])&&is_moum(s[i+1])&&is_moum(s[i+2])){
                    good = false;
                }else if(!is_moum(s[i])&&!is_moum(s[i+1])&&!is_moum(s[i+2])){
                    good = false;
                }
            }
            
            if(i!=0 && s[i]==s[i-1]&&(s[i]!='e'&&s[i]!='o')){ //같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
                good = false;
            }
        }
        if(m_cnt == 0) good = false;
        cout << "<" << s << ">" << (good ? " is acceptable." : " is not acceptable.") << '\n';
    }
    return 0;
}