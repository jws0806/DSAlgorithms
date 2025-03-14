#include <iostream>
#include <cmath>
using namespace std;

int N, B;
int P[1000];

int main() {
    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }
    int Max=0;
    for(int i=0; i<N; i++){
        int sum=0;
        int cnt=0;
        for(int j=0; j<N; j++){
           
                if(i==j){
                    sum+=P[j]/2;
                    cnt++;
                    if(sum>B){
                        cnt--;
                        break;

                    }
                }
                else{
                    sum+=P[j];
                    cnt++;
                    if(sum>B){
                        cnt--;
                    }
                }
        }
        //cout<<cnt;
        Max=max(cnt,Max);
    }
    cout<<Max;
    return 0;
}