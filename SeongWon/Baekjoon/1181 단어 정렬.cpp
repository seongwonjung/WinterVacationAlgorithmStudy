#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    if(a.size() < b.size()){   //긴 문자길이 오름차순으로
        return true;
    }
    else if(a.size() == b.size()) {  // 길이가 같을 때만 사전순 정렬
        return a < b;            // 사전순 비교
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr;

    for(int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        arr.push_back(word);
    }

    sort(arr.begin(), arr.end(), cmp);  //정렬

    for(int i = 0; i < n-1; i++){   //중복단어 건너뛰면서 출력
        if(arr[i] == arr[i+1]){
            continue;
        }
        cout << arr[i] <<"\n";
    }
    cout << arr[n-1];
    return 0;
}