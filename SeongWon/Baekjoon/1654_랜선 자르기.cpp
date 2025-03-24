#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> k >> n;
    vector<long long> cable(k);
    for(int i = 0; i < k; i++){
        cin >> cable[i];
    }
    sort(cable.begin(), cable.end());
    long long low = 1, high = cable[k-1];
    int max = 0;
    while(low <= high){
        long long mid = (low+high)/2;
        int cnt = 0;
        for(int i = 0; i < k; i++){
            cnt += cable[i]/mid;
        }
        if(cnt >= n){
            if(max <= mid)
                max = mid;
            low = mid+1;
        }else if(cnt < n){
            high = mid-1;
        }
    }
    cout << max;
    return 0;
}