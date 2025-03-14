#include <iostream>
#include <unordered_set>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    int Max = -1;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    for (int i = 0; i < N; i++) {
        unordered_set<int> seen;
        for (int j = i + 1; j < i + K + 1 && j < N; j++) {
            if (num[j] == num[i]) {
                Max = max(Max, num[i]);
                seen.insert(num[i]); // 중복 값 확인 방지
            }
        }
    }

    cout << Max;

    return 0;
}
