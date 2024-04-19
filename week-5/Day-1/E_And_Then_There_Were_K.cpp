/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

void solve(){
    ll n; cin >> n;
    ll x = __lg(n);
    // cout << x << '\n';
    ll ans = (1 << x)&n;
    cout << ans-1 << '\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}//pass