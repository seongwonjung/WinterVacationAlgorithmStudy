#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;   //돋도 못한 사람 n, 보도 못한 사람 m
    string s;
    map<string, int> lst;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> s;
        lst[s]++;
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        lst[s]++;
    }
    int cnt = 0;
    for(auto i : lst){
        if(i.second >= 2)
            cnt++;
    }
    cout << cnt << '\n';
    // map은 key를 기준으로 자동으로 오름차순으로 정렬 되기 때문에 그대로 출력하면 된다.
    for(auto i : lst){
        if(i.second >= 2)
        cout << i.first << '\n';
    }
    return 0;
}