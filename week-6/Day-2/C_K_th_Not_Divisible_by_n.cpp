/*
    author : BishalRoy20
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll ans = k + floor((k-1)/(n-1));
        cout << ans << '\n';
    }
    return 0;
}//pass