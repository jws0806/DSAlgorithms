#include <iostream>
#include <vector>

using namespace std;

int N;
int A[100], B[100];
vector<int>v(1000,0);

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    for(int i=0; i<N; i++){
        for(int j=A[i]; j<=B[i]; j++){
            v[j]++;
        }
    }
    int Max=0;
    for(int i=0; i<N; i++){
        int cnt=0;
    
        for(int j=A[i]; j<=B[i]; j++){
            v[j]--;
        }
        for(int k=0; k<=1000; k++){
            if(v[k]>=1){
                cnt++;
            }
        }
        Max=max(cnt,Max);
    }
    cout<<Max;

    return 0;
}