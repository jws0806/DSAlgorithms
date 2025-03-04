#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int sum_before = 0, sum_after = 0;

    for (int i = 0; i < m1 - 1; i++) {
        sum_before += month[i];
    }
    sum_before += d1;

    for (int i = 0; i < m2 - 1; i++) {
        sum_after += month[i];
    }
    sum_after += d2;

    int days = sum_after - sum_before;
    
    if (days >= 0) {
        cout << day[days % 7];
    } else {
        int k = (7 - abs(days) % 7) % 7;
        cout << day[k];
    }

    return 0;
}
