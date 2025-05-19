#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
using namespace std;
vector<int> alphabet(26,0); // 알파벳의 개수를 담을 벡터
// 0 = A, 1 = B, 2 = C ...
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    for(auto c : s){
        alphabet[c-'A']++; // 알파벳의 개수를 넣어줌
    }
    int odd_cnt = 0;
    for(auto num : alphabet){
        if(num%2 != 0){
            odd_cnt++;
        }
    }
    if(odd_cnt > 1){
        cout << "I'm Sorry Hansoo";
        return 0;
    }
    
    char center = 'A'-1;
    string half;
    for(int i = 0; i < 26; i++){
        if(alphabet[i]%2 != 0){
            center = 'A'+ i;
            alphabet[i]--;
        }
        while(alphabet[i]){
            half += i + 'A';
            alphabet[i] -= 2;
        }
    }
    string rst = half;
    if(center >= 'A')
        rst += center;
    reverse(half.begin(), half.end());
    rst += half;
    cout << rst;
    
    return 0;
}