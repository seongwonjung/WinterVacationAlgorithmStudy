#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool vst[8];
vector<int> arr;
int cnt = 0;
void comb(string numbers, string tmp){
    bool y = true;
    int c = 0;
    if(!tmp.empty()){
        c = stoi(tmp);
        for(int i = 2; i < c; i++){
            if(c%i == 0){       //소수 판별
                y = false;
                break;
            }
        }
    }
    if(c == 0 || c == 1)
            y = false;
    if(y){
        if(find(arr.begin(), arr.end(), c) == arr.end()){  //처음나온 숫자이고, 소수이면 cnt++
            cnt++;
            arr.push_back(c);
        }
    }
    for(int i = 0; i<numbers.size(); i++){
        if(!vst[i]){
            vst[i] = true;
            comb(numbers, tmp+numbers[i]);
            vst[i] = false;
        }
    }
}
int solution(string numbers) {
    comb(numbers, "");
    return cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string numbers = "011";
    int rst = solution(numbers);
    cout << rst;
    return 0;
}