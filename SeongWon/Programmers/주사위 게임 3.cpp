#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    int arr[7] = {0};
    arr[a]++;
    arr[b]++;
    arr[c]++;
    arr[d]++;
    for(int i = 1; i <= 6; i++){    // 4 일 때
        if(arr[i]== 4)
            return 1111*i;
    }
    
    int p=-1, q=-1, r=-1;
    
    for(int i = 1; i <= 6; i++){
        if(arr[i]==2){              
            p = i;
            for(int j = 1; j <= 6; j++){    
                if(j!=i && arr[j]==2){      // 2, 2 일 때
                    q = j;
                    return (p+q)*abs(p-q);
                }
                if(arr[j] == 1){
                    q = j;
                    for(int k = 1; k <= 6; k++){
                        if(arr[k]==1&&k!=j){
                            return q*k;
                        }
                    }
                }
            }
        }
        if(arr[i]==3){              // 3, 1 일 때
            p = i;
            for(int j = 1; j <= 6; j++){
                if(arr[j]==1){
                    q = j;
                    return pow(10*p+q, 2);
                }
            }
        }
    }
    
    for(int i = 1; i <= 6; i++){
        if(arr[i] == 1){
            return i;
        }
    }
    return 0;
}
