#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector<int> arr(n+1, 0);
void BackTracking(int depth){
    if(depth == m){ // 종료 조건
        for(int i = 1; i <= m; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    for(int i = 1; i <= n; i++){
        arr[depth] = i;
        BackTracking(depth+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    BackTracking(0);
    return 0;
}