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
    int cnt=1;
    int Max=0;
    for(int i=0; i<N-1; i++){
        if(arr[i]*arr[i+1]>0){
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