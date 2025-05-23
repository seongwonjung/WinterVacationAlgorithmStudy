#include <iostream>
#include <vector>
using namespace std;
vector<int> arr(9);
vector<bool> vst(9, false);
int n, m;
void backtraking(int num, int depth){
    if(depth == m){ // 종료 조건
        for(int i = 0; i < depth; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    for(int i = num; i <= n; i++){
        if(!vst[i]){
            vst[i] = true;
            arr[depth] = i;
            backtraking(i+1, depth+1);
            vst[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    backtraking(1, 0);
    return 0;
}