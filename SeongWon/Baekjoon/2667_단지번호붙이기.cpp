#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
int n, cnt;
vector<vector<int>> map;
vector<int> cnts;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void DFS(int x, int y)
{
    map[y][x] = 0;  //방문처리
    cnt++;
    for(int i = 0; i < 4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0 || ny<0 || nx>=n || ny>=n)  continue;
        if(map[ny][nx] == 1){
            DFS(nx,ny);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++){
        vector<int> tmp;
        string s;
        cin >> s;
        for(auto c : s){
            tmp.push_back(c-'0');
        }
        map.push_back(tmp);
    }
    
    for(int y = 0; y < n; y++){
        for(int x = 0; x < n; x++){
            cnt = 0;
            if(map[y][x] == 1){
                DFS(x, y);
                cnts.push_back(cnt);
            }
        }
    }
    sort(cnts.begin(), cnts.end());
    cout << cnts.size() << '\n';
    for(auto i : cnts)
        cout << i << '\n';
    return 0;
}