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
        for(int j=0; (j<N || sum<=B); j++){
           
                if(i==j){
                    sum+=P[j]/2;
                    cnt++;
                }
                else{
                    sum+=P[j];
                    cnt++;
                }
        }
        Max=max(cnt,Max);
   

    }
     cout<<Max-1;


    // Please write your code here.

    return 0;
}