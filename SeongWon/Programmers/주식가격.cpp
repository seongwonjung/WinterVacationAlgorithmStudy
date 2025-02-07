#include <string>
#include <vector>
#include <stack>
using namespace std;
vector<int> solution(vector<int> prices) {
    int n = prices.size();
    vector<int> answer(n);
    stack<int> st;
    int idx = 0;
    for(int i = 0; i < n; i++){
        while(!st.empty()&&prices[st.top()] > prices[i]){
            idx = st.top();
            st.pop();
            answer[idx] = i-idx;
        }
        st.push(i);
    }
    while(!st.empty()){
        idx = st.top();
        st.pop();
        answer[idx] = n-idx-1;
    }
    return answer;
}
// 아래 코드의 시간 복잡도는 O(n^2) 위 의 코드는 스택을 이용한 코드이고 시간 복잡도는 O(n) 으로 위의 코드가 더 효율적임
// answer의 크기를 미리 할당 해준 후 index를 stack에 넣어 주면서 비교, 스택에 들어있는 인덱스의 prices와 prices[i]를 비교 후 주식 가격이 작아질때의 거리 차이 만큼을 answer에 넣는다
/*
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    vector<int> cnts(prices.size(), 0);
    for(int i = 0; i < prices.size()-1; i++){
        for(int j = i+1; j < prices.size(); j++){
            cnts[i]++;
            if(prices[i] > prices[j])   break;
        }
    }
    answer = cnts;
    return answer;
}
*/
