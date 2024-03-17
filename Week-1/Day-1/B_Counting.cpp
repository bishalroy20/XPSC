#include <bits/stdc++.h>
// #define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,cnt=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        cnt++;
    }
    cout << cnt << '\n';
    return 0;
}