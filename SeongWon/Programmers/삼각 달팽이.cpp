#include <iostream>
#include <vector>
using namespace std;
int dx[3] = {0,1,-1};
int dy[3] = {1,0,-1};
vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> arr(n, vector<int>(n,0));
    int num = 1, max_num = (n*(n+1))/2;
    int dir = 0, x = 0, y = 0;
    while(num <= max_num){
        arr[y][x] = num;
        num++;
        dir = dir % 3;
        x += dx[dir];
        y += dy[dir];
        if (x < 0 || x >= n || y < 0 || y >= n || arr[y][x] != 0) {
            x -= dx[dir];
            y -= dy[dir];
            dir = (dir + 1) % 3;          // 새 방향으로 바꾼 뒤
            x += dx[dir];                 // 바로 한 칸 이동
            y += dy[dir];
        }
    }
    for(auto row : arr){
        for(int i : row){
            if(i != 0){
                answer.push_back(i);
            }
        }
    }
    return answer;
}