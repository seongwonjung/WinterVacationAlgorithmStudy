#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n, total = 0;
int col[15] = {0,};
// 퀸을 놓을 수 있는지를 2차원 vst 배열을 만들고 빽트래킹으로 해결 하려고 했는데 방문처리 true 후 다시 전 상태로 false 돌리는 것이 어려워서
// 다른 사람의 풀이를 보고 풀었음.
// 가장 중요한 것은 좌표 (x, y) 의 대각선을 판별하는 것 인데 대각선 좌표가 (a, b) 라고 할때 (x-a) == (y-b) 이라는 점이다.
// ex) x, y 각 (0,2) a,b 가 (2,4) 라고 하면 (0-2) == (2-4) 이다. 이 점을 이용해 체스를 놓을 수 있는지 쉽게 판별할 수 있다.
// 그 다음으로 중요 한 것은 col[15] 를 만들어서 x를 [level] 로 판별 한다는 발상이다. 보고 놀랐다.

bool check(int level){
    for(int i = 0; i < level; i++){     
        if(col[i] == col[level] || abs(col[i]-col[level]) == level - i) // 직선이거나 대각선일 때
            return false;  // col[level] 에서 level 은 b, col[level] = a 이고, col[i] 에서 i = x, col[i] = y 임 
    }
    return true;
}
void Nqueen(int x){
    if(x == n){
        total++;
    }
    for(int i = 0; i < n; i++){
        col[x] = i;
        if(check(x))    //퀸을 놓을 수 있는지 판별
            Nqueen(x+1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    Nqueen(0);
    return 0;
}