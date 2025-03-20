#include <iostream>
#include <string>
#include <cmath>
#include <cctype> //isdigit를 포함한 헤더
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string n;
    int b;
    cin >> n >> b;
    //36^0*35 + 36^1*35 + 36^2*35 + 36^3*35 + 36^4*35 각 자리수마다 b^(자릿수-1)*(숫자)을 해준다
    long long num = 0;
    for(int i = 0; i < n.size(); i++){
        char c = n[n.size()-i-1];
        if(isdigit(c)){
            num += pow(b,i)*(c-'0');
        }
        else{
            num += pow(b,i)*(c -'A'+10);
        }
    }
    cout << num;
    return 0;
}