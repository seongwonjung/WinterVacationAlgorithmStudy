#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1000000;
vector<bool> prims(MAX + 1, true);
bool isPrim()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, num;
    cin >> t;
    prims[0] = false;
    prims[1] = false;
    for (int i = 2; i * i <= MAX; i++)
    {
        if (prims[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                prims[j] = false;
            }
        }
    }
    // 에라토스테네스의 체 : 고대 그리스의 수학자 에라토스테네스가 만들어 낸 소수를 찾는 방법.
    // 마치 체로 치듯이 수를 걸러낸다고 하여 에라토스테네스의 체 라고 부른다.
    // 1. 1부터 n 까지의 수를 채운다.
    // 2. 소수가 아닌 1, 2를 제외한다.
    // 3. 2를 제외한 2의 배수를 제거한다.
    // 4. 3을 제외한 3의 배수를 제거한다.
    // 위 과정 이어서...
    // 정리 : n이하의 소수를 모두 찾을 때 1부터 n까지 나열한 후 2의 배수, 3의 배수, 5의 배수... 로 나누는 것이다.
    for (int c = 0; c < t; c++)
    {
        int cnt = 0;
        cin >> num;
        for(int i = 2; i < num/2; i++){
            if(prims[i] && prims[num-1])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}
