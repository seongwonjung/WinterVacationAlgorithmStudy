#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> st;
    for(int i = 0; i < moves.size(); i++){
        int col = moves[i]-1;
        for(int row = 0; row < board.size(); row++){ // 바구니에 옮기는 코드
            if(board[row][col] != 0){ // 뽑을 인형을 찾음
                if(!st.empty()&&st.top() == board[row][col]){ // 바구니의 위에 있는 인형과 지금 넣으려는 인형이 같으면 answer++
                    st.pop();
                    answer+=2;
                }else{
                    st.push(board[row][col]);
                }
                board[row][col] = 0;
                break;
            }
        }
    }
    
    return answer;
}