#include <iostream>
using namespace std;

int x1[2], y1[2], x2[2], y2[2];
int v[2001][2001];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];

    int offset = 1000;
    for(int i = y1[0] + offset; i <= y2[0] + offset; i++) {
        for(int j = x1[0] + offset; j <= x2[0] + offset; j++) {
            v[i][j] = 1;
        }
    }

    int x11=max(x1[0],x1[1]);
    int x22=min(x2[0],x2[1]);
    int y11=max(y1[0],y1[1]);
    int y22=min(y2[0],y2[1]);

    for(int i = y11 + offset; i <= y22 + offset; i++) {
        for(int j = x11 + offset; j <= x22 + offset; j++) {
            v[i][j] = 0;
        }
    }
    

    // 남은 영역 카운트
    int cnt = 0;
    for(int i = y1[0] + offset; i <= y2[0] + offset; i++) {
        for(int j = x1[0] + offset; j <= x2[0] + offset; j++) {
            if(v[i][j] == 1) cnt++;
        }
    }

    cout << cnt;
    return 0;
}
