#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    int len = number.size();
    for(int i = 0; i < k; i++){
        for(int j = 0; j < number.size()-1; j++){
            if(number[j] < number[j+1]){
                number.erase(number.begin()+j);
                break;
            }
        }
    }
    if(number.size() != len-k)
        number.erase(number.begin()+number.size()-1);
    return number;
}