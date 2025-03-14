#include <iostream>
#include <vector>

using namespace std;

int N;
int A[100], B[100];
vector<int>v(1001,0);

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    for(int i=0; i<N; i++){
        for(int j=A[i]; j<B[i]; j++){
            v[j]++;
        }
    }
    //  for(int i=0; i<10; i++){
    //          cout<<v[i]<<" ";   
    //  }

    int Max=0;
    for(int i=0; i<N; i++){
        int cnt=0;
    
        for(int j=A[i]; j<B[i]; j++){
            v[j]--;
        }
        for(int k=0; k<=1000; k++){
            if(v[k]>=1){
                cnt++;
            }
        }
        Max=max(cnt,Max);
    }
    cout<<Max+1;

    return 0;
}