#include <iostream>
#include <string>

using namespace std;

string commands;
int x=0;
int y=0;

int main() {
    cin >> commands;

    int way=0;
    int cnt=0;

    for(int i=0; i<commands.size(); i++){
        if(commands[i]=='F'){
            if(way==0){
                y++;

            }
            else if(way==1){
                x++;
            }
            else if(way==2){
                y--;
            }
            else if(way==3){
                x--;
            }

        }
        else if(commands[i]=='R'){
            way++;
            if(way==4) way=0;
        }
        else{
            way--;
            if(way<0) way=3;
        }
        cnt++;
        //cout<<x<<" "<<y<<endl;
        if(x==0 && y==0){
            cout<<cnt;
            return 0;
        }

    }
    if(x!=0 && y!=0) cout<<-1;

    // Please write your code here.

    return 0;
}