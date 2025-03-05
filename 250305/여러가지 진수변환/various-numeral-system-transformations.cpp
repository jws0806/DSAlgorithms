#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int N, B;

int main() {
    cin >> N >> B;

    vector<string> s;

    while(N>0){
        s.push_back(to_string(N%B));
        N=N/B;
    }
    reverse(s.begin(), s.end());

    for(int i=0; i<s.size(); i++){
        cout<<s[i];
    }
    // Please write your code here.

    return 0;
}