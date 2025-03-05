#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int sum = 0;

    // a 진법 -> 10진법 변환
    for (int i = 0; i < n.size(); i++) {
        int digit;
        if (isdigit(n[i])) digit = n[i] - '0';  // 숫자 0~9 변환
        else digit = n[i] - 'A' + 10; // A~Z 처리 (예: 16진법 이상)

        sum = sum * a + digit;
    }
    
    int num = sum;
    vector<int> v;

    // 10진법 -> b 진법 변환
    if (num == 0) v.push_back(0); // 0일 경우 예외 처리
    while (num > 0) {
        v.push_back(num % b);
        num /= b;
    }

    reverse(v.begin(), v.end());

    // 출력
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 10) cout << v[i]; // 0~9는 그대로 출력
        else cout << char('A' + v[i] - 10); // 10 이상이면 A~Z 문자로 변환
    }

    return 0;
}
