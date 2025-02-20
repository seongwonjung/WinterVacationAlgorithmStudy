#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int answer = 0;
    int col = 1, row = 1;
    pair<int,int> find_num;
    for(int i = 1; i <= n; i++){
        if(num == i) find_num = make_pair(row, col);
        if(i == n) break;
        if(row%2 == 1){ //홀수층 일때 오른쪽으로 증가
            col++;
            if(col == w+1){ //오른쪽 끝까지 가면 층수 층가
                row++;
                col--;
            }
        }else{ //짝수층 일때 왼쪽으로 증가
            col--;
            if(col == 0){ //왼쪽 끝까지 가면 층수 증가
                col++;
                row++;
            }
        }
    }
    answer += row - find_num.first + 1;
    if(row%2 == 1){
        if(find_num.second > col)
            answer--;
    }else{
        if(find_num.second < col)
            answer--;
    }
    return answer;
}