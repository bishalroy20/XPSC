#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x,y; cin >> x >> y;
    ll ans = x,cnt = 0;
    while(ans <= y){
        ans *= 2;
        cnt++;
    }
    cout << cnt << '\n';

    return 0;
}