#include<string>
#include <iostream>
#include <stack>
using namespace std;

bool solution(string s)
{
    /*
    1.  '('와 ')'의 개수는 같아야 한다. 
    2.  )가 나올 경우 (를 없애준다.
    3.  만약 ) 가 나왔을 때 stack이 비어있으면 ()짝이 맞지 않으므로 false
    4.  1번 조건에 의해 마지막에 stack.empty()가 false이면 -> 스택에 문자가 남아있으면 false 이다
    */
    bool answer = false;
    stack<char> stack;
    for(auto c : s){
        if(c == '('){
            stack.push(c);
        }
        else{   //c == ')' 일 경우
            if(stack.empty()){  // 앞에 '(' 가 없을 경우 false로 바꾸고 종료
                answer = false;
                return answer;
            }else{  // ')'가 나올때 마다 푸쉬해놨던 '('를 없애줌
                stack.pop();
            }
        }
    }
    if(stack.empty())   //stack에 문자가 남아있을 경우 ()의 짝이 안맞는 경우이므로 비어 있는 경우 true
        answer = true;
    
    return answer;
}