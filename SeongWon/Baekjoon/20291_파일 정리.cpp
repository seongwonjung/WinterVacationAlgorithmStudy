#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    string s;
    map<string, int> m;
    for(int i = 0; i < t; i++){
        cin >> s;
        n = s.size();
        string extension;
        for(int j = 0; j < n; j++){
            if(s[j]== '.'){
                j++;
                while(j < n && s[j]!='\n'){
                    extension+=s[j];
                    j++;
                }
            }
        }
        m[extension]++;
    }
    for(auto p : m){
        cout << p.first << " " << p.second << '\n';
    }
    return 0;
}