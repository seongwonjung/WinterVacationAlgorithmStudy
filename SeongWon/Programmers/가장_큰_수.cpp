#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool cmp(string a, string b){
    return a+b > b+a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> v;
    for(auto num : numbers)
        v.push_back(to_string(num));
    sort(v.begin(), v.end(), cmp);
    if(v[0] == "0")   return "0";
    for(auto c : v)
        answer += c;
    return answer;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    //[3, 30, 34, 5, 9]	"9534330"
    vector<int> numbers = {3, 30, 34, 5, 9};
    string s = solution(numbers);
    cout << s;
    return 0;
}