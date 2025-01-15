#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<int> arr;
    for(int i = 0; i < rank.size(); i++){
        if(attendance[i] == true){
            arr.push_back(rank[i]);
        }
    }
    sort(arr.begin(), arr.end());
    int a, b, c;
    for(int i = 0; i < rank.size(); i++){
        if(arr[0] == rank[i])
            a = i;
        if(arr[1] == rank[i])
            b = i;
        if(arr[2] == rank[i])
            c = i;
    }
    int answer = a*10000 + 100*b + c;
    return answer;
}