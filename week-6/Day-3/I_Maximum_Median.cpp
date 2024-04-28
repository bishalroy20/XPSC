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

    sort(v.begin(),v.end());
    auto ok = [&](ll m){
        ll cnt = 0;
        for(int i=n/2;i<n;i++){
            cnt += (v[i] < m ? (m - v[i]) : 0);
            
        }
        return cnt <= k;
    };
    
    ll l=0,r=2e9,ans=0,mid;
    while(l <= r){
        mid = (l+r)/2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid -1;
        }
    }
    cout << ans << '\n';
    return 0;
}//pass