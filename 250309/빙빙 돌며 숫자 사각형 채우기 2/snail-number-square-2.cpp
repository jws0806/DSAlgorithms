#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    vector<vector<int>>v(n,vector<int>(m,0));

    int dx[4]={1,0,-1,0};
    int dy[4]={0,1,0,-1};
    int x=0;
    int y=0;
    int dir_num=0;

    v[x][y]=1;

    for(int i=2; i<=n*m; i++){
        int nx=x+dx[dir_num];
        int ny=y+dy[dir_num];

        if(nx<0 || nx>=n || ny<0 || ny>=m || v[nx][ny]!=0){
            dir_num=(dir_num+1)%4;
        }
        x=x+dx[dir_num];
        y=y+dy[dir_num];
        v[x][y]=i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }


    // Please write your code here.

    return 0;
}