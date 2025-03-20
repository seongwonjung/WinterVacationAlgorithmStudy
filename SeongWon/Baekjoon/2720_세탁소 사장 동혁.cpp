#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, c;
    cin >> t;
    for(int i = 0; i < t; i++){
        vector<int> arr;
        cin >> c;
        //0.25 0.10 0.05 0.01
        arr.push_back(c/25);
        c = c % 25;
        arr.push_back(c/10);
        c %= 10;
        arr.push_back(c/5);
        c %= 5;
        arr.push_back(c/1);
        for(auto num : arr)
            cout << num << " ";
        cout << '\n';
    }
    return 0;
}