#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    short arr[100][100]={0};
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        for(int w = x; w < x+10; w++){
            for(int h = y; h < y+10; h++){
                arr[w][h] = 1;
            }
        }
    }
    int area = 0;
    for(int i = 0; i < 100; i++){
        for(int j = 0; j < 100; j++)
            if(arr[i][j] == 1)
                area++;
    }
    cout << area;
    return 0;
}