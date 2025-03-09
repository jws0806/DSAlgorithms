#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string a;

int main() {
    cin >> a;

    bool flag=true;

    for(int i=0; i<a.size(); i++){
        if(a[i] =='0'){
            a[i] ='1';
            flag=false;
            break;
        }
    }
    string ans;
    if(flag==true){
        
        ans[0]='1';
        for(int i=0; i<a.size(); i++){
            ans[i+1]='0';
        }
        cout<<ans;
        return 0;
    }
    // for(int i=0; i<a.size(); i++){
    //     cout<<a[i];
    // }
    else{
        int sum=0;
        reverse(a.begin(),a.end());
        for(int i=0; i<a.size(); i++){
            sum+=(a[i]-'0')*pow(2,i);
            }
            cout<<sum;
        }

    return 0;
}