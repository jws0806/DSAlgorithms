#include <iostream>
#include <string>
#include <algorithm>
#include<cmath>
#include <vector>
using namespace std;

string N;

int main() {
    cin >> N;

    string s=N;

    reverse(s.begin(),s.end());

    int sum=0;

    for(int i=0; i<s.size(); i++){
        int tmp=s[i]-'0';
        sum+=tmp*pow(2,i);
    }
    int num=sum*17;

    vector<string>v;

    while(num>0){
        v.push_back(to_string(num%2));
        num=num/2;
    }

    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    return 0;
}