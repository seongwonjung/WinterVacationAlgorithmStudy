#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(size_t t = 0; t < commands.size(); t++){
        int i, j, k;
        i = commands[t][0];
        j = commands[t][1];
        k = commands[t][2];
        vector<int> tmp;
        for(size_t a = i-1; a < j; a++){
            tmp.push_back(array[a]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[k-1]);
    }
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> array = {1, 5, 2, 6, 3, 7, 4};
    vector<vector<int>> commands = {{2, 5, 3},{4, 4, 1},{1, 7, 3}};
    vector<int>answer = solution(array, commands);
    for(auto i : answer)
        cout << i << endl;
    return 0;
}