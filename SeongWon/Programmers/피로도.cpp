#include <iostream>
#include <vector>
using namespace std;
vector<int> cnts;
void BFS(int vlfh, int idx,vector<vector<int>> dungeons, vector<bool> vst, int cnt){
    vector<bool> vst_tmp = vst;
    vst_tmp[idx] = true;
    cnt++;
    cnts.push_back(cnt);
    for(int i = 0; i < dungeons.size(); i++){
        if(!vst_tmp[i]){  //입장하지 않은 던전
            if(vlfh >= dungeons[i][0]){
                BFS(vlfh-dungeons[i][1], i, dungeons, vst_tmp, cnt);
            }
        }
    }
}
int solution(int k, vector<vector<int>> dungeons) {
    vector<bool>vst(dungeons.size(), false);
    for(int i = 0; i < dungeons.size(); i++){
        int cnt = 0;
        if(k >= dungeons[i][0]){
            BFS(k-dungeons[i][1], i,dungeons, vst, cnt);
        }
    }
    int max = 0;
    for(auto i : cnts){
        if(max < i)
           max = i;
    }
    return max;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k = 150;
    vector<vector<int>> dungeons = {{80, 40}, {70, 30}, {90, 50}, {60, 20}, {85, 35}, {75, 25}, {95, 45}, {65, 15}};
    int answer = solution(k, dungeons);
    cout << answer;
    return 0;
}