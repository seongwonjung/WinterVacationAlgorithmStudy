#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> s = {"A","E","I","O","U"};
int cnt = -1;
bool isfinish = false;
void dfs(int depth, string word, string str){
    cnt++;
    if(str == word){
        isfinish = true;
        return;
    }
    else if(depth == 5){
        return;
    }
    for(int i = 0; i < 5; i++){
        string tmp = str + s[i];
        if(isfinish)
            return;
        dfs(depth+1, word, tmp);
    }
}
int solution(string word) {
    int answer = 0;
    dfs(0, word, "");
    answer = cnt;
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string word = "I";
    cout << solution(word);
    return 0;
}