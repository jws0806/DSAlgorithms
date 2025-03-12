#include <iostream>
#include <cmath>

using namespace std;

int a[6];

int main() {
    int sum=0;
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
        sum+=a[i];
    }

    long min=10000000;

    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            for(int k=j+1; k<6; k++){
                int team1=a[i]+a[j]+a[k];
                int team2=sum-team1;
                //cout<<team1<<" "<<team2<<endl;
                int diff=abs(team2-team1);
                if(diff<min){
                    min=diff;
                }

            }
        }
    }
    cout<<min;



    // Please write your code here.

    return 0;
}