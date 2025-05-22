#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a, b;
    cin >> a >> b;
    queue<long long> Q;
    queue<int> dist;
    Q.push(a);
    dist.push(1);
    while (!Q.empty())
    {
        long long x = Q.front();
        int d = dist.front();
        dist.pop();
        Q.pop();
        if(x*10+1 <= b){
            Q.push(x * 10 + 1);
            dist.push(d + 1);
        }
        if(x*2 <= b){
            Q.push(x * 2);
            dist.push(d + 1);
        }
        if (x * 10 + 1 == b || x * 2 == b)
        {
            cout << d + 1;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}