#include <iostream>
#include <cmath>

using namespace std;

int X, Y;

int main() {
    int Max=0;
    cin >> X >> Y;

    for(int i=X; i<=Y; i++){
        int num=i;
        int sum=0;
        while(num>0){
            sum=sum+num%10;
            num=num/10;
        }
        Max=max(sum,Max);
    }
    cout<<Max;

    return 0;
}