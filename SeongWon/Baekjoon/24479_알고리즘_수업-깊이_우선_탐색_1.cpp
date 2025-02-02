#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> Graph;
vector<bool> visited;
vector<int> orders;
void DFS(int r, int &order){
    visited[r] = true;  //방문 처리
    orders[r] = order;
    order++;
    int x;
    for(size_t i = 0; i < Graph[r].size(); i++){
        x = Graph[r][i];
        if(!visited[x]){    //방문하지 않은 노드 DFS재귀 호출
            DFS(x, order);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, r;
    cin >> n >> m >> r;
    Graph.assign(n+1, vector<int> (0,0));
    visited.assign(n+1, false);
    orders.assign(n+1, false);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        Graph[a].emplace_back(b);
        Graph[b].emplace_back(a);
    }
    for(auto &arr : Graph){
        sort(arr.begin(), arr.end());
    }
    int order = 1;
    DFS(r, order);
    for(size_t i = 1; i <= n; i++){
        cout << orders[i] << "\n";
    }
    
    return 0;
}