#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    int sum=0;

    for(int i=0; i<n.size(); i++){
        sum+=pow(a,i);

    }
    int num=sum;

    vector<string>v;
    while(num>0){
        v.push_back(to_string(num%b));
        num=num/b;
    }

    reverse(v.begin(),v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }

    // Please write your code here.

    return 0;
}