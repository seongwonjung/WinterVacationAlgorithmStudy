#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<vector<int>> Graph;
vector<bool> visited;


void DFS(int v){
    visited[v] = true;
    cout << v << " ";
    int x;
    for(size_t i = 0; i < Graph[v].size(); i++){
        x = Graph[v][i];
        if(!visited[x])
            DFS(x);
    }
}

void BFS(int v){
    queue<int> q;
    q.push(v);
    while(!q.empty()){
        if(!visited[v])
        cout << v << " ";
        visited[v] = true;
        int x;
        for(size_t i = 0; i < Graph[v].size(); i++){
            x = Graph[v][i];
            if(!visited[x]){
                q.push(x);
            }
        }
        v = q.front();
        q.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, start_v;
    cin >> n >> m >> start_v;
    Graph.assign(n+1, vector<int>(0,0));
    visited.assign(n+1, false);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        Graph[a].push_back(b);
        Graph[b].push_back(a);
    }
    for(auto &v : Graph){
        sort(v.begin(), v.end());
    }

    DFS(start_v);
    cout << '\n';
    visited.assign(n+1, false);
    BFS(start_v);
    return 0;
}