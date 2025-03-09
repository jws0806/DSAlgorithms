#include <iostream>
#include <string>

using namespace std;

int n, t;
string str;
int board[100][100];

int main() {
    cin >> n >> t;
    cin >> str;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }
    int x=n/2;
    int y=n/2;
    int dir=0;
    int sum=board[y][x];
    for(int i=0; i<str.size(); i++){
        // cout<<dir<<" ";
        // cout<<sum<<endl;
        if(str[i]=='R'){
            dir++;
            if(dir>3){
                dir=0;
            }
        }
        else if(str[i]=='L'){
            dir--;
            if(dir<0){
                dir=3;
            }
        }
        else if(str[i]=='F'){
            if(dir==0 && y>0){
                y--;
                sum=sum+board[y][x];
                }
            else if(dir==1 && x<n-1){
                x++;
                sum=sum+board[y][x];
                }
            else if(dir==2&&y<n-1){
                y++;
                sum=sum+board[y][x];
                }
            else if(dir==3 && x>0){
                x--;
                sum=sum+board[y][x];
                }
        }
    }
        

    cout<<sum;


    return 0;
}