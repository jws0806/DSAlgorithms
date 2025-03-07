#include <iostream>
#include <cmath>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int Max=1;
    int cnt=1;
    for(int i=0; i<N-1; i++){
        if(arr[i+1]>arr[i]){
            cnt++;
        }
        else{
            cnt=1;
        }
        Max=max(cnt,Max);
    }
    cout<<Max;

    // Please write your code here.

    return 0;
}