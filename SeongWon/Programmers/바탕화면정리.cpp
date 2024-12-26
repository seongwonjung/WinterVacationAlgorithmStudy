#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int min_row = 51, max_row = -1, min_col = 51, max_col = -1;
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[0].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(i>=max_col)
                    max_col = i;
                if(i<=min_col)
                    min_col = i;
                if(j>=max_row)
                    max_row = j;
                if(j<=min_row)
                    min_row = j;
            }
        }
    }
    answer.push_back(min_col);
    answer.push_back(min_row);
    answer.push_back(max_col+1);
    answer.push_back(max_row+1);
    return answer;
}