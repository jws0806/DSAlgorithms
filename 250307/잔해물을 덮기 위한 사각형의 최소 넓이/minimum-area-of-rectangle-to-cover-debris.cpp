#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    // 입력 받기
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // 겹치는 부분 좌표 계산
    int x_overlap1 = max(x1, x3);
    int x_overlap2 = min(x2, x4);
    int y_overlap1 = max(y1, y3);
    int y_overlap2 = min(y2, y4);

    // 겹치는 부분이 있는지 확인
    bool overlapExists = (x_overlap1 < x_overlap2) && (y_overlap1 < y_overlap2);

    if (!overlapExists) {
        // 겹치는 부분이 없으면 원래 직사각형 유지
        cout << (x2 - x1) * (y2 - y1) << endl;
    } 
    else {
        // 남은 영역의 최소 직사각형을 찾기
        int min_x1 = x1, max_x2 = x2, min_y1 = y1, max_y2 = y2;

        if (y_overlap1 == y1 && y_overlap2 == y2) {
            // 겹치는 부분이 가로 전체를 덮는 경우
            if (x_overlap1 == x1) min_x1 = x_overlap2; // 왼쪽 제거
            else if (x_overlap2 == x2) max_x2 = x_overlap1; // 오른쪽 제거
        }
        if (x_overlap1 == x1 && x_overlap2 == x2) {
            // 겹치는 부분이 세로 전체를 덮는 경우
            if (y_overlap1 == y1) min_y1 = y_overlap2; // 아래쪽 제거
            else if (y_overlap2 == y2) max_y2 = y_overlap1; // 위쪽 제거
        }

        // 최소 직사각형의 면적 출력
        cout << (max_x2 - min_x1) * (max_y2 - min_y1) << endl;
    }

    return 0;
}
