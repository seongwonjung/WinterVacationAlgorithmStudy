#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int num, a_cnt, b_cnt, intersection = 0, b_a = 0;
    map<int, bool> a, b;
    cin >> a_cnt >> b_cnt;
    for(int i = 0; i < a_cnt+b_cnt; i++){
        cin >> num;
        if(i < a_cnt)
            a[num] = true;
        else
            b[num] = true;    
    }
    for(auto p : a){
        if(b.find(p.first)!=b.end())
        intersection++;
    }
    cout << a.size()+b.size()-2*intersection;
    return 0;
}