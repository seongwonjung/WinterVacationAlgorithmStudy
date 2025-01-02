#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for(int i = 0; i < progresses.size(); i++){
        int day = 0;
        while(progresses[i] < 100){     // 작업이 완료 될 때까지 반복
            progresses[i] += speeds[i];     //하루 마다 작업속도를 더해줌
            day++;
        }
        q.push(day);        // 작업이 완료될 떄 까지 걸리는 일 수 를 넣음
    }
    // 우선 맨 처음 완료까지 걸리는 기간을 저장 후 더 오래걸리는 기간이 나오기 전까지 한번에 묶음.
    int a = q.front();
    int cnt = 0;
    while(!q.empty()){
        cnt++;
        q.pop();
        if(a < q.front()){
            a = q.front();
            answer.push_back(cnt);
            cout << "cnt =  " << cnt << endl;
            cnt = 0;
        }
    }
    if(cnt!= 0){
        answer.push_back(cnt);
    }
    return answer;
}

int main()
{
    vector<int> answer;
    vector<int> progresses = {93, 30, 55};
    vector<int> speeds = {1, 30, 5};
    answer = solution(progresses, speeds);
    for(auto data : answer){
        cout << data << " ";
    }
    return 0;
}