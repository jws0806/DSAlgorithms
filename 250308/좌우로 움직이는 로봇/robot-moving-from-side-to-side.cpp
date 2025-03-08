#include <iostream>
#include <vector>
using namespace std;

int n, m;
int t;
char d;
int t_b;
char d_b;
vector<int> a, b;

int main() {
    cin >> n >> m;
    int sumA = 0, sumB = 0;
    int timeA = 0, timeB = 0;

    for (int i = 0; i < n; i++) {
        cin >> t >> d;
        for (int j = 0; j < t; j++) {
            sumA += (d == 'R') ? 1 : -1;
            a.push_back(sumA);
        }
        timeA += t;
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b >> d_b;
        for (int j = 0; j < t_b; j++) {
            sumB += (d_b == 'R') ? 1 : -1;
            b.push_back(sumB);
        }
        timeB += t_b;
    }

    int maxTime = max(timeA, timeB);

    while (a.size() < maxTime) a.push_back(a.back());
    while (b.size() < maxTime) b.push_back(b.back());

    int cnt = 0;

    // 선두 교체 판단 (첫 순간 체크)
    if (a[1] == b[1]) cnt++;

    for (int i = 2; i < maxTime; i++) {
        if (a[i - 1] != b[i - 1] && a[i] == b[i]) cnt++;
    }

    cout << cnt;
    return 0;
}
