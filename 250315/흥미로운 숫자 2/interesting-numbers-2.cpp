#include <iostream>
#include <vector>

using namespace std;

int X, Y;

int one_count=0;

int main() {
    cin >> X >> Y;
    for(int i=X; i<=Y; i++){
        int n=i;
        vector<int>num(10,0);
        while(n>0){
            num[n%10]++;
            n=n/10;
        }
        int cnt=0;
        for(int j=0; j<10; j++){
            if(num[j]>0){
                cnt++;
            }
        }
        if(cnt==2){
            one_count++;
        }
        //cout<<endl;
    }
    cout<<one_count;

    return 0;
}