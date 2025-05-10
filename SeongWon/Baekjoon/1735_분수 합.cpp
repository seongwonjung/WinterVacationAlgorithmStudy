#include <iostream>
using namespace std;
int f(int a, int b){
    int r;
    while(b){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    int a,b, a1, a2, b1, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    a = a1*b2 + a2*b1;
    b = b1*b2;
    int c;
    if(a > b)
        c = f(a,b);
    else 
        c = f(b,a);
    cout << a/c << " " << b/c;
}