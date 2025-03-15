#include <iostream>
#include <algorithm>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int main() {
    cin >> N >> C >> G >> H;
   

    for (int i = 0; i < N; i++) {
        cin >> Ta[i] >> Tb[i];
    }
    sort(Ta, Ta+N);
    sort(Tb, Tb+N);
    int Min=Ta[0];
    int Max=Tb[N-1];

    int Max_Load=0;

    for(int i=Min; i<Max; i++){
        int load=0;
        for(int j=0; j<N; j++){
            if(i<Ta[j]){
                load+=C;
            }
            else if(i>=Ta[j] && i<=Tb[j]){
                load+=G;
            }
            else{
                load+=H;
            }
        }
        Max_Load=max(Max_Load,load);

    }
    cout<<Max_Load;

    // Please write your code here.

    return 0;
}