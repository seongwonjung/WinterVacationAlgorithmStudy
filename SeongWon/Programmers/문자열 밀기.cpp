#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    if(A == B)  // 같으면 0
        return 0;
    for(int i = 0; i < A.size(); i++){
        if(A == B){
            return i;
        }
        char c = A[A.size()-1];     //마지막 문자
        A = A.substr(0, A.size()-1);    //마지막 문자를 제외한 문자열
        A = c + A;         // 마지막 문자인 c를 A앞에 더해서 오른쪽으로 민 것과 같음
    }
    return -1;
}