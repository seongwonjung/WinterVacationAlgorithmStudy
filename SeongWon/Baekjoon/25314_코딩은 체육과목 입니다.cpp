#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n/4; i++){	// 4가 증가할 때마다 앞에 long을 하나씩 더 붙여준다
        cout << "long ";
    }
    if(n/4 == 0)
        cout << "long int";
    else
        cout << "int";
    return 0;
}