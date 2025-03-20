#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct student
{
    string name;
    int kor, eng, math;
};

bool cmp(student a, student b){
    if(a.kor != b.kor) return a.kor > b.kor;
    if(a.eng != b.eng) return a.eng < b.eng;
    if(a.math != b.math)   return a.math > b.math;
    return a.name < b.name;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    vector<student> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
    }
    sort(arr.begin(), arr.end(), cmp);
    for(auto row : arr){
        cout << row.name << '\n';
    }
    return 0;
}