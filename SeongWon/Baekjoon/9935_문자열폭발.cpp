#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    string bomb;
    cin >> str;
    cin >> bomb;
    stack<char> st;
    stack<int> cnts;
    int cnt = 0;
    int b_size = bomb.size();
    for(size_t i = 0; i < str.size(); i++){
        st.push(str[i]);
        if(!st.empty() && st.top()!= bomb[0] &&st.top()!=bomb[cnt]){
            int cnts_size = cnts.size();
            for(int k = 0; k < cnts_size; k++){
                        cnts.pop();
            }
            cnt = 0;
        }
        if(bomb[0] == st.top()){
            cnt = 0;
        }
        if(bomb[cnt] == st.top()){
            cnt++;
            cnts.push(cnt);
        }
        if(b_size == cnt){
            bool sec = true;
            for(int j = b_size; j > 0; j--){
                if(cnts.top() == j){
                    cnts.pop();
                }
                else{
                    sec = false;
                    int cnts_size = cnts.size();
                    for(int k = 0; k < cnts_size; k++){
                        cnts.pop();
                    }
                    break;
                }
            }
            if(sec)
                for(int j = 0; j < b_size; j++){
                    st.pop();
                }
            if(cnts.empty())
                cnt = 0;
            else
                cnt = cnts.top();
        }
        
    }
    
    int st_size = st.size();
    stack<char> prt;
    if(st.empty()){
        cout << "FRULA";
        return 0;
    }
    for(int i = 0; i < st_size; i++){
        prt.push(st.top());
        st.pop();
    }
    for(int i = 0; i < st_size; i++){
        cout << prt.top();
        prt.pop();
    }
    return 0;
}