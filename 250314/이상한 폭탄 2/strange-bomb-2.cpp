#include <iostream>

using namespace std;

int N, K;
int num[100];

int main() {
    cin >> N >> K;

    int Max=0;

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }
    for(int i=0; i<N; i++){
        for(int j=i+1; (j<i+K || j<N); j++){
            if(num[j]==num[i]){
                if(Max<num[j]){
                    Max=num[j];
                    break;
                }
            }
        }
    }
    if(Max==0) cout<<-1;
    else cout<<Max;



    return 0;
}