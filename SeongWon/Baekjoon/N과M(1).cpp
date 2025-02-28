#include <iostream>
#include <vector>
using namespace std;
int n, m, cnt = 0;
int arr[9];
int visited[9];
void dfs(int cnt){
    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << arr[i] << " ";
        cout << '\n';
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt+1);
            visited[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    dfs(0);

    return 0;
}