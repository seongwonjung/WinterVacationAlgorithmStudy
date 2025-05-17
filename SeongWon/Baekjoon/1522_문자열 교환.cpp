#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    string ss = s+s;
    int a = 0, min = 1001;
    for(auto i : s){
        if(i == 'a')
            a++;
    }
    for(int i = 0; i <= s.size()+a; i++){
        int b = 0;
        string win = ss.substr(i, a);
        for(auto c : win){
            if(c == 'b')
                b++;
        }
        if(min > b) min = b; 
    }
    cout << min;
    return 0;
}