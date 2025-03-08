#include <iostream>

using namespace std;

int n, m;
int t;
char d;
int t_b;
char d_b;
long a[1000000];
long b[1000000];

int main() {
    cin >> n >> m;
    int sumA=0;
    int T_A=0;
    int sumB=0;
    int T_B=0;

    int timeA=0;
    int timeB=0;

    for (int i = 0; i < n; i++) {
        cin >> t >> d;
        timeA+=t;
        for(int i=0; i<t; i++){
            if(d=='R'){
                a[T_A]=sumA;
                sumA=sumA+1;
            }
            else{
                a[T_A]=sumA;
                sumA=sumA-1;
            }
            T_A++;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> t_b >> d_b;
        timeB+=t_b;
        for(int i=0; i<t_b; i++){
            if(d_b=='R'){
                b[T_B]=sumB;
                sumB=sumB+1;
            }
            else{
                b[T_B]=sumB;
                sumB=sumB-1;
            }
            T_B++;
        }
    }
    int N=max(timeA,timeB);
    if(timeA>timeB){
        for(int i=0; i<timeA-timeB; i++){
            b[T_B]=sumB;
            T_B++;
        }
    }
    else if(timeA<timeB){
        for(int i=0; i<timeB-timeA; i++){
            a[T_A]=sumA;
            T_A++;
        }
    }

    int cnt=0;

    if(a[1]==b[1]){
        cnt++;
    }
    for(int i=2; i<=N; i++){
        //cout<<a[i]<<" "<<b[i]<<endl;
        if(a[i-1]!=b[i-1] && a[i]==b[i]){
            cnt++;
        }
    }
    cout<<cnt;


    return 0;

}