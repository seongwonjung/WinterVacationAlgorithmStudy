#include <string>
#include <vector>
using namespace std;

int solution(vector<int> schedules, vector<vector<int>> timelogs, int startday) {
    int answer = 0;
    vector<int> arr(schedules.size(), true);
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < schedules.size(); j++){
            int time_in = schedules[j] + 10;
            if(time_in % 100 >= 60){
                time_in = time_in - 60 + 100;
            }
            if((startday%7!=6&&startday%7!=0)&& time_in < timelogs[j][i]){ //평일에 출근시간보다 늦으면
                arr[j] = false;
            }
        }
       startday++;
    }
    for(auto b : arr)
        if(b) answer++;
    return answer;
}