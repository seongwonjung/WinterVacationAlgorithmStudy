#include <iostream>
#include <vector>
using namespace std;

//최대 공약수
long long int gcd(long long int a, long long int b){
    long long int r;
    while(b!=0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    long long int c = gcd(b,a);
    cout << a*b/c;  //최소공배수는 a*b 를 최대공약수로 나눈 것과 같음
    return 0;
}