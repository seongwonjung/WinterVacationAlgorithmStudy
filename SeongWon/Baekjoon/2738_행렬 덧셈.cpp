#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n, m, num;
    cin >> n >> m;
    vector<vector<int>> A;
    vector<vector<int>> B;
    for(int t = 0; t < 2; t++){ // A와 B 두개에 입력받기 때문에 전체 2번 반복
        for(int i = 0; i < n; i++){
            vector<int> row;
            for(int j = 0; j < m; j++){
                cin >> num;
                row.push_back(num); //행 저장
            }
            if(t==0)
                A.push_back(row); //행을 행렬에 한줄씩넣는다
            else
                B.push_back(row);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << A[i][j]+B[i][j] << " "; //행렬 덧셈 출력
        }
        cout << '\n';
    }
	return 0;
}
