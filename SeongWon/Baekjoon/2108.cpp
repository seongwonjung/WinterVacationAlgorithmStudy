#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr;
    int num;
    double sum = 0;

    for (int i = 0; i < n; i++) { // n개의 수 입력
        cin >> num;
        sum += num;
        arr.push_back(num);
    }

    // 1. 산술평균
    cout << static_cast<int>(round(sum / n)) << "\n";

    // 2. 중앙값
    sort(arr.begin(), arr.end());
    cout << arr[n / 2] << "\n";

    // 3. 최빈값
    int cnts[8001] = {0}; // 최빈값을 위한 count 배열
    for (int i = 0; i < n; i++) {
        cnts[arr[i] + 4000]++;
    }

    int maxCnt = 0;
    for (int i = 0; i < 8001; i++) {
        if (maxCnt < cnts[i]) {
            maxCnt = cnts[i];
        }
    }

    vector<int> mod;
    for (int i = 0; i < 8001; i++) {
        if (cnts[i] == maxCnt) {
            mod.push_back(i);
        }
    }

    if (mod.size() > 1) {
        cout << mod[1] - 4000 << "\n";
    } else {
        cout << mod[0] - 4000 << "\n";
    }

    // 4. 범위
    cout << arr[n - 1] - arr[0] << "\n";

    return 0;
}
