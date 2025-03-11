#include <iostream>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int Max=0;
    for(int i=0; i<=n-k; i++){
        int sum=0;
        for(int j=i; j<i+k; j++){
            sum=sum+arr[j];
        }
        if(sum>Max){
            Max=sum;
        }
    }
    cout<<Max;

    // Please write your code here.

    return 0;
}