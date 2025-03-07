#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    int cnt=1;
    int max=0;
    for(int i=0; i<N-1; i++){
        if(arr[i]*arr[i+1]>0){
            cnt++;
            if(max<cnt){
                max=cnt;
            }
        }
        else{
            cnt=1;
        }
    }
    cout<<max;

    // Please write your code here.

    return 0;
}