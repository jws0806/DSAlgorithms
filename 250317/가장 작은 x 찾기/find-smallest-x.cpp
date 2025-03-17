#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    // x의 최소 시작점을 a[i] 중 최댓값으로 설정
    int x = *max_element(a, a + n);

    while (true) {
        int num = x;
        bool flag = true;

        // 각 범위 조건을 확인
        for (int i = 0; i < n; i++) {
            if (num < a[i] || num > b[i]) {
                flag = false;
                break;
            }
            num *= 2;  // 2배 증가
        }

        if (flag) {
            cout << x << "\n";
            return 0;
        }

        x++;  // 다음 x 시도
    }

    return 0;
}
