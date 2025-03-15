#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); // 정렬 (이진 탐색을 활용할 수도 있음)

    int maxCount = 0;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((a[i] + a[j]) % 2 == 0) { // K가 정수인지 확인
                int K = (a[i] + a[j]) / 2;

                // (aᵢ, K, aⱼ) 구조를 만족하는 개수 세기
                int count = 0;
                for (int x = 0; x < n; x++) {
                    for (int y = x + 1; y < n; y++) {
                        if ((a[x] + a[y]) == 2 * K) count++;
                    }
                }
                maxCount = max(maxCount, count);
            }
        }
    }

    cout << maxCount;
    return 0;
}
