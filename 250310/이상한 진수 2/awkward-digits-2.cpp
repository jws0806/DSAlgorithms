#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a;
    cin >> a;  // 이진수 문자열 입력 받기

    bool flag = true;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0') {
            a[i] = '1';
            flag = false;
            break;
        }
    }

    if (flag) {
        int n=a.size();
        a[n-1]='0';
        int sum = 0;
        reverse(a.begin(), a.end());  
        for (int i = 0; i < a.size(); i++) {
            sum += (a[i] - '0') * (1 << i);
        }  
        cout<<sum;
        return 0;
    }



    int sum = 0;
    reverse(a.begin(), a.end());  
    for (int i = 0; i < a.size(); i++) {
        sum += (a[i] - '0') * (1 << i);  // (1 << i) == pow(2, i)
    }

    cout << sum << endl;
    return 0;
}
