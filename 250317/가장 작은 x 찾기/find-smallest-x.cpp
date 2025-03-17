#include <iostream>
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
    
    // 시작점 최적화: 첫 번째 범위에서 가능한 가장 작은 x 값 찾기
    int x = (a[0] + 1) / 2;  // 첫 번째 범위의 최소값에 맞는 x 값
    
    while(true) {
        long long num = 2 * x;  // long long으로 변경하여 오버플로우 방지
        
        bool flag = true;
        for(int i = 0; i < n; i++) {
            if(num < a[i] || num > b[i]) {
                flag = false;
                break;
            }
            num *= 2;
        }
        
        if(flag == true) {
            cout << x;
            break;
        }
        
        x++;
    }
    
    return 0;
}