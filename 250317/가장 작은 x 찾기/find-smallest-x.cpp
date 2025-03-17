#include <iostream>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }
    int x=a[0];
    while(true){
        int num=x;
        num=num*2;
        bool flag=true;
        for(int i=0; i<n; i++){
            //cout<<num<<" ";
            if(num<a[i] || num>b[i]){
                flag=false;
            }
            num=num*2;
        }
        //cout<<endl;
        if(flag==true){
            cout<<x;
            break;
        }
        x++;
    }
   

    // Please write your code here.

    return 0;
}