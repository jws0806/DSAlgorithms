#include <iostream>

using namespace std;

const int SIZE = 201;
bool paper[SIZE][SIZE] = {false}; // 80x80 크기의 좌표평면 (false: 색종이 없음, true: 색종이 덮임)

int main() {
    int N;
    cin >> N;

    // 색종이 붙이기
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;

        // (x, y)에서 시작하여 8x8 크기의 색종이를 붙임
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
