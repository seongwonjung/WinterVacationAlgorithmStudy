#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, c, router = 0, max_dist = 0;
    cin >> n >> c;
    vector<int> x(n);

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int low = 1, high = x[n-1], tmp = 1;
    while(low <= high){
        tmp = x[0];
        router = 1;
        int mid = (low+high)/2;
        for(int i = 0; i < n; i++){
            if(x[i] - tmp >= mid){
                tmp = x[i];
                router++;
            }
        }
        if(router >= c){    // 공유기의 개수가 많다면 간격을 더 늘려야 함
            max_dist = max(mid, max_dist);
            low = mid + 1;
        }else{  // 공유기의 개수가 부족하다면 간격이 더 좁아져야 함
            high = mid - 1;
        }
    }
    cout << max_dist;
    return 0;
}