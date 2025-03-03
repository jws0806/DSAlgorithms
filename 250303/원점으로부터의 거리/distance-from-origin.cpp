#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){
    int n;
    int x;
    int y;
    vector<pair<int,int>>v;

    cin>>n;

    for(int i=0; i<n; i++){
        cin>>x>>y;
        int d=abs(x)+abs(y);
        v.push_back({d,i+1});

    }
    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout<<v[i].second<<"\n";
    }
}