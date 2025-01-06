#include <string>
#include <vector>
#include <map>

using namespace std;
vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> m;
    for(int i = 0; i < yearning.size(); i++){
        m.insert({name[i], yearning[i]});       //map에 넣어줌 name = 추억점수
    }
    for(auto arr: photo){
        int sum = 0;
        for(auto str : arr){
            sum += m[str];          //name의 추억 점수 만큼 더함
        }
        answer.push_back(sum);
    }
    return answer;
}