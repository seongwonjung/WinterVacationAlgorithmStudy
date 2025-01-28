#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<bool> vst;
void dfs(vector<vector<int>> computers, int v){
    vst[v] = true;  //방문체크
    for(int i = 0; i < computers[v].size(); i++){
        if(computers[v][i] == 1){
            if(!vst[i]) dfs(computers, i);
        }
    }
}
//연결된 모든 컴퓨터들을 순회 하는데 한번이라도 검사한 적 있다면 true로 체크
//연결된 컴퓨터를 DFS에 넣고 또 그 컴퓨터와 연결된 컴퓨터들을 방문하며 체크
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    vst.assign(n, false);
    for(int i = 0; i < computers.size(); i++) {
        for(int j = 0; j < computers[i].size(); j++){
            if(computers[i][j] == 1 && !vst[i]) {
                dfs(computers, i);
                answer++;
            }
        }
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n = 3;
    vector<vector<int>> computers = {{1,1,0},{1,1,1},{0,1,1}};
    int answer = solution(n, computers);
    cout << answer;
    return 0;
}