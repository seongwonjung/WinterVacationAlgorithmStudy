#include <iostream>
#include <vector>
using namespace std;
int gcd(int a, int b){
    int r = 0;
    while(b){
        r = a % b; //r = 0
        a = b; // a = 1
        b = r;
    }
    return a;
}
int main() {
    int n, a = 0, b = 1000000001, dist;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    dist = arr[1] - arr[0];
    for(int i = 2; i < n; i++){
        int tmp = arr[i]-arr[i-1];
        if(dist >= tmp)
            dist = gcd(dist, tmp);
        else
            dist = gcd(tmp, dist);
    }
    // a + (n-1)d = arr의 마지막 오쇼
    //n = (arr[n-1] - a)/d + 1
    cout << ((arr[n-1]-arr[0])/dist) + 1 - n;
    return 0;
}