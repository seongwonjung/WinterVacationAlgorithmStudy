#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, max_sum = 0;
    cin >> n >> m;
    vector<int> cards(n);
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= m && sum > max_sum){
                    max_sum = sum;
                }
            }
        }
    }
    cout << max_sum;
}
/*
백트래킹을 이용한 풀이
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
vector<bool> vst;
vector<int> cards;
vector<int> rst;
void BackTracking(int num, int depth, int &sum){
    if(depth == 3){
        // 종료조건
        if(sum <= m)
            rst.push_back(sum);
        return;
    }
    for(int i = num; i < n; i++){
        if(!vst[i]){
            vst[i] = true;
            sum += cards[i];
            BackTracking(i+1, depth+1, sum);
            sum -= cards[i];
            vst[i] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    cards.assign(n, 0);
    vst.assign(n, false);
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }
    int sum = 0;
    BackTracking(0,0,sum);
    sort(rst.begin(), rst.end());
    cout << rst[rst.size()-1];
    return 0;
}
*/