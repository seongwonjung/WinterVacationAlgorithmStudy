#include <vector>
#include <queue>
using namespace std;

int cnt_server(queue<int> q){
    int total = 0;
    while(!q.empty()){
        total += q.front();
        q.pop();
    }
    return total;
}

int solution(vector<int> players, int m, int k) {
    int answer = 0;
    queue<int> servers; // 서버의 개수만 저장
    queue<int> expire;  // 각 배치의 종료 시각 저장
    for (int i = 0; i < 24; i++){
        while(!expire.empty() && expire.front() == i){ // 만료된 서버 제거
            servers.pop();
            expire.pop();
        }
        int current = cnt_server(servers);
        int required = players[i] / m;
        if(required > current){
            int add = required - current;
            answer += add;
            servers.push(add);
            expire.push(i + k);
        }
    }
    return answer;
}