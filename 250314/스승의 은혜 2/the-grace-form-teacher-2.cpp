#include <iostream>
#include <algorithm>
using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P, P + N); // 상품 가격을 오름차순 정렬
    int Max = 0;

    for (int i = 0; i < N; i++) { 
        int sum = 0, cnt = 0;
        
        // i번째 상품을 할인할 경우
        for (int j = 0; j < N; j++) {
            int price = (i == j) ? P[j] / 2 : P[j]; // 특정 상품만 할인 적용

            if (sum + price <= B) {
                sum += price;
                cnt++;
            } else {
                break; // 예산 초과 시 종료
            }
        }
        Max = max(Max, cnt); // 최대 구매 개수 갱신
    }

    cout << Max;
    return 0;
}
