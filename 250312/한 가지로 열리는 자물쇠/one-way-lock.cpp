#include <iostream>

using namespace std;

int N;
int a, b, c;

int main() {
    cin >> N;
    cin >> a >> b >> c;

    int ans;

    ans=N*N*N-((N-a-2)*(N-b-2)*(N-c-2));
    cout<<ans;

    return 0;
}