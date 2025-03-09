#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    // 하(↓), 우(→), 상(↑), 좌(←) 순서
    int dx[4] = {1, 0, -1, 0}; 
    int dy[4] = {0, 1, 0, -1};

    vector<vector<char>> v(n, vector<char>(m, ' '));  // 초기값 ' ' (공백)

    int x = 0, y = 0, dir_num = 0;
    v[y][x] = 'A';  // 시작점

    for (int i = 1; i < n * m; i++) {  // 'A'를 이미 채웠으므로 i=1부터 시작
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n || v[ny][nx] != ' ') {
            dir_num = (dir_num + 1) % 4;
            nx = x + dx[dir_num];
            ny = y + dy[dir_num];
        }

        x = nx;
        y = ny;
        v[y][x] = 'A' + i;  
    }

    // 결과 출력
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
