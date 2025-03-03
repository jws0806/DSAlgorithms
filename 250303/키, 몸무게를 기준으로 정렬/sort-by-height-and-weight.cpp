#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

string name[10];
int height[10];
double weight[10];

bool cmp(int i, int j) {
    if(height[i]==height[j]){
        return weight[i]>weight[j];
    }
    else{
        return height[i]<height[j];
    }
}

int main() {
    int idx[10]; // 정렬을 위한 인덱스 배열

    int n;
    cin>>n;

    // 입력 받기
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> height[i] >> weight[i];
        idx[i] = i; // 초기 인덱스 설정
    }

    sort(idx, idx + n, cmp);

    for (int i = 0; i < 10; i++) {
        int index = idx[i];
        cout << name[index] <<" "<< height[index] <<" "<< weight[index] << endl;
    }

    return 0;
}
