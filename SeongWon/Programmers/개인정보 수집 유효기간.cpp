#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int today_y = stoi(today.substr(0,4));
    int today_m = stoi(today.substr(5,2));
    int today_d = stoi(today.substr(8,2));
    int idx = 0;
    for(auto date : privacies){
        idx++;
        char abc = date[date.size()-1];     //약관 종류
        int y = stoi(date.substr(0,4));
        int m = stoi(date.substr(5,2));
        int d = stoi(date.substr(8,2)) -1;
        if(d == 0){
            d = 28;
            m--;
        }
        
        for(auto i : terms){
            if(abc == i[0]){
                int term_m = stoi(i.substr(1));
                m = term_m + m;     //기간 만큼 더해줌
            }
        }
        while(m > 12){  //12월을 지나가면 년에 +1 해줘야함
            m -= 12;
            y++;
        }
        
        //today와 비교 후 answer에 추가
        if(today_y > y){  //년이 지났으면
            answer.push_back(idx);
        }
        else if(today_y == y && today_m > m){   //년은 안지났지만 월이 지났으면
            answer.push_back(idx);
        }
        else if(today_y == y && today_m == m && today_d > d){  //년,월은 안지났지만 일이 지났으면
            answer.push_back(idx);
        }   
    }

    return answer;
}