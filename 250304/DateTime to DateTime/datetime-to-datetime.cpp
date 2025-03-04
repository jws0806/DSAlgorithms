#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int day=11;
    int hour=11;
    int min=11;
    int min_time=0;

    while(true){
        if(day==a && hour==b && min==c){
            break;
        }
      
        min++;
        min_time++;
        if(min == 60){
            hour++;
            min=0;
        }
        if(hour == 24){
            day++;
            hour=0;
        }

    }

    cout<<min_time;
    // Please write your code here.

    return 0;
}