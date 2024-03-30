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
       ll n,q; cin >> n >> q;

        vector<ll> v(n);
        vector<ll> pre(n+1);
        for(ll i=0;i<n;i++){
            cin >> v[i];
            
        }
        // pre[0] = v[0];
        for(int i=1;i<=n;i++){
            pre[i] = v[i-1] + pre[i-1];
        }
        // for(int i=0;i<n;i++){
        //     cout << pre[i] << " ";
        // }
        ll sum = pre[n];
        for(ll i=0;i<q;i++){
            ll l,r,k;
            cin >> l >> r >> k;

            
            ll prev_s = (pre[r] - pre[l-1]);
            ll new_s = ((r-l+1)*k);
            
            
            if(((sum-prev_s)+new_s)%2 != 0) yes
            else no
        }
    }
    return 0;
}//tle