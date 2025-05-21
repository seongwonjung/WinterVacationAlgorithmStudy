#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> graph;
vector<vector<bool>> vst;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
int DFS(int x, int y){
    vst[y][x] = true;
    int cnt = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 1 || nx >= graph[0].size() || ny < 1 || ny >= graph.size()){
            continue;
        }
        if(!vst[ny][nx]&&graph[ny][nx]=='#'){
            cnt += DFS(nx, ny);
        }
    }
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, k, max = 0;    // n =  세로 길이, m = 가로 길이, k = 음식물의 개수
    cin >> n >> m >> k;
    graph.assign(n+1, vector<char>(m+1,'.'));
    vst.assign(n+1, vector<bool>(m+1, false));
    for(int i = 0; i < k; i++){
        int y, x;
        cin >> y >> x;
        graph[y][x] = '#';
    }
    
    for(int y = 1; y <= n; y++){
        for(int x = 1; x <= m; x++){
            if(!vst[y][x] && graph[y][x]=='#'){
                int cnt = DFS(x,y);
                if(max < cnt){
                    max = cnt;
                }
            }
        }
    }
    cout << max;
    return 0;
}