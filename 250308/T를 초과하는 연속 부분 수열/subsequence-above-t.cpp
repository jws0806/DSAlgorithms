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
    for(int i=0; i<n-1; i++){
        if(arr[i]>t && arr[i+1]>t){
            cnt++;
        }
        Max=max(cnt,Max);
    }
    if(Max==0) cout<<0;
   else cout<<Max+1;

    // Please write your code here.

    return 0;
}