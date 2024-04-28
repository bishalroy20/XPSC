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

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    auto ok = [&](ll m){
        ll total = 0;
        for(int i=0;i<n;i++){
            total += (m/v[i]);
            if(total >= k){
                return true;
            }
        }
        return false;
    };
    
    ll l=0,r=1e18,ans,mid;
    while(l <= r){
        mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            r = mid -1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}//pass