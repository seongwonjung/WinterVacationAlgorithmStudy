#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool arr[20000001];
// 처음 코드에서는 시간초과가 떠서 배열을 이용해 세주면 되겠다고 생각함.
// 처음에 입력받은 숫자들을 true, 나머지를 false로 설정하고 두 번째 입력을 받으면서 true면 1 false면 0을 출력하게 수정
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n , m, num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr[num+10000000] = true;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> num;
        if(arr[num+10000000] == true){
            cout << "1 ";
        }else{
            cout << "0 ";
        }
    }
    return 0;
}
/*
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n , m, num;
    vector<int> a;
    vector<int> b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        a.push_back(num);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> num;
        b.push_back(num);
    }
    for(auto i : b){
        if(find(a.begin(), a.end(), i) == a.end())
            cout << "0 ";
        else
            cout << "1 ";
    }
    return 0;
}
*/