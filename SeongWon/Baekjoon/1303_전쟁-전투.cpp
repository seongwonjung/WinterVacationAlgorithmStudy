#include <iostream>
#include <vector>
using namespace std;
vector<vector<char>> board;
vector<vector<bool>> vst;
vector<int> W;
vector<int> B;
int cnt = 0;
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,-1,1};
void DFS(int x, int y, char c){
    vst[y][x] = true;
    cnt++;
    int nx = x, ny = y;
    for(int i = 0; i < 4; i++){
        nx = x + dx[i];
        ny = y + dy[i];
        if(nx < 0 || nx >= board[0].size() || ny < 0 || ny >= board.size()){
            continue;
        }
        if(!vst[ny][nx] && board[ny][nx]==c){
            DFS(nx, ny, c);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m; // 가로 크기 n, 세로 크기 m
    board.assign(m, vector<char>(n));
    vst.assign(m, vector<bool>(n));
    for(int y = 0; y < m; y++){
        for(int x = 0; x < n; x++){
            cin >> board[y][x];
        }
    }

    for(int y = 0; y < m; y++){
        for(int x = 0; x < n; x++){
            if(!vst[y][x]){
                DFS(x, y, board[y][x]);
                if(board[y][x] == 'W'){
                    W.push_back(cnt);
                }else{
                    B.push_back(cnt);
                }
                cnt = 0;
            }
        }
    }
    int W_rst = 0, B_rst = 0;
    for(auto i : W){
        W_rst += i*i;
    }
    for(auto i : B){
        B_rst += i*i;
    }
    cout << W_rst << " " << B_rst;
    return 0;
}