#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, k;
    cin >> t;
    string w;
    for (int i = 0; i < t; i++)
    {
        cin >> w >> k;
        int n = w.size();
        int Max = 0, Min = 10001;
        for (int j = 0; j < n; j++)
        {
            char target = w[j];
            int ptr = j, cnt = 0, len;
            while (ptr < n && cnt != k)
            {
                if (w[ptr] == target)
                {
                    cnt++;
                }
                ptr++;
            }
            if (cnt == k)
            {
                len = ptr - j;
                if (Max < len)
                {
                    Max = len;
                }
                if (Min > len)
                {
                    Min = len;
                }
            }
        }
        if (Max == 0)
        {
            cout << "-1" << '\n';
            continue;
        }
        else
        {
            cout << Min << " " << Max << '\n';
        }
    }

    return 0;
}