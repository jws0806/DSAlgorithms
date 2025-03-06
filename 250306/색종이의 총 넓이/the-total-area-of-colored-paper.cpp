#include <iostream>

using namespace std;

const int OFFSET = 100;  // 좌표 변환을 위한 OFFSET
const int SIZE = 201;    // (-100, -100) ~ (100, 100) 범위를 표현하기 위한 크기

bool paper[SIZE][SIZE] = {false};  // 색종이가 덮인 부분을 저장

int main() {
    int N;
    cin >> N;

    // 색종이 붙이기
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;

        // 좌표 변환 (OFFSET을 더해서 0 이상의 인덱스로 변환)
        x += OFFSET;
        y += OFFSET;

        // (x, y)에서 시작하는 8x8 색종이 영역 덮기
        for (int dx = 0; dx < 8; dx++) {
            for (int dy = 0; dy < 8; dy++) {
                paper[x + dx][y + dy] = true;
            }
        }
    }

    // 총 넓이 계산
    int area = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (paper[i][j]) area++;
        }
    }

    cout << area << endl;
    return 0;
}
