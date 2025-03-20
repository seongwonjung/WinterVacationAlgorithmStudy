#include <iostream>
#include <numeric> //iota를 포함한 헤더파일
#include <algorithm>    //sort, fill 등
using namespace std;
int main(){
    int n, m, i, j;    //n = 바구니 개수 m = 반복횟수 i 는 시작점 j는 끝지점 
    cin >> n >> m;
    int arr[n];
    iota(arr, arr+n, 1);    //배열을 순차적으로 1씩 증가하며 채움 1,2,3,4,....n
    for(int t = 0; t < m; t++){
        cin >> i >> j;
        reverse(arr+i-1, arr+j);    //(start, end) 에서 end는 포함이 안되기 떄문에 +j 까지 이고 start 는 0부터 시작이기 때문에 -1해주어야 
    }
    for(auto a : arr)
        cout << a << " ";
    return 0;    
}