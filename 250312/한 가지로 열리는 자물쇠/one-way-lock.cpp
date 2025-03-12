#include <iostream>

using namespace std;

int N;
int a, b, c;

int main() {
    cin >> N;
    cin >> a >> b >> c;

    int ans;
    int cntA=0;
    int cntB=0;
    int cntC=0;

    for(int i=1; i<=N; i++){
        if(abs(a-i)>=3) cntA++;
    }
    for(int i=1; i<=N; i++){
        if(abs(b-i)>=3) cntB++;
    }
    for(int i=1; i<=N; i++){
        if(abs(c-i)>=3) cntC++;
    }

    ans=N*N*N-(cntA*cntB*cntC);
    cout<<ans;

    return 0;
}