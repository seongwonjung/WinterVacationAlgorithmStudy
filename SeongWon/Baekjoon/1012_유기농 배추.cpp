#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> farm;
vector<vector<bool>> vst;
int t, m, n, k, cnt;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void DFS(int x, int y){
    vst[y][x] = true;
    for(int i = 0; i < 4; i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx >= m || ny >= n || nx < 0 || ny < 0)  continue;
        if(!vst[ny][nx] && farm[ny][nx] == 1)
            DFS(nx,ny);
    }
}

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> m >> n >> k;
        vst.assign(n, vector<bool>(m, false));
        farm.assign(n, vector<int>(m, 0));
        
        for(int j = 0; j < k; j++){
            int x, y;
            cin >> x >> y;
            farm[y][x] = 1;
        }
        cnt = 0;
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                if(farm[y][x] == 1 && !vst[y][x]){
                    DFS(x, y);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}