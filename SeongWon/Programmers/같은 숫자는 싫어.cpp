#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    queue<int> q;
    vector<int> answer;
    for(auto num: arr)
        q.push(num);
    int a = q.front();
    q.pop();
    while(q.size()){
        int b = q.front();
        if(a!=b){
            answer.push_back(a);
            a = b;
        }
        if(q.size()==1){
            answer.push_back(a);
        }
        q.pop();
    }

    return answer;
}