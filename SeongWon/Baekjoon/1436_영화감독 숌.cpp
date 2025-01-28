#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, cnt = 0;
    cin >> n;
    int num = 666;
    string target;
    while(cnt != n){
        target = to_string(num);
        for(int i = 0; i < target.size()-2; i++){
            if(cnt == n)
                break;
            if(target[i]=='6' && target[i+1]=='6' && target[i+2]=='6'){
                cnt++;
                break;
            }
        }
        if(cnt == n)
            break;
        num++;
    }
    cout << num;
    return 0;
}
