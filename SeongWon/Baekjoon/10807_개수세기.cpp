#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, num, v, cnt = 0;
    vector<int> arr;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> num;
        arr.push_back(num);
    }
    cin >> v;
    for(auto i : arr)
        if(v == i)cnt++;
    cout << cnt;
    return 0;
}