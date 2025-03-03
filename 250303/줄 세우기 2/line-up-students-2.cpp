#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int h, w;

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
    if (a.first.first == b.first.first) {
        return a.first.second > b.first.second;
    }
    return a.first.first < b.first.first;
}

int main() {
    vector<pair<pair<int, int>, int>> v;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h >> w;
        v.push_back({{h, w}, i + 1});  // 원래 입력된 인덱스를 저장
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << "\n";
    }

    return 0;
}
