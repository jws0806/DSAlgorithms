#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    int day=11;
    int hour=11;
    int min=11;
    int min_time=0;

    int min_before=day*24*60+hour*60+min;
    int min_after=a*24*60+b*60+c;

    min_time=min_after-min_before;
    if(min_time<0) cout<<-1;
    else cout<<min_time;

    return 0;
}