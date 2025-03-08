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
    int prev_lead = (s1[0] > s2[0]) ? 1 : (s1[0] < s2[0]) ? 2 : 0; // 1: A, 2: B, 0: 공동 선두

     for (int i = 1; i < s1.size(); i++) {
        int current_lead = (s1[i] > s2[i]) ? 1 : (s1[i] < s2[i]) ? 2 : 0;

        // 선두 변경 시 카운트 증가 (단, 공동 선두에서 바뀌는 것은 제외)
        if (prev_lead != 0 && current_lead != 0 && prev_lead != current_lead) {
            cnt++;
        }

        // 공동 선두가 아닐 때만 선두 갱신
        if (current_lead != 0) {
            prev_lead = current_lead;
        }
     }

    cout<<cnt;

    return 0;
}