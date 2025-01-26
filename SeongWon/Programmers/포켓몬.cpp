#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    vector<int> kind;
    for(auto i : nums){
        if(find(kind.begin(), kind.end(), i) == kind.end()){
            kind.push_back(i);
        }
        if(kind.size() == nums.size()/2)
            break;
    }
    answer = kind.size();
    return answer;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> nums = {3,1,2,3};
    cout << solution(nums) << endl;
    return 0;
}