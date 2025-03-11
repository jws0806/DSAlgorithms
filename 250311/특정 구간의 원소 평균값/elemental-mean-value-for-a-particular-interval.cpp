#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int cnt=0;

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum=0;
            for(int k=i; k<=j; k++){
                sum+=arr[k];
            }
            int avg=sum/(j-i+1);
            if (find(arr + i, arr + j, avg) != arr + j) {
                    cnt++;
                }

        }
    }
    cout<<cnt;


    // Please write your code here.

    return 0;
}