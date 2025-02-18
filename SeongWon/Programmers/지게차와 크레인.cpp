#include <string>
#include <vector>
#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;   // 세로, 가로 길이
vector<vector<bool>> aces;

bool dfs(int x, int y, vector<vector<bool>> &visited, vector<string> &storage) {
    if(aces[y][x]) return true; // 이미 외부 연결이 확인된 경우
    visited[y][x] = true;
    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx < 0 || nx >= m || ny < 0 || ny >= n){  // 경계 도달 → 외부 연결
            aces[y][x] = true;
            return true;
        }
        // 인접 셀이 빈 칸이고 아직 현재 DFS 경로에서 방문하지 않았다면 재귀 탐색
        else if(storage[ny][nx] == '0' && !visited[ny][nx]){
            if(dfs(nx, ny, visited, storage)){
                aces[y][x] = true;
                return true;
            }
        }
    }
    return false;
}

bool isAccessible(vector<string> &storage, int x, int y) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    return dfs(x, y, visited, storage);
}

void takeout(vector<string> &storage, char c, string s){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            isAccessible(storage, j, i);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(storage[i][j] == c){
                if(s == "fork"){    //지게차
                    if(aces[i][j]){
                        storage[i][j] = '0';
                    }
                } else {  //크레인
                    storage[i][j] = '0';
                }
            }
        }
    }
}

int solution(vector<string> storage, vector<string> requests) {
    int answer = 0;
    n = storage.size();      // 세로 길이
    m = storage[0].size();   // 가로 길이
    aces.assign(n, vector<bool>(m, false));
    
    // 테두리 부분 초기화
    for(int i = 0; i < n; i++){
        aces[i][0] = true;
        aces[i][m-1] = true;
    }
    for(int j = 0; j < m; j++){
        aces[0][j] = true;
        aces[n-1][j] = true;
    }
    
    for(auto req : requests){
        if(req.size() == 1)     // 지게차
            takeout(storage, req[0], "fork");
        else                    // 크레인
            takeout(storage, req[0], "crane");
    }
    for(auto row : storage){
        for(auto c : row){
            cout << c << " ";
            if(c != '0')
                answer++;
        }
        cout << '\n';
    }
    return answer;
}

int main(){
    vector<string> storage = {"AZWQY", "CAABX", "BBDDA", "ACACA"};
    vector<string> requests = {"A", "BB", "A"};
    cout << solution(storage, requests);
    return 0;
}