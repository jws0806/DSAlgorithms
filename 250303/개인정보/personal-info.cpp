#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

string name[5];
int height[5];
double weight[5];

bool cmp_name(int i, int j) {
    return name[i] < name[j];
}

bool cmp_height(int i, int j) {
    return height[i] > height[j];
}

int main() {
    int idx[5]; 

    for (int i = 0; i < 5; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        idx[i] = i; 
    }

    sort(idx, idx + 5, cmp_name);
    cout << "name" << endl;
    for (int i = 0; i < 5; i++) {
        int index = idx[i];
        cout << name[index] << " " << height[index] << " "
             << weight[index] << endl;
    }

    // 키 기준 정렬 및 출력
    sort(idx, idx + 5, cmp_height);
    cout << "\nheight" << endl;
    for (int i = 0; i < 5; i++) {
        int index = idx[i];
        cout << name[index] << " " << height[index] << " "
             << weight[index] << endl;
    }

    return 0;
}
