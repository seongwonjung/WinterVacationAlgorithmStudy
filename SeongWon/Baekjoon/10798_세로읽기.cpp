#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<string> arr;
    for(int i = 0; i < 5; i++){
        string s;
        cin >> s;
        arr.push_back(s); //한줄씩 문자열을 벡터에 저장
    }
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 5; j++){
            if(arr[j].size() > i){ // i가 문자열의 길이보다 작을때만 출력
                cout << arr[j][i];
            }
        }
    }
    
    return 0;
}