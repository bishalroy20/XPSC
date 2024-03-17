#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    float a,b;
    float t;
    cin >> a >> b >> t;
    
    int ans = (t+0.5)/a;
    cout << ans*b << '\n';

    return 0;
}