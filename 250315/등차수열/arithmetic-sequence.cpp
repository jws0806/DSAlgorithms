#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n); // 정렬

    int cnt = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % 2 == 0) { // k가 정수인지 확인
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}
