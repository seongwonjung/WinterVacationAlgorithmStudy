#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> Graph;
vector<bool> visited;
void DFS(int r){
    visited[r] = true;  //방문 처리
    cout << r << '\n';
    int x;
    for(int i = 0; i < Graph[r].size(); i++){
        x = Graph[r][i];
        if(!visited[x]){    //방문하지 않은 노드 DFS재귀 호출
            DFS(x);
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
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        Graph[a].emplace_back(b);
        Graph[b].push_back(a);
    }
    for(auto &arr : Graph){
        sort(arr.begin(), arr.end());
    }
    DFS(r);
    if(find(visited.begin(), visited.end(), false) != visited.end()){
        cout << "0";
    }
    // for(auto a : Graph){
    //     for(auto b : a){
    //         cout << "b" << " ";
    //     }
    // }
    return 0;
}