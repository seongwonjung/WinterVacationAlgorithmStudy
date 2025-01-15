#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int t = 0;
    int j = 0;
    int max_health = health;
    for(int i = 0; i <= attacks[attacks.size()-1][0]; i++){
        if(i == attacks[j][0]){     //공격 당할 때
            health -= attacks[j][1];
            t = 0;
            if(health <= 0)     //체력 0 되면 -1 리턴
                return -1;
            if(j< attacks.size()-1){
                j++;
            }
        }
        else{       //공격 당하지 않을 때
            t++;
            if(t == bandage[0]){
                health += bandage[2] + bandage[1];
                t = 0;
            }else{
                health += bandage[1];
            }
            if(health > max_health)
                health = max_health;
        }
    }
    answer = health;
    return answer;
}