#include <iostream>
#include <vector>

using namespace std;

int N, M;
int r[10000], c[10000];


int main() {
    cin >> N >> M;
    vector<vector<int>>v(N,vector<int>(N,0));

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
        v[r[i]-1][c[i]-1]=1;

        int y=r[i]-1;
        int x=c[i]-1;
        int cnt=0;

        if(y-1>=0 && v[y-1][x]==1) cnt++;
        if(y<N-1 && v[y+1][x]==1) cnt++;
        if(x-1>=0 && v[y][x-1]==1) cnt++;
        if(x<N-1 && v[y][x+1]==1) cnt++;

         if(cnt==3){
            cout<<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
 
    return 0;
}