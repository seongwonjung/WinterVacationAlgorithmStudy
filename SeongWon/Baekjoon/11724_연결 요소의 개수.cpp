#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> graph;
vector<bool> vst;
void DFS(int v){
    vst[v] = true;
    int len = graph[v].size();
    for(int i = 0; i < len; i++){
        int next = graph[v][i];
        if(!vst[next]){
            DFS(next);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, a, b, cnt = 0;
    cin >> n >> m;
    graph.assign(n+1, vector<int>(0));
    vst.assign(n+1, false);
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        if(!vst[i]){
            DFS(i);
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}