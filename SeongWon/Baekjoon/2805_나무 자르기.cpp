#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n, m;
    cin >> n >> m;
    vector<long long> tree(n);
    for(auto i = 0; i < n; i++){
        cin >> tree[i];
    }
    sort(tree.begin(), tree.end());
    long long low = 0, high = tree[n-1], max = 0;
    while(low <= high){
        long long sum = 0, mid = (high+low)/2;
        for(auto i = 0; i < n; i++){
            if((tree[i] - mid) > 0){
                sum += (tree[i] - mid);
            }
        }
        if(sum >= m){
            max = mid;
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    cout << max;
    return 0;
}