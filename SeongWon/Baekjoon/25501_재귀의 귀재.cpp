#include <iostream>
#include <vector>
#include <string>
using namespace std;

int recursion(string &s, int l, int r, int &cnt){
    cnt++;
    if(l >= r)  return 1;
    else if(s[l] != s[r])   return 0;
    else return recursion(s, l+1, r-1, cnt);
}

int isPalindrome(string &s, int &cnt){
    return recursion(s, 0, s.size()-1, cnt);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        int cnt = 0;
        cin >> s;
        cout << isPalindrome(s, cnt) << " " << cnt << '\n';
    }
    return 0;
}