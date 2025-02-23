#include <iostream>
using namespace std;
int main(){
    int x, n, a, b;    //총 금액 x, 물건의 종류 수 = n, 각 물건의 가격 = a, 개수 = b
    cin >> x;
    cin >> n;
    int sum = 0;    //(각 물건가격 * 개수)의 합
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        sum += a*b;
    }
    if(sum == x) cout << "Yes";
    else cout << "No";
    return 0;
}