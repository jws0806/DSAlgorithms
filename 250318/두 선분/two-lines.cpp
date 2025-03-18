#include <iostream>

using namespace std;

int x1, x2, x3, x4;

int main() {
    cin >> x1 >> x2 >> x3 >> x4;

    if((x1<x3 && x3<x2) || (x3<x1 && x4>x2)){
        cout<<"intersecting";
    }
    else{
        cout<<"nonintersecting";
    }

    // Please write your code here.

    return 0;
}