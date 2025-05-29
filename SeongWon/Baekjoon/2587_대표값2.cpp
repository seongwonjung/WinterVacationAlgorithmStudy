#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> arr(5,0);
    int sum = 0;
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    cout << sum/5 << '\n';
    cout << arr[2];
    return 0;
}