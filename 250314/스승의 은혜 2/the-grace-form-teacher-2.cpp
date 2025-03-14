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
            int price;
            if(i==j){
                price=P[i]/2;   
            }
            else {
                price=P[i];
            }

            if(sum+price<=B){
                sum+=price;
                cnt++;
            }
            else{
                cnt--;
                break;
            }
        }
        Max=max(cnt,Max);
    }
    cout<<Max-1;
    return 0;
}