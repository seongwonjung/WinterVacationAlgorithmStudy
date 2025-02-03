#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<int, int> Map;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        Map[num]++;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> num;
        if(Map[num] != 0)   cout << Map[num] << " ";
        else    cout << "0 ";
    }
    return 0;
}