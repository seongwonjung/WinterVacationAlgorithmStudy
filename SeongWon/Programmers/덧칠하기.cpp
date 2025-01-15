#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int arr[100002] = {0};
    for(auto i : section)
        arr[i] = 1;         //다시 칠 할 곳 저장
    
    for(int i = 1; i <= n; i++){
        if(arr[i] == 1){        //다시 칠 할 곳이 나오면
            if(i+m-1 < n){      //m 만큼 칠 한 것으로 생각 하고 m만큼 건너뜀
                i = i+m-1;
                answer++;
            }else{              //n을 넘으면 종료
                answer++;
                break;
            }
        }
    }
    return answer;
}