#include <iostream>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int x=a[0];
    while(true){
        int num=2*x;
     
        bool flag=true;
        for(int i=0; i<n; i++){
            if(num<a[i] || num>b[i]){
                flag=false;
                break;
            }
            num*=2;
        }
        if(flag==true){
            cout<<x;
            break;
        }
        x++;
    }
   

    // Please write your code here.

    return 0;
}