#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num, max = -1;
    pair<int,int> idx; //x,y좌표를 넣어 놓을 pair 생성
	for(int y = 0; y < 9; y++){
        for(int x = 0; x < 9; x++){
            cin >> num;
            if(num > max){ //max를 계속 해서 비교하며 max와 idx갱신
                max = num;
                idx = {y+1,x+1};
            }
        }
    }
    cout << max << '\n';
    cout << idx.first << " " << idx.second;
	return 0;
}
