#include <iostream>
#include <vector>
using namespace std;

long long int Factorial(long long int n){
    if(n <= 1)
        return 1;
    return n*Factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long int n;
    cin >> n;
    cout << Factorial(n);
    return 0;
}