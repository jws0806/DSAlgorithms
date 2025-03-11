#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            // 평균이 정수인지 확인
            if (sum % (j - i + 1) == 0) {
                int avg = sum / (j - i + 1);

                // 평균값이 현재 부분 배열 내에 존재하는지 확인
                if (find(arr + i, arr + j + 1, avg) != arr + j + 1) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
