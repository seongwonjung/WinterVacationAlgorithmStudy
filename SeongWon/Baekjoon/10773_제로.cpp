#include <iostream>
#include <stack>

using namespace std;

int main(){
    int k;
    cin >> k;
    stack<int> st;
    int x;
    for(int i = 0; i < k; i++){
        cin >> x;
        if(x == 0)
            st.pop();
        else
            st.push(x);
    }

    int sum = 0;
    while(!st.empty()){
        int num = st.top();
        sum += num;
        st.pop();
    }
    cout << sum;
    return 0;
}