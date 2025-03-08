#include <iostream>
#include <vector>

using namespace std;

int N, M;
int v, t;
int v2, t2;

vector<long>s1;
vector<long>s2;
long sum1=0;
long sum2=0;

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v >> t;
        for(int i=1; i<=t; i++){
            sum1=sum1+v;
            s1.push_back(sum1);
        }
    }

    for (int i = 0; i < M; i++) {
        cin >> v2 >> t2;
        for(int i=1; i<=t2; i++){
            sum2=sum2+v2;
            s2.push_back(sum2);
        }
    }
    long cnt=0;
    for(int i=0; i<s1.size()-1; i++){
        // cout<<s1[i]<<" "<<s2[i]<<endl;
        if(s1[i]>=s2[i] && s1[i+1]<s2[i+1]){
            cnt++;
        }
        if(s1[i]<=s2[i] && s1[i+1]>s2[i+1]){
            cnt++;
        }
    }

    cout<<cnt;

    // Please write your code here.



    return 0;
}