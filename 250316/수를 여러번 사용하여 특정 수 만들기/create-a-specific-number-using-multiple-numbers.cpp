#include <iostream>
#include <cmath>

using namespace std;

int A, B, C;

int main() {
    cin >> A >> B >> C;

    int sum=0;
    int max_sum=0;

    for(int i=0; i<1000; i++){
        for(int j=0; j<1000; j++){
            sum=A*i+B*j;
            if(sum<=C){
                max_sum=max(sum,max_sum);
            }
        }
    }

    cout<<max_sum;

    // Please write your code here.

    return 0;
}