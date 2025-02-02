#include <iostream>
#include <vector>
#include <string>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i <= t.size()-p.size(); i++){
        string s = "";
        for(int j = i; j < i+p.size(); j++){
            s += t[j];
        }
        cout << s << endl;
        if(s<=p)
            answer++;
    }
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout << solution("10203", "15");
    return 0;
}