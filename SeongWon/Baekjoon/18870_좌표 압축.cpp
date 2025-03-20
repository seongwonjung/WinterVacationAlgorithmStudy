#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct str{
    int num, idx, count = 0;
};
bool cmp(str a, str b){
    return a.idx < b.idx;
}
bool cmp1(str a, str b){
    return a.num < b.num;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<str> arr(n);
    for(int i = 0; i < n; i++){
        arr[i].idx = i;
        cin >> arr[i].num;
    }
    sort(arr.begin(), arr.end(),cmp1);
    int cnt = 0;
    for(int i = 1; i < n; i++){
        arr[i-1].count = cnt;
        if(arr[i-1].num < arr[i].num){
            cnt++;
        }
    }
    arr[n-1].count = cnt;

    sort(arr.begin(), arr.end(), cmp);
    for(auto row : arr){
        cout << row.count << " ";
    }
    return 0;
}