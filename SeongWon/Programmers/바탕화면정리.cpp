#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int xy[4] = {51,51,-1,-1};
    for(int i = 0; i < wallpaper.size(); i++){
        for(int j = 0; j < wallpaper[0].size(); j++){
            if(wallpaper[i][j] == '#'){
                xy[0] = min(i,xy[0]);
                xy[1] = min(j,xy[1]);
                xy[2] = max(i+1,xy[2]);
                xy[3] = max(j+1,xy[3]);
            }
        }
    }
    for(int i = 0; i < 4; i++)
        answer.push_back(xy[i]);
    
    return answer;
}