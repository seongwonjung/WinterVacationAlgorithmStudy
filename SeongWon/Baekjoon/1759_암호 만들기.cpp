#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int L, C;
string moums = "aeiou";
vector<char> arr;
vector<bool> vst;
vector<string> rst;
void BackTraking(int depth, int num, string code){
    if(depth == L){  // 종료 조건
        // 최소 한 개의 모음(a, e, i, o, u)과 최소 두 개의 자음
        int moum_cnt = 0;
        for(auto c : code){
            if(moums.find(c)!=string::npos)
                moum_cnt++;
        }
        if(moum_cnt >= 1 && moum_cnt <= L-2){
           cout << code << '\n';
        }
            
    }
    for(int i = num; i <= C; i++){
        if(!vst[i]){
            vst[i] = true;
            BackTraking(depth+1, i+1, code+arr[i]);
            vst[i] = false;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> L >> C; // L = 암호 길이, C = 문자 개수
    arr.assign(C+1, 0);
    vst.assign(C+1, false);
    for(int i = 1; i <= C; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    BackTraking(0, 1, "");
    
    return 0;
}