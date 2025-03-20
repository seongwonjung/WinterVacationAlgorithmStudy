#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
/*
모든 경우의 수를 다 탐색해보고 5개의 정수를 선택했을 경우에만 answer++해주면 된다.
조건 1: q의 각 줄마다 ans과 같은 개수 이어야 함


위에 쓴 주석 bfs나 뺵트래킹으로 해결 하려고 했는데 변수나 신경써야 할 부분이 많아서 조합을 이용해서 푸는 방식으로 함
조합 가능한 모든 경우를 찾고 각 줄마다 q와 ans를 비교하며 올바르면 answer++ 아니면 continue
*/
bool a(vector<int> tmp, vector<vector<int>> q,vector<int> ans){
    for(int i = 0; i < q.size(); i++){
        int cnt = 0;
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++)
            if(q[i][j] == tmp[k]){
                cnt++;
            }
        }
        if(ans[i]!=cnt)
            return false;
    }
    return true;
}
int solution(int n, vector<vector<int>> q, vector<int> ans) {
    int answer = 0;
    vector<int> arr(n);
    vector<int> sub(n, 1); // 조합을 위한 보조벡터
    iota(arr.begin(), arr.end(), 1); //iota = 1~n까지 초기화
    for(int i = 0; i < 5; i++)
        sub[i] = 0;
        
    do{
        vector<int> tmp;
        for(int i = 0; i < n; i++){
            if(sub[i] == 0){
                tmp.push_back(sub[i]+arr[i]);
            }
        }
        if(a(tmp,q,ans))
            answer++;
        
    }while(next_permutation(sub.begin(), sub.end()));
    
    return answer;
}