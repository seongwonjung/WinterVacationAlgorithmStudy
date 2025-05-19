#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    int n = s.size(), i = 0;
    while (i < n)
    {
        if (s[i] == '<')
        {
            while (i < n && s[i] != '>')
            {
                i++;
            }
        }
        else if (s[i] == ' ')
        {
            i++;
        }
        else
        {
            int start = i + 1;
            while (i < n && s[i] != '<' && s[i] != ' ' && s[i] != '\n')
            {
                i++;
            }
            reverse(s.begin() + start, s.begin() + i);
        }
    }

    cout << s;
    return 0;
}