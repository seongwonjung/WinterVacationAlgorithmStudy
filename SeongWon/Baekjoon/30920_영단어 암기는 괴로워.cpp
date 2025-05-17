#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool cmp(pair<string,int>& a, pair<string,int>& b) {
    if (a.second != b.second) 
        return a.second > b.second;
    if (a.first.size() != b.first.size()) 
        return a.first.size() > b.first.size();
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    string s;
    map<string, int, greater<string>> Map;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (m > s.size())
            continue;
        Map[s]++;
    }
    vector<pair<string, int>> v(Map.begin(), Map.end());
    sort(v.begin(), v.end(), cmp);
    for (auto p : v)
    {
        cout << p.first << '\n';
    }

    return 0;
}