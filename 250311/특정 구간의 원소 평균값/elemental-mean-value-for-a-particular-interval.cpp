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
            int avg;
            if (sum % (j - i + 1) == 0) {
                avg = sum / (j - i + 1);
                if (find(arr + i, arr + j+1, avg) != arr + j+1) {
                    cnt++;
                }
            }

        }
    }
    cout<<cnt;


    // Please write your code here.

    return 0;
}