#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
pair<int,int> start;
vector<vector<bool>> vst;
int dx[4] = {1,0,-1,0}; // 오른쪽, 위, 왼쪽, 아래
int dy[4] = {0,-1,0,1};
vector<vector<int>> cnts;
int BFS(vector<string> board, int x, int y){
    queue<pair<int,int>> q;
    vst[y][x] = true;
    cnts[y][x] = 0;
    q.push({x,y});
    while(!q.empty()){
        pair<int,int> pos = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = pos.first;
            int ny = pos.second;
            while(true){
                if(nx < 0 || nx >= board[0].size() || ny < 0 || ny >= board.size() || board[ny][nx]=='D'){
                    break;
                }
                nx += dx[i];
                ny += dy[i];
            }
            nx -= dx[i];
            ny -= dy[i];
            if(vst[ny][nx]){
                continue;
            }
            vst[ny][nx] = true;
            cnts[ny][nx] = cnts[pos.second][pos.first]+1;
            if(board[ny][nx] == 'G'){
                return cnts[ny][nx];
            }
            q.push({nx,ny});
        }
        // D 혹은 board 벗어나기 직전의 좌표를 push() 한다. push하면서 vst도 true로
    }
    return -1;
}
int solution(vector<string> board) {
    int answer = 0;
    for(int y = 0; y < board.size(); y++){
        for(int x = 0; x < board[0].size(); x++){
            if(board[y][x] == 'R')
                start = {x,y};
        }
    }
    vst.assign(board.size(), vector<bool>(board[0].size(), false));
    cnts.assign(board.size(), vector<int>(board[0].size(),0));
    answer = BFS(board, start.first, start.second);
    return answer;
}
