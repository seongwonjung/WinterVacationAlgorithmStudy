#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> Graph;
vector<bool> visited;
void DFS(int v, int &cnt){
    cnt++;
    visited[v] = true;
    for(int i = 0; i < Graph[v].size(); i++){
        int x = Graph[v][i];
        if(!visited[x])
            DFS(x);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, cnt = 0;
    cin >> n >> m;
    Graph.assign(n+1, vector<int>(0,0));
    visited.assign(n+1, false);
    for(int i = 0; i <  m; i++){
        int a, b;
        cin >> a >> b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
    DFS(1, cnt);
    cout << cnt;
    return 0;
}