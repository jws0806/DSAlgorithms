#include <iostream>
#include <vector>

using namespace std;

int n;
int x;
char dir;

int main() {
    cin >> n;

    vector<int>v_p(1000,0);
    vector<int>v_m(1000,0);
    int tmp=0;

    for (int i = 0; i < n; i++) {
        int tmp_old=tmp;
        cin >> x >> dir;
        if(dir=='R'){
            tmp=tmp+x;
            for(int j=tmp_old; j<tmp; j++){
                if(j>=0) v_p[j]++;
                else v_m[abs(j)]++;
            }
        }
        else{
            tmp=tmp-x;
             for(int j=tmp; j<tmp_old; j++){
                if(j>=0) v_p[j]++;
                else v_m[abs(j)]++;
            }

        }

    }
    int cnt=0;

    for(int i=0; i<1000; i++){
        if(v_p[i]>=2){
            cnt++;
        }
        if(v_m[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;

    // Please write your code here.

    return 0;
}