#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i < n; i++){
        int num = i, sum = i;
        while(num > 0){
            sum += num % 10;
            sum /= 10;
        }
        if(sum == n){
            cout << i;
            break;
        }
    }

    return 0;
}