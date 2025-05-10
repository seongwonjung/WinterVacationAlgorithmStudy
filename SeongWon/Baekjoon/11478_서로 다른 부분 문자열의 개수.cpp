#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> s;
    map<string, bool> m;
    for(size_t i = 1; i <= s.size(); i++){
        for(size_t j = 0; i+j <= s.size(); j++){
            string tmp = s.substr(j,i);
            m[tmp] = true;
        }
    }

    cout << m.size();
    return 0;
}