#include <iostream>
#include <vector>
using namespace std;
int n, cnt = 0, sum = 0;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    sum = n;
    while(sum>0){
        if((sum)%5 == 0){
            cnt += sum/5;
            sum %= 5;
        }else{
            sum-=3;
            cnt++;
        }
    }
    if(sum < 0){
        cnt = -1;
    }

    cout << cnt;
    return 0;
}