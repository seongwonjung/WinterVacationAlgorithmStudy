#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> diffs, vector<int> times, long long limit) {
    long long time_cur = 0;
    vector<int> answer;
    int low = 1, high = *max_element(diffs.begin(), diffs.end()), level;
    while(low <= high){
        level = (low+high)/2;
        time_cur = 0;
        for(int i = 0; i < diffs.size(); i++){
            if(diffs[i] <= level){
                time_cur += times[i];
            }else{
                //diffs[i]-level 번 틀리고, 틀리면 이전 문제를 다시 풀어야 함(+prev)
                int mistake = diffs[i]-level;
                if(mistake <= 1)
                    mistake = 1;
                int prev = 0;
                if(i != 0)
                    prev = times[i-1];
                time_cur += mistake*(prev+times[i]) + times[i];
            }
        }
        if(time_cur <= limit){
            high = level-1;
            answer.push_back(level);
        }else{
            low = level+1;
        }
    }
    int min = 9999999;
    for(auto i : answer){
        if(min >= i)
            min = i;
    }
    return min;
}