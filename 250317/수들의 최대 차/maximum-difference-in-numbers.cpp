

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int N, K;
int arr[1000];


int main() {
    cin >> N >> K;


    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+N);

    int max_cnt=0;
    for(int i=0; i<N; i++){
        int min_val=10001;
        int max_val=0;
        int cnt=0;
        for(int j=i; j<N; j++){
            min_val=min(min_val,arr[j]);
            max_val=max(max_val,arr[j]);

            if(max_val-min_val<=K){
                cnt++;
            }
            else{
                break;
            }
        }
        max_cnt=max(max_cnt,cnt);
    }
    cout<<max_cnt;


    return 0;
}