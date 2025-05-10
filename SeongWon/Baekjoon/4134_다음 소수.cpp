#include <iostream>
#include <vector>
using namespace std;

bool prim(long long int n){
    if (n < 2) return false;
    for(long long int i = 2; i * i <= n; i++){  //sqrt(n)으로 하면 n이 40억 같은 큰 수에서는 부정확하게 나올 수 있음
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int n;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        long long int a = n;
        while(true){
            if(prim(a)){
                cout << a << '\n';
                break;
            }
            a++;
        }
    }

    return 0;
}