#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    int cnt = 0, score = 0;
    for(auto i : arr){
        cnt++;
        if(cnt == k){
            score = i;
            break;
        }
    }
    cout << score;
    return 0;
}