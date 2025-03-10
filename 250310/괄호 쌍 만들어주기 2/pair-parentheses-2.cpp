#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    int cnt=0;

    for(int i=0; i<A.size()-3; i++){
        for(int j=i+2; j<A.size()-1; j++){
            if(A[i]=='(' && A[i+1]=='(' && A[j]==')' && A[j+1]==')'){
                cnt++;
            }
        }
    }

    // Please write your code here.
    cout<<cnt;

    return 0;
}