#include <iostream>
#include <cmath>

using namespace std;

int N, S;
int arr[100];

int main() {
    cin >> N >> S;
    int sum=0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }

    int min=100000;
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            int num=abs(S-(sum-arr[i]-arr[j]));
            //cout<<num<<" ";
            if(min>num){
                min=num;
            }
        }
    }
    cout<<min;

    // Please write your code here.

    return 0;
}