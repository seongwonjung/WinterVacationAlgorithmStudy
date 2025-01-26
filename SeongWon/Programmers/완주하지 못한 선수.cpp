#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for(int i = 0; i < completion.size(); i++){
        if(completion[i] != participant[i]){
            return participant[i];
        }
    }
    return participant[participant.size()-1];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<string> participant = {"marina", "josipa", "nikola", "vinko", "filipa"};
    vector<string> completion = {"josipa", "filipa", "marina", "nikola"};
    cout << solution(participant, completion) << endl;
    return 0;
}