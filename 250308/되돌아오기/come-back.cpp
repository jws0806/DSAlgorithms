#include <iostream>

using namespace std;

int N;
char dir;
int dist;
int x=0;
int y=0;

int main() {
    cin >> N;

    int time=0;
    int ans=0;

    for (int i = 0; i < N; i++) {
        cin >> dir >> dist;
        for(int j=0; j<dist; j++){
            if(dir=='N')          y++;
            else if(dir == 'E')   x++;
            else if(dir == 'S')   y--;
            else if(dir == 'W')   x--;

            time++;
           //cout<<x<<" "<<y<<endl;

            if(x==0 && y==0){
                ans=time;
                cout<<ans;
                return 0;
            }
        }

    }
    if(x!=0 || y!=0) cout<<-1;
    else cout<<ans;

    // Please write your code here.

    return 0;
}