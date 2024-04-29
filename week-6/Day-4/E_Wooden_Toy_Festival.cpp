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
        ll n; cin >> n;
        vector<ll> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        auto ok = [&](ll dif){
            ll cnt = 1;
            for(int l=0,r=l+1;r<n;){
                if(v[l] + 2*dif >= v[r]){
                    r++;
                }
                else{
                    cnt++; l=r; r = l;
                }
            }
            return cnt < 4;
        };

        ll l=0,r=1e18,mid,ans;
        while(l <= r){
            mid = (l+r)/2;
            if(ok(mid)){
                ans = mid;
                r = mid -1;
            }
            else{
                l = mid +1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}//pass