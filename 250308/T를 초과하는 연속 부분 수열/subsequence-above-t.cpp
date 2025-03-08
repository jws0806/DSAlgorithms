#include <iostream>
#include <cmath>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt=0;
    int Max=0;
    for(int i=0; i<n; i++){
        if(arr[i]>t){
            cnt++;
        }
        else{
            Max=max(cnt,Max);
            cnt=0;
        }
    }
    Max=max(cnt,Max);
    cout<<Max;

    // Please write your code here.

    return 0;
}