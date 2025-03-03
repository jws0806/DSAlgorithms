#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int h;
int w;
bool cmp(pair<int,int>a, pair<int,int>b){
    if(a.first==b.first){
        return a.second>b.second;
    }
    else{
        return a.first<b.first;
    }

}

int main() {
    vector<pair<int,int>>v;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> h >> w;
        v.push_back({h,w});
    }
    sort(v.begin(), v.end(),cmp);

    for(int i=0; i<N; i++){
        cout<<v[i].first<<" "<<v[i].second<<" "<<i+1<<"\n";
    }


    return 0;
}