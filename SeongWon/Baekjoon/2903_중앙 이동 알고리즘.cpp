#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    /*
    행 -1 만큼증가
    2
    3
    5
    9
    17
    33
    */
    int n, row = 2;
    cin >> n;
    for(int i = 0; i < n; i++){
        row += row-1;
    }
    cout << row*row;
    return 0;
}