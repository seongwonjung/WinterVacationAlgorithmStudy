#include <iostream>
#include <vector>
using namespace std;
int find_block(vector<vector<char>> arr, int x, int y, char c)
{
    int cnt = 0;
    for (int dy = y; dy < y + 8; dy++)
    {
        for (int dx = x; dx < x + 8; dx++)
        {
            if(((dy-y)+(dx-x))%2 == 0 && arr[dy][dx]!=c)
                cnt++;
            else if(((dy-y)+(dx-x))%2 != 0 && arr[dy][dx]==c)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, b = 0, w = 0, rst = 999999999;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            cin >> arr[y][x];
        }
    }
    if (n == 8 && m == 8)
    {
        b = find_block(arr, 0, 0, 'B');
        w = find_block(arr, 0, 0, 'W');
        int min = b > w ? w : b;
        if(rst > min)
            rst = min;
    }
    else
    {
        for (int y = 0; y <= n - 8; y++)
        {
            for (int x = 0; x <= m - 8; x++)
            {
                b = find_block(arr, x, y, 'B');
                w = find_block(arr, x, y, 'W');
                int min = b > w ? w : b;
                if(rst > min)
                    rst = min;
            }
        }
    }
    cout << rst;
    return 0;
}