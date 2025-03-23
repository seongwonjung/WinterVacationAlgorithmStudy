#include <iostream>
#include <cmath>
using namespace std;

int cnt = 0;

void quadrangle(int size, int r, int c){
    if(size == 1) return; // 종료 조건
    int num;
    if (r < size / 2) { // 0 or 1
        if (c < size / 2) num = 0; // 왼쪽 위
        else num = 1; // 오른쪽 위
    } else { // 2 or 3
        if (c < size / 2) num = 2; // 왼쪽 아래
        else num = 3; // 오른쪽 아래
    }
    cnt += (size / 2) * (size / 2) * num; // 이동한 사분면만큼 카운트 증가
    quadrangle(size / 2, r % (size / 2), c % (size / 2));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, r, c;
    cin >> n >> r >> c;
    quadrangle(pow(2, n), r, c);
    cout << cnt;
    
    return 0;
}