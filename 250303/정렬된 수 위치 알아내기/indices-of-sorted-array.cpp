#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int sequence[1000];

int main() {
    cin >> N;

    vector<pair<int,int>>v;
    for (int i = 0; i < N; i++) {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(), v.end());

    vector<int>result(N);

    for(int i=0; i<N; i++){
        result[v[i].second]= i +1;
    }

    for(int i=0; i<N; i++){
        cout<<result[i]<<" ";
    }



    return 0;
}
