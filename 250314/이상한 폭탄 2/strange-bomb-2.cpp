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
        for (int j = i + 1; j < i + K + 1 && j < N; j++) {
            if (num[j] == num[i]) {
                Max = max(Max, num[i]);
                
            }
        }
    }

    cout << Max;

    return 0;
}
