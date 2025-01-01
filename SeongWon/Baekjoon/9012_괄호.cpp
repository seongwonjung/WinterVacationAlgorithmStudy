#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int r = 0, l = 0;
        stack<char> st;
        string str;
        cin >> str;
        for(auto ch : str){
            st.push(ch);
        }
        while(st.size()){
            char ch = st.top();
            if(ch == '(')
                l++;
            else
                r++;
            st.pop();
            if(l > r){
                cout << "NO\n";
                break;
            }
            if(st.empty()){
                if(l==r)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }
    return 0;
}
/* 정답이긴하지만 (와 )의 개수를 세줄 필요 없이 stack에 넣으면서 처리하는 풀이방식이 더 효율적인 것 같다 
자꾸 스택문제를 굳이 스택을 사용하지 않아도 되는 방식으로 풀게 되는것 같은데 같은 문제인 (프로그래머스 문제 올바른 괄호)에서는 제대로 효율적으로 풀었음*/