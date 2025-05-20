#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<vector<char>> board;
vector<vector<bool>> vst;
int n, m; // n = 세로 길이, m = 가로 길이
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};

int BFS(int start_x, int start_y){
    queue<pair<int,int>> q;
    int cnt = 1;
    q.push({start_x, start_y});
    vst[start_y][start_x] = true;
    queue<int> load;
    load.push(cnt);
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int l = load.front();
        load.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || nx >= board[0].size() || ny < 0 || ny >= board.size()){
                continue;
            }   // 1 은 이동 할 수 있는 칸, 0 은 이동 할 수 없는 칸
            if(ny == n-1 && nx == m-1){
                cnt = l+1;
                return cnt;
            }
            if(!vst[ny][nx] && board[ny][nx] == '1'){
                load.push(l+1);
                q.push({nx, ny});
                vst[ny][nx] = true;
            }
        }
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    board.assign(n, vector<char>(m));
    vst.assign(n, vector<bool>(m, false));
    for(int y = 0; y < n; y++){
        for(int x = 0; x < m; x++){
            cin >> board[y][x];
        }
    }

    int rst = BFS(0,0);
    cout << rst;
    return 0;
}