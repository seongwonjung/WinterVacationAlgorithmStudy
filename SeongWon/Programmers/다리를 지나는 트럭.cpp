#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> q;
    
    for(auto w : truck_weights)
        q.push(w);
    int i = 0;  // 다리를 지나는 트럭 중 마지막 트럭의 인덱스
    int j = 0;  // 다리를 다 지난 트럭의 인덱스
    vector<pair<int, int>> p;
    if(p.empty()){      //다리를 지나는 트럭이 없을 경우
            p.push_back(make_pair(truck_weights[i], answer));
            i++;
        }
    while(!q.empty()){
        if(answer - p[j].second >= bridge_length){
            //cout << q.front() << "t 트럭 다리 지나감 현재 시간 : " << answer << endl;
            q.pop();
            j++;
        }
        
        if(!p.empty()){               //다리를 지나는 트럭이 있을 경우
            int cnt = 0;
            int w = 0;
            for(int k = j; k < i; k++){      //다리를 지나고 있는 트럭의 수와 무게 저장
                cnt++;
                w += p[k].first;
                cout << "현재시간 : " << answer << " 현재 다리의 트럭 : " << p[k].first << endl;
            }
            if(bridge_length >= cnt && weight >= w+truck_weights[i]){   //다리에 트럭이 추가돼도 되는 조건 일 때
                p.push_back(make_pair(truck_weights[i], answer));
                i++;
            }
        }
        
        answer++;
    }
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int bridge_length = 100;
    int weight = 100;
    vector<int> truck_weights = {10,10,10,10,10,10,10,10,10,10};
    int a = solution(bridge_length, weight, truck_weights);
    cout << a;
    return 0;
}