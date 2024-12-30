#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    //처음 나온 문자는 -1, 앞에 나온 문자라면 그 앞 문자와의 간격
    stack<int> st;
    for(int i = s.size()-1; i >= 0; i--){
        for(int j = i; j >= 0; j--){
            if(s[i] == s[j] && i!=j){
                st.push(i-j);
                //cout << " i = " << i << " 스택에 " << i-j << "추가 \n";
                break;
            }
            if(j == 0){
                st.push(-1);
                //cout << " i = " << i << " 스택에 " << "-1" << "추가 \n";
            }
        }
    }
    while(!st.empty()){
        answer.push_back(st.top());
        st.pop();
    }
    return answer;
}

int main()  //test 용도도
{
    string s = "abccba";
    vector<int> answers;
    answers = solution(s);
    for(auto i : answers){
        cout << i << " ";
    }
    return 0;
}
