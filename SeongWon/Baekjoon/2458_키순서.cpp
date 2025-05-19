#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> rev_graph;
int cnt = 0;
void DFS(int v, vector<vector<int>>& graph, vector<bool>& vst){
    vst[v] = true;
    int len = graph[v].size();
    for(int i = 0; i < len; i++){
        int next_node = graph[v][i];
        if(!vst[next_node]){
            cnt++;
            DFS(next_node, graph, vst);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n , m;
    cin >> n >> m;
    vector<vector<int>>graph(n+1, vector<int>(0)); // 
    vector<vector<int>>rev_graph(n+1, vector<int>(0));
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        // 들어오는 노드의 간선 수 + 나가는 간선 수 = n-1 일 때 몇번째 인지 알 수 있음.
        graph[a].push_back(b);  // a -> b
        rev_graph[b].push_back(a);  // b -> a
    }
    int rst = 0;
    for(int i = 1; i <= n; i++){
        vector<bool> vst(n+1, false);
        cnt = 0;
        DFS(i, graph, vst);
        int a = cnt;
        cnt = 0;
        vst.assign(n+1, false);
        DFS(i, rev_graph, vst);
        int b = cnt;
        if(a+b == n-1)
            rst++;
    }
    cout << rst;
    return 0;
}