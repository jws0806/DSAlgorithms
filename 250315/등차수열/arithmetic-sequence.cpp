#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a,a+n);
    int Min=a[0];
    int Max=a[n-1];

    int k=Min+1;
    int cnt=0;

    while(k<Max){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[j]-k == k-a[i]){
                    cnt++;
                }
            }
        }
        k++;
    }
    cout<<cnt;
    return 0;
}