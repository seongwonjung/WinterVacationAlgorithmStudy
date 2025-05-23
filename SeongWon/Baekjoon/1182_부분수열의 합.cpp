#include <iostream>
#include <vector>
using namespace std;
int n, s, cnt = 0;
vector<int> arr;
vector<bool> vst;
void backtraking(int depth, int sum, int num){
    if(depth > 0 && sum == s){
        // 종료 조건
        cnt++;
    }
    for(int i = num; i <= n; i++){
        if(!vst[i]){
            vst[i] = true;
            backtraking(depth+1, sum+arr[i], i+1);
            vst[i] = false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    arr.assign(n+1, 0);
    vst.assign(n+1, false);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    backtraking(0, 0, 1);
    cout << cnt;
    return 0;
}