#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void cantoer(string &s, int start, int len){
    if(len == 1)
        return;
    int l_end = len/3;
    for(int i = start + l_end; i < start + 2 * l_end; i++){
        s[i] = ' ';
    }
    cantoer(s, start, l_end);
    cantoer(s, start + l_end*2, l_end);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    while(cin >> n){
        if(n == 0){
            cout << "-\n";
            continue;
        }
        int len = pow(3,n);
        string s(len,'-');
        cantoer(s, 0, len);
        cout << s << '\n';
    }

    return 0;
}