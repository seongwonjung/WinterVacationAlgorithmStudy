#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string numbers;
    cin >> numbers;
    int ptr = 0, numbers_len = numbers.size(), i = 1;
    while(true){
        string num = to_string(i); // numbers와 비교하기 위해 문자열로 바꿔준다.
        int num_len = num.size();
        for(int j = 0; j < num_len; j++){
            // num과 numbers[ptr]을 비교하여 ptr++을 해준다.
            // *num =  10 이고, numbers[ptr] = 0 일때 ptr을 +1 해준다*
            // 여기서 중요한 점은 num에 포함된 모든 숫자만큼 ++ 해주는 것
            // ex) numbers 가 82340329923 일 경우에 29는 두 자리이다. 따라서 num이 포함하는 모든 숫자만큼 ++을 해주어야한다.
            if(num[j] == numbers[ptr]){ 
                ptr++; 
            }
            if(ptr == numbers_len){
                cout << i;
                return 0;
            }
        }
        i++;
    }

    return 0;
}