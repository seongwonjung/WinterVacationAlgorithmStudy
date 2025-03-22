#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int total = 0;
int dx[4] = {-1,1,-1,1};
int dy[4] = {1,-1,1,-1};
void reround(int x, int y, int n, vector<vector<bool>> &vst){
    int nx = x, ny = y;
    vst[ny][nx] = false;
    for(int i = 0; i < 4; i++){ //대각선 순회
        while(true){
            nx += dx[i];
            ny += dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) break;
            vst[ny][nx] = false;
        }
        nx = x;
        ny = y;
    }
    for(int i = 0; i < n; i++){ //직선 순회
        vst[y][i] = false;
        vst[i][x] = false;
    }
}
void round(int x, int y, int n, vector<vector<bool>> &vst){
    int nx = x, ny = y;
    vst[ny][nx] = true;
    for(int i = 0; i < 4; i++){ //대각선 순회
        while(true){
            nx += dx[i];
            ny += dy[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= n) break;
            vst[ny][nx] = true;
        }
        nx = x;
        ny = y;
    }
    for(int i = 0; i < n; i++){ //직선 순회
        vst[y][i] = true;
        vst[i][x] = true;
    }
}
void back_tracking(int n, vector<vector<bool>> vst, int cnt){
    if(cnt == n){
        total++;
        return;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!vst[i][j]){
                cnt++;
                round(i, j, n, vst);
                back_tracking(n, vst, cnt);
                reround(i, j, n, vst);
            }
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<vector<bool>> vst;
    vst.assign(n, vector<bool>(n, false));
    back_tracking(n, vst, 0);
    cout << total;
    return 0;
}