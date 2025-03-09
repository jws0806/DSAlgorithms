#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    for(int i=0; i<a.size(); i++){
        if(a[i] =='0'){
            a[i] ='1';
            break;
        }
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i];
    // }
    int sum=0;
    reverse(a.begin(),a.end());
    for(int i=0; i<a.size(); i++){
        sum+=(a[i]-'0')*pow(2,i);
    }
    cout<<sum;

    return 0;
}